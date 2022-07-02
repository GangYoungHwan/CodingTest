#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> citations) {
    sort(citations.begin(), citations.end());
    if (citations[citations.size() - 1] == 0)
        return 0;
    for (int i = 0; i < citations.size(); i++) {
        if (citations.size() - i <= citations[i])
            return (citations.size() - i);
    }
}