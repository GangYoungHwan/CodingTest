#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <map>
#include <set>
#include <sstream>
#include <queue>
using namespace std;
int isjoystick(char n)
{
    int a = n-'A';
    int z = 'Z'-n;
    if (a < z)
        return a;
    else
        return z;
}
int solution(string name) {
    int answer = 0;
    for (int i = 0; i < name.size(); i++)
    {
        answer += isjoystick(name[i]);
    }
    int len = name.length() - 1;
    answer += len;
    return answer;
}
int main(void)
{
    string str = "JEROEN";
    cout << solution(str);
    return 0;
}
