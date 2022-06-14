#include <string>
#include <vector>
#include <algorithm>
using namespace std;
bool cmp(string a, string b)
{
    return a + b > b + a;
}
string solution(vector<int> numbers) {
    string answer = "";
    vector<string> temp;
    for (auto c : numbers)
        temp.push_back(to_string(c));
    sort(temp.begin(), temp.end(), cmp);
    for (auto c : temp)
        answer += c;

    if (answer.front() == '0')
        return "0";
    else
        return answer;
}