#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int solution(string s)
{
    int answer = 0;
    int cnt = 1;
    string result, temp;
    vector<int> v;
    for (int i = 1; i <= s.size() / 2; i++)
    {
        result = "";
        for (int j = 0; j < s.size(); j += i)
        {
            temp = s.substr(j, i);
            if (j + i > s.size() || temp != s.substr(j + i, i))
            {
                if (cnt != 1)
                    result += to_string(cnt);
                result += temp;
                cnt = 1;
            }
            else
                cnt++;
        }
        v.push_back(result.size());
    }
    if (s.size() == 1)
        answer = 1;
    else
        answer = *min_element(v.begin(), v.end());
    return answer;
}