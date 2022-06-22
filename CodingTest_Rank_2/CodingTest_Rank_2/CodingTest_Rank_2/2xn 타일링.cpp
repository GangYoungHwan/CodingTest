#include <iostream>
using namespace std;
int dp[1001] = { 0,1,2,4,0, };
int solution(int n) {
    for (int i = 3; i <= n; i++) {
        dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
    }
    return dp[n];
}