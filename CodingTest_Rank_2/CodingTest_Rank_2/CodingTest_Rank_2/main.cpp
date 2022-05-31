#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <sstream>
using namespace std;
long long GCD(int a, int b)
{
    if (b == 0)return a;
    else return GCD(b, a % b);
}
long long solution(int w, int h) 
{
    long long answer = w*h;//96
    long long a = w + h;//20
    long long g = GCD(max(w, h), min(w, h));//4
    answer = answer - a + g;
    return ((long long)w+ (long long)h)-g;
}
int main(void) {
    cout << GCD(12, 8);
    return 0;
}