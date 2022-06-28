#include <vector>
#include <queue>
using namespace std;
/*
�ֱ� ĵ�����̶�� ����Ʈ�� ������ �α⸦ ���� �ִ�.
ĵ������ 7 * 7 ����� ���� �ǿ� ���� ������ ���� 3�� �̻��� �κ��� ã�� ��ġ�ϸ� �����鼭 ������ ��� �����̴�.
�̶� ���ӵ� �κ��� ��, ��, ��, �츸 �Ǵ��Ѵ�.
ĵ���� ���� ������ �־����� �� ��ġ�ϸ� ������ ������ ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
https://codeup.kr/problem.php?id=2605
*/
bool visit[7][7];
int dx[4] = { 0,1,0,-1 };
int dy[4] = { -1,0,1,0 };
int bfs(int y, int x, vector<vector<int>>maps, int color) {
	queue<pair<int, int>> q;
	int len = 1;
	q.push({ y,x });
	visit[y][x] = true;

	while (!q.empty()) {
		int y = q.front().first;
		int x = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i];
			int nx = x + dx[i];
			if (ny < 0 || ny >= maps.size() || nx < 0 || nx >= maps.front().size())
				continue;
			if (maps[ny][nx] == color && !visit[ny][nx]) {
				visit[ny][nx] = true;
				len += 1;
				q.push({ ny,nx });
			}
		}
	}
	if (len >= 3)
		return 1;
	return 0;
}
int solution(vector<vector<int>>maps) {
	int answer = 0;
	for (int i = 0; i < maps.size(); i++) {
		for (int j = 0; j < maps[i].size(); j++) {
			if (!visit[i][j])
				answer += bfs(i, j, maps, maps[i][j]);
		}
	}
	return answer;
}