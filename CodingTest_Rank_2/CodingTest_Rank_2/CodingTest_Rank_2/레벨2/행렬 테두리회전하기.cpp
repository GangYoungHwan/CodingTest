#include <string>
#include <vector>
#include <algorithm>
using namespace std;



vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    vector<vector<int>> graph(rows);

    int num = 1;
    for (int i = 0; i < rows; i++) { //�׷��� �Է�
        for (int j = 0; j < columns; j++) {
            graph[i].push_back(num);
            num++;
        }
    }

    for (int i = 0; i < queries.size(); i++) {
        int x1 = queries[i][1] - 1;//�׷��� �ε����� 0���� �����ϱ� ������ -1
        int y1 = queries[i][0] - 1;
        int x2 = queries[i][3] - 1;
        int y2 = queries[i][2] - 1;
        int temp = graph[y1][x1]; //ó�� ��
        int mini = temp;
        //�ð� �ݴ� �������� �˻�
        for (int a = y1; a < y2; a++)//����
        {
            graph[a][x1] = graph[a + 1][x1];
            mini = min(mini, graph[a][x1]);
        }
        for (int a = x1; a < x2; a++)//�Ʒ�
        {
            graph[y2][a] = graph[y2][a + 1];
            mini = min(mini, graph[y2][a]);
        }
        for (int a = y2; a > y1; a--)//������
        {
            graph[a][x2] = graph[a - 1][x2];
            mini = min(mini, graph[a][x2]);
        }
        for (int a = x2; a > x1; a--)//����
        {
            graph[y1][a] = graph[y1][a - 1];
            mini = min(mini, graph[y1][a]);
        }
        //ó�� ������ �� ����
        graph[y1][x1 + 1] = temp;

        answer.push_back(mini);
    }

    return answer;
}
