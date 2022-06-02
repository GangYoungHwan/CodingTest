#include <string>
#include <vector>
#include <sstream>
#include <map>
using namespace std;

vector<string> solution(vector<string> record)
{
    vector<string> answer;
    vector<string> idcode;
    vector<string> state;
    map<string, string> user;
    for (int i = 0; i < record.size(); i++)
    {
        vector<string> v;
        string str;
        stringstream ss(record[i]);
        while (ss >> str)
        {
            v.push_back(str);
        }
        if (v[0] == "Enter")
        {
            state.push_back("님이 들어왔습니다.");
            idcode.push_back(v[1]);
            user[v[1]] = v[2];
        }
        else if (v[0] == "Leave")
        {
            state.push_back("님이 나갔습니다.");
            idcode.push_back(v[1]);
        }
        else
            user[v[1]] = v[2];
    }
    for (int i = 0; i < state.size(); i++)
    {
        answer.push_back(user[idcode[i]] + state[i]);
    }
    return answer;
}