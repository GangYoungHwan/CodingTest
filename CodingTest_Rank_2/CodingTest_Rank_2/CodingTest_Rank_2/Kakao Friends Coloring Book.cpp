#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> v;
int Fill(int color, int x, int y, int m, int n)
{
    if (x < 0 || y < 0 || x >= m || y >= n || color != v[x][y])//����Լ� ����
        return 0;
    v[x][y] = 0;//�湮 ���ϰ�
    int cnt = 1;

    cnt += Fill(color, x - 1, y, m, n);//��
    cnt += Fill(color, x + 1, y, m, n);//��
    cnt += Fill(color, x, y - 1, m, n);//��
    cnt += Fill(color, x, y + 1, m, n);//��

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