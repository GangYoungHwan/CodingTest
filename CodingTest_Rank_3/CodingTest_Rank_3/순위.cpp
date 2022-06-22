#include <string>
#include <vector>

using namespace std;
bool graph[101][101];
int solution(int n, vector<vector<int>> results) {
    int answer = 0;
    for (int i = 0; i < results.size(); i++) {
        graph[results[i][0]][results[i][1]] = true;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (graph[i][k] && graph[k][j])//i가 k를 이기고 k가 j를 이기면 i는 j를 이길수있다
                    graph[i][j] = true;
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        int cnt = 0;
        for (int j = 1; j <= n; j++) {
            if (graph[i][j] || graph[j][i])
                cnt++;
        }
        if (cnt == n - 1)
            answer++;
    }
    return answer;
}