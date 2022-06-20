#include <string>
#include <vector>

using namespace std;

string solution(string number, int k) {
    string answer = "";
    int numbersize = number.size() - k;
    int startidx = 0;
    for (int i = 0; i < numbersize; i++) {
        int maxidx = startidx;
        char maxnum = number[startidx];
        for (int j = startidx; j <= i + k; j++) {
            if (maxnum < number[j]) {
                maxidx = j;
                maxnum = number[j];
            }
        }
        startidx = maxidx + 1;
        answer += maxnum;
    }
    return answer;
}