#include <vector>
#include <queue>
using namespace std;
/*
최근 캔디팡이라는 스마트폰 게임이 인기를 끌고 있다.
캔디팡은 7 * 7 모양의 격자 판에 같은 색깔이 연속 3개 이상인 부분을 찾아 터치하면 터지면서 점수를 얻는 게임이다.
이때 연속된 부분은 상, 하, 좌, 우만 판단한다.
캔디팡 격자 정보가 주어졌을 때 터치하면 터지는 영역의 개수를 출력하는 프로그램을 작성하시오.
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