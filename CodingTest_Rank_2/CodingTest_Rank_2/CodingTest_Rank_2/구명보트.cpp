#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;
    int peoplecnt = 0;
    int front = 0;
    int back = people.size() - 1;
    sort(people.begin(), people.end());
    while (peoplecnt < people.size()) {
        if (limit - people[front] >= people[back]) {
            peoplecnt += 2;
            front++;
            back--;
        }
        else {
            peoplecnt++;
            back--;
        }
        answer++;
    }
    return answer;
}