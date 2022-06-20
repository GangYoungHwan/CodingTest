#include <string>
#include <vector>
#include <map>
using namespace std;

vector<int> solution(string s)
{
    vector<int> answer;
    map<string, int> m;
    string numstr = "";

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
            numstr += s[i];
        else if (s[i] == '}' || s[i] == ',')
        {
            if (numstr != "")
                m[numstr]++;
            numstr = "";
        }
    }
    while (!m.empty())
    {
        string key = "";
        int maxnum = 0;
        for (auto itr = m.begin(); itr != m.end(); itr++)
        {
            if (maxnum < itr->second)
            {
                maxnum = itr->second;
                key = itr->first;
            }
        }
        answer.push_back(stoi(key));
        m.erase(key);
    }
    return answer;
}