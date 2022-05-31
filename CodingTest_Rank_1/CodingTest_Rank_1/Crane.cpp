#include <string>
#include <vector>
#include <stack>

using namespace std;
//크레인 인형뽑기 게임
/*
[[0,0,0,0,0]
 [0,0,1,0,3]
 [0,2,5,0,1]
 [4,2,4,4,2]
 [3,5,1,3,1]]

 moves = [1,5,3,5,1,2,1,4]

 moves[0] = 1 첫번째 4
 moves[1] = 5 두번째 3 pop_2
 moves[2] = 3 세번째 1 pop_1
 moves[3] = 5 네번째 1 pop_1
 =====================//인형2개 사라짐
 moves[4] = 1 다섯번째 3 pop_2
 =====================//인형2개 사라짐
 moves[5] = 2 여섯번째 2
 moves[6] = 1 일곱번째 0
 moves[7] = 4 일곱번째 4

*/
int solution(vector<vector<int>> board, vector<int> moves)
{
	int answer = 0;
	stack<int> _stack;
	for (int i = 0; i < moves.size(); ++i)
	{
		int index = moves[i] - 1;
		for (int j = 0; j < board.size(); ++j)
		{
			if (board[j][index] != 0)
			{
				if (!_stack.empty() && _stack.top() == board[j][index])
				{
					_stack.pop();
					answer += 2;
				}
				else
				{
					_stack.push(board[j][index]);
				}
				board[j][index] = 0;
				break;
			}
		}
	}

	return answer;
}