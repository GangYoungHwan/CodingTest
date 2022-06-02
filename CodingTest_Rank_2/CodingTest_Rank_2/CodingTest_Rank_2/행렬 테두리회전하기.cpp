#include <string>
#include <vector>
#include <algorithm>
using namespace std;



vector<int> solution(int rows, int columns, vector<vector<int>> queries) {
    vector<int> answer;
    vector<vector<int>> graph(rows);

    int num = 1;
    for (int i = 0; i < rows; i++) { //그래프 입력
        for (int j = 0; j < columns; j++) {
            graph[i].push_back(num);
            num++;
        }
    }

    for (int i = 0; i < queries.size(); i++) {
        int x1 = queries[i][1] - 1;//그래프 인덱스는 0부터 시작하기 때문에 -1
        int y1 = queries[i][0] - 1;
        int x2 = queries[i][3] - 1;
        int y2 = queries[i][2] - 1;
        int temp = graph[y1][x1]; //처음 값
        int mini = temp;
        //시계 반대 방향으로 검사
        for (int a = y1; a < y2; a++)//왼쪽
        {
            graph[a][x1] = graph[a + 1][x1];
            mini = min(mini, graph[a][x1]);
        }
        for (int a = x1; a < x2; a++)//아래
        {
            graph[y2][a] = graph[y2][a + 1];
            mini = min(mini, graph[y2][a]);
        }
        for (int a = y2; a > y1; a--)//오른쪽
        {
            graph[a][x2] = graph[a - 1][x2];
            mini = min(mini, graph[a][x2]);
        }
        for (int a = x2; a > x1; a--)//윗쪽
        {
            graph[y1][a] = graph[y1][a - 1];
            mini = min(mini, graph[y1][a]);
        }
        //처음 빼놓은 값 저장
        graph[y1][x1 + 1] = temp;

        answer.push_back(mini);
    }

    return answer;
}
