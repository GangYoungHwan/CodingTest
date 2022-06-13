#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int row, col;
vector<int> v;
char arr[500][500];
bool check[500][500][4] = { false, };
int dx[4]{ 0,1,0,-1 };
int dy[4]{ -1,0,1,0 };
void dfs(int y, int x, int dir, int len)
{
    if (check[y][x][dir])
    {
        v.push_back(len);
        return;
    }
    check[y][x][dir] = true;
    char c = arr[y][x];
    int nd = dir;
    if (c == 'L')
        nd = (dir + 3) % 4;
    else if (c == 'R')
        nd = (dir + 1) % 4;
    int nx = x + dx[nd];
    int ny = y + dy[nd];
    if (nx < 0)
        nx += col;
    else if (nx >= col)
        nx -= col;
    if (ny < 0)
        ny += row;
    else if (ny >= row)
        ny -= row;
    dfs(ny, nx, nd, len + 1);
}
vector<int> solution(vector<string> grid) {
    row = grid.size();
    col = grid[0].size();
    for (int y = 0; y < row; y++)
    {
        for (int x = 0; x < col; x++)
        {
            arr[y][x] = grid[y][x];
        }
    }
    for (int y = 0; y < row; y++)
    {
        for (int x = 0; x < col; x++)
        {
            for (int dir = 0; dir < 4; dir++)
            {
                if (check[y][x][dir])
                    continue;
                dfs(y, x, dir, 0);
            }
        }
    }
    sort(v.begin(), v.end());
    return v;
}