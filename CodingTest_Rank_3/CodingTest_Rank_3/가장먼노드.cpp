#include <string>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int solution(int n, vector<vector<int>> edge) {
    int answer = 0;
    vector<vector<int>> graph(n + 1);
    for (int i = 0; i < edge.size(); i++) {
        int from = edge[i][0];
        int to = edge[i][1];
        graph[from].push_back(to);
        graph[to].push_back(from);
    }
    vector<int> dis(n + 1, -1);
    queue<int> q;
    dis[1] = 0;
    q.push(1);
    while (!q.empty()) {
        int curr = q.front();
        q.pop();
        for (auto next : graph[curr]) {
            if (dis[next] == -1) {
                dis[next] = dis[curr] + 1;
                q.push(next);
            }
        }
    }
    int maxdis = *max_element(dis.begin(), dis.end());

    for (int i = 0; i < dis.size(); i++) {
        if (maxdis == dis[i])
            answer++;
    }
    return answer;
}