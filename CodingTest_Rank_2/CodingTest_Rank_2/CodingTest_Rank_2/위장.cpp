#include <string>
#include <vector>
#include <map>
using namespace std;

int solution(vector<vector<string>> clothes) {
    int answer = 1;
    map<string, int> m;
    for (auto clothe : clothes) {
        m[clothe[1]]++;
    }
    for (auto itr = m.begin(); itr != m.end(); itr++) {
        answer *= itr->second + 1;
    }
    return answer - 1;
}