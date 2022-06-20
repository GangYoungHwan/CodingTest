#include <string>
using namespace std;
string solution(int n)
{
    string answer = "";
    char num[3] = { '4','1','2' };
    while (n > 0)
    {
        int index = n % 3;
        answer = num[index] + answer;
        n = (n - 1) / 3;
    }
    return answer;
}