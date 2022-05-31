#include <iostream>
#include <vector>
#include <string>
using namespace std;
//로또의 최고 순위와 최저 순위
int _rank(int lottos)
{
	int ranking = 0;
	if (lottos < 2)
	{
		ranking = 6;
	}
	else
	{
		ranking = 7 - lottos;
	}
	return ranking;
}
vector<int> solution(vector<int> lottos, vector<int> win_nums)
{
	vector<int> answer;
	int low_rank = 0;
	int high_rank = 0;
	for (int i = 0; i < lottos.size(); ++i)
	{
		if (lottos[i] == 0)
			high_rank++;
		for (int j = 0; j < win_nums.size(); ++j)
		{
			if (lottos[i] == win_nums[j])
			{
				high_rank++;
				low_rank++;
			}
		}
	}
	answer.push_back(_rank(high_rank));
	answer.push_back(_rank(low_rank));
	return answer;
}