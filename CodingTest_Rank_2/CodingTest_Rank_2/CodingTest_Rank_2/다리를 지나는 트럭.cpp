#include <string>
#include <vector>
#include <queue>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int answer = 0;
    int temp = 0;
    int idx = 0;
    queue<int> q;
    while (1) {
        answer++;
        if (q.size() == bridge_length) {//차선이 꽉찬경우 통과
            temp -= q.front();
            q.pop();
        }
        if (temp + truck_weights[idx] <= weight) {//다음트럭이 들어올수있는지
            if (idx == truck_weights.size() - 1) {//마지막트럭이 지나갈때
                answer += bridge_length;
                break;
            }
            q.push(truck_weights[idx]);//트럭 추가
            temp += truck_weights[idx];
            idx++;
        }
        else
            q.push(0);//밀어내기
    }
    return answer;
}