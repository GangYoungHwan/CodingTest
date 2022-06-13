#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <sstream>
#include <queue>
using namespace std;

int solution(vector<int> priorities, int location) {
    int answer = 0;
    queue<int> print;
    for (int i = 0; i < priorities.size(); i++)
        print.push(i);
    int maxvalue = *max_element(priorities.begin(), priorities.end());
    while (!print.empty())
    {
        int index = print.front();
        print.pop();

        if (maxvalue != priorities[index])
            print.push(index);
        else {
            answer++;
            if (index == location)
                return answer;
            priorities[index] = 0;
            maxvalue = *max_element(priorities.begin(), priorities.end());
        }
    }
}
int main(void)
{

    return 0;
}
