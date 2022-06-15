#include<vector>
#include<queue>

using namespace std;

int dx[4] = { 0,0,-1,1 };
int dy[4] = { 1,-1,0,0 };
bool visit[101][101] = { false, };
int solution(vector<vector<int> > maps)
{
    queue<pair<pair<int, int>, int>> q;
    int col = maps.size();
    int row = maps[0].size();
    q.push({ { 0, 0 }, 1 });
    visit[0][0] = true;
    while (!q.empty())
    {
        int y = q.front().first.first;
        int x = q.front().first.second;
        int dis = q.front().second;
        q.pop();
        if (y == col - 1 && x == row - 1)
            return dis;
        for (int dir = 0; dir < 4; dir++)
        {
            int ny = y + dy[dir];
            int nx = x + dx[dir];
            int ndis = dis + 1;
            if (ny < 0 || ny >= col || nx < 0 || nx >= row)
                continue;
            if (!visit[ny][nx] && maps[ny][nx] == 1)
            {
                q.push({ { ny, nx }, ndis });
                visit[ny][nx] = true;
            }
        }
    }
    return -1;
}