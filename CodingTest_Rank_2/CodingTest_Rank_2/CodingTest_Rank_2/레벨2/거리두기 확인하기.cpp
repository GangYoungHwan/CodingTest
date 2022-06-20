#include <string>
#include <vector>
#include <queue>
using namespace std;

int dx[4] = { 1,-1,0,0 };
int dy[4] = { 0,0,1,-1 };
bool DFS(vector<string> place, int x, int y)
{
    bool visit[5][5] = { false, };
    queue < pair<pair<int, int>, int>> q;
    q.push({ {x,y},0 });
    visit[y][x] = true;
    while (!q.empty())
    {
        int xx = q.front().first.first;
        int yy = q.front().first.second;
        int depth = q.front().second;
        q.pop();
        if (depth > 2) continue;
        if (depth != 0 && place[yy][xx] == 'P')
            return false;
        for (int i = 0; i < 4; i++)
        {
            int nx = xx + dx[i];
            int ny = yy + dy[i];
            if (nx < 0 || ny < 0 || nx >= 5 || ny >= 5)
                continue;
            if (place[ny][nx] == 'X' || visit[ny][nx])
                continue;;
            visit[ny][nx] = true;
            q.push({ { nx, ny }, depth + 1 });
        }
    }
    return true;
}
bool check(vector<string> place)
{
    for (int y = 0; y < place.size(); y++)
    {
        for (int x = 0; x < place[y].size(); x++)
        {
            if (place[y][x] == 'P')
                if (!DFS(place, x, y))
                    return false;
        }
    }
    return true;
}
vector<int> solution(vector<vector<string>> places) {
    vector<int> answer;
    for (auto place : places)
        answer.push_back(check(place));
    return answer;
}