#include <iostream>
using namespace std;
int dp[12] = { 0,1,2,4,0, };
int solution(int n) {
	if (n == 1 || n == 2 || n == 3)
		return dp[n];
	else if (dp[n] == 0)
		dp[n] = solution(n - 1) + solution(n - 2) + solution(n - 3);
	return dp[n];
}