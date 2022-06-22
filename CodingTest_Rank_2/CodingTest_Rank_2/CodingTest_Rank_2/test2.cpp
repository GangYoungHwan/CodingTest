#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int nsize = number.size() - k;
    int start = 0;
    for (int i = 0; i < nsize; i++) {
        int idx = start;
        char cmax = number[start];
        for (int j = start; j <= i + 4; j++) {
            if (cmax < number[j]) {
                cmax = number[j];
                idx = j;
            }
        }
        start = idx + 1;
        answer += cmax;
    }
    return answer;
}