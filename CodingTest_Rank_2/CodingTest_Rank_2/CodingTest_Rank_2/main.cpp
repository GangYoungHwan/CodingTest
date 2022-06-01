#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <sstream>
using namespace std;
int solution(vector<int> scoville, int K) 
{
    int answer = 0;
    sort(scoville.begin(), scoville.end());
    int temp_scoville = scoville[0];
    int next = 0;
    for (int i = 0; i < scoville.size(); i++)
    {
        int minscov = 0;
        int maxscov = 0;
        if (next < scoville.size()&& scoville[next] <K)
        {
            next++;
            minscov = min(temp_scoville, scoville[next]);
            maxscov = max(temp_scoville, scoville[next]);
            temp_scoville = minscov + (maxscov * 2);
        }
    }
    return next;
}
int main(void) {

    cout << ((99 - 93) / 1) + 1;
    
    return 0;
}
