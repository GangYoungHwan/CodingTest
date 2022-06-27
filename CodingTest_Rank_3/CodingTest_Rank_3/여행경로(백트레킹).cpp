#include <string>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<string> answer;
bool visit[10000];
bool dfs(string start, vector<vector<string>> tickets, int depth) {
    answer.push_back(start);
    if (depth >= tickets.size()) {
        return true;
    }

    for (int i = 0; i < tickets.size(); i++) {
        if (start == tickets[i][0] && !visit[i]) {
            visit[i] = true;
            if (dfs(tickets[i][1], tickets, depth + 1))
                return true;
            visit[i] = false;
        }
    }
    answer.pop_back();
    return false;
}
vector<string> solution(vector<vector<string>> tickets) {
    sort(tickets.begin(), tickets.end());
    dfs("ICN", tickets, 0);
    return answer;
}