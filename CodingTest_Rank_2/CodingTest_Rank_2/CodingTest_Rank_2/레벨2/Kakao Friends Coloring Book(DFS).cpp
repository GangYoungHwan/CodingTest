#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> v;
int Fill(int color, int x, int y, int m, int n)
{
    if (x < 0 || y < 0 || x >= m || y >= n || color != v[x][y])//재귀함수 종료
        return 0;
    v[x][y] = 0;//방문 못하게
    int cnt = 1;

    cnt += Fill(color, x - 1, y, m, n);//왼
    cnt += Fill(color, x + 1, y, m, n);//오
    cnt += Fill(color, x, y - 1, m, n);//하
    cnt += Fill(color, x, y + 1, m, n);//상

    return cnt;
}
vector<int> solution(int m, int n, vector<vector<int>> picture)
{
    int number_of_area = 0;
    int max_size_of_one_area = 0;
    v = picture;
    for (int y = 0; y < m; y++)
    {
        for (int x = 0; x < n; x++)
        {
            if (v[x][y] == 0)
                continue;
            int temp = Fill(v[x][y], x, y, m, n);
            max_size_of_one_area = max(max_size_of_one_area, temp);
            number_of_area++;
        }
    }

    vector<int> answer(2);
    answer[0] = number_of_area;
    answer[1] = max_size_of_one_area;
    return answer;
}