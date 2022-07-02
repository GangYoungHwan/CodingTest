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
        if (q.size() == bridge_length) {//������ ������� ���
            temp -= q.front();
            q.pop();
        }
        if (temp + truck_weights[idx] <= weight) {//����Ʈ���� ���ü��ִ���
            if (idx == truck_weights.size() - 1) {//������Ʈ���� ��������
                answer += bridge_length;
                break;
            }
            q.push(truck_weights[idx]);//Ʈ�� �߰�
            temp += truck_weights[idx];
            idx++;
        }
        else
            q.push(0);//�о��
    }
    return answer;
}