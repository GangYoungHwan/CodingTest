#include <string>
#include <vector>

using namespace std;
int dx[4] = { 0,1,0,1 };
int dy[4] = { 0,0,1,1 };
vector<string> maps;
int h, w;
bool check(int y, int x) {
    if (maps[y][x] == 'X')
        return false;
    char friends = maps[y][x];
    for (int i = 0; i < 4; i++) {
        int ny = y + dy[i];
        int nx = x + dx[i];
        if (ny >= h || nx >= w || maps[ny][nx] != friends)
            return false;
    }
    return true;
}
void drop() {
    for (int i = h - 1; i >= 0; i--) {
        for (int j = 0; j < w; j++) {
            if (maps[i][j] == 'X')continue;
            int ny = i + 1;
            while (ny < h && maps[ny][j] == 'X')ny++;
            maps[ny - 1][j] = maps[i][j];
            if (i != ny - 1)maps[i][j] = 'X';
        }
    }
}
int down(vector<pair<int, int>> v) {
    int friends = 0;
    for (int i = 0; i < v.size(); i++) {
        int y = v[i].first;
        int x = v[i].second;
        for (int i = 0; i < 4; i++) {
            int ny = y + dy[i];
            int nx = x + dx[i];
            if (maps[ny][nx] == 'X')continue;
            maps[ny][nx] = 'X';
            friends++;
        }
    }
    drop();
    return friends;
}

int solution(int m, int n, vector<string> board) {
    int answer = 0;
    maps = board;
    h = m;
    w = n;
    while (1) {
        vector<pair<int, int>> v;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (check(i, j))
                    v.push_back(make_pair(i, j));
            }
        }
        if (v.empty())
            break;
        answer += down(v);
    }
    return answer;
}