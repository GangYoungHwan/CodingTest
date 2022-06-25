#include <string>
#include <vector>

using namespace std;
bool computer[201];
void dfs(int curr, int n, vector<vector<int>>computers) {
    computer[curr] = true;//연결
    for (int i = 0; i < n; i++) {
        if (!computer[i] && computers[curr][i])
            dfs(i, n, computers);//curr에서 컴퓨터 연결
    }
}
int solution(int n, vector<vector<int>> computers) {
    int answer = 0;
    for (int i = 0; i < n; i++) {//컴퓨터 갯수만큼 연결확인
        if (!computer[i]) {//네트워크 연결이 안되어있다면
            dfs(i, n, computers);//네트워크 연결
            answer++;
        }
    }
    return answer;
}