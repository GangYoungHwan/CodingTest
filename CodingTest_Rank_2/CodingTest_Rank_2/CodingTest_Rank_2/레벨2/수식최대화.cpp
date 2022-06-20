#include <string>
#include <vector>
#include <algorithm>
using namespace std;

long long calculation(long long a, long long b, char oper)
{
    if (oper == '*')
        return a * b;
    else if (oper == '+')
        return a + b;
    else if (oper == '-')
        return a - b;
}
long long solution(string expression)
{
    long long answer = 0;
    vector<long long> num;
    vector<char> oper;
    vector<char> operlist{ '*','+','-' };
    string numstr = "";
    for (int i = 0; i <= expression.size(); i++)
    {
        if (expression[i] >= '0' && expression[i] <= '9')
            numstr += expression[i];
        else
        {
            if (expression[i] != ' ')
                oper.push_back(expression[i]);
            num.push_back(stoll(numstr));
            numstr = "";
        }
    }
    do {
        vector<long long> tempnum = num;
        vector<char> tempoper = oper;
        for (int i = 0; i < operlist.size(); i++)
        {
            for (int j = 0; j < tempoper.size(); j++)
            {
                if (operlist[i] == tempoper[j])
                {
                    tempnum[j] = calculation(tempnum[j], tempnum[j + 1], operlist[i]);
                    tempnum.erase(tempnum.begin() + j + 1);
                    tempoper.erase(tempoper.begin() + j);
                    j--;
                }
            }
        }
        answer = max(answer, abs(tempnum[0]));
    } while (next_permutation(operlist.begin(), operlist.end()));
    return answer;
}