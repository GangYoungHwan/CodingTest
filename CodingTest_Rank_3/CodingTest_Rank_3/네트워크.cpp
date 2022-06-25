#include <string>
#include <vector>

using namespace std;
bool computer[201];
void dfs(int curr, int n, vector<vector<int>>computers) {
    computer[curr] = true;//����
    for (int i = 0; i < n; i++) {
        if (!computer[i] && computers[curr][i])
            dfs(i, n, computers);//curr���� ��ǻ�� ����
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {//��ǻ�� ������ŭ ����Ȯ��
        if (!computer[i]) {//��Ʈ��ũ ������ �ȵǾ��ִٸ�
            dfs(i, n, computers);//��Ʈ��ũ ����
            answer++;
        }
    }
    return answer;
}