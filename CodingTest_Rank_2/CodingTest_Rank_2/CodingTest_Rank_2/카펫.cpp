#include <string>
#include <vector>

using namespace std;
/*
    갈색은 최소 3
    모든격자를 더해서 높이 구하기 sum%i == 0
    넓이는 sum /높이
*/
vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    int sum = brown + yellow;
    for (int h = 3;; h++) {
        if (sum % h == 0) {
            int w = sum / h;
            if ((h - 2) * (w - 2) == yellow) {
                answer.push_back(w);
                answer.push_back(h);
                break;
            }
        }
    }
    return answer;
}