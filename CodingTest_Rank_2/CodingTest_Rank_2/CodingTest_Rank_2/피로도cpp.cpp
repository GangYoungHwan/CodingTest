#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool visit[9];
int result;
vector<vector<int>> dungeon;
void dfs(int cnt, int k) {
    for (int i = 0; i < dungeon.size(); i++) {
        if (dungeon[i][0] <= k && !visit[i]) {
            visit[i] = true;
            dfs(cnt + 1, k - dungeon[i][1]);
            visit[i] = false;
        }
    }
    result = max(result, cnt);
    return;
}
int solution(int k, vector<vector<int>> dungeons) {
    dungeon = dungeons;
    dfs(0, k);
    return result;
}