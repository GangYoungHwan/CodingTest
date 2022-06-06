#include <string>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
map<string, int> m[11];
int cnt[11];
void comb(string order, int pos, string str)
{
    if (order.length() <= pos)
    {
        int len = str.length();
        if (len >= 2)
        {
            m[len][str] ++;
            cnt[len] = max(cnt[len], m[len][str]);
        }
        return;
    }
    comb(order, pos + 1, str + order[pos]);
    comb(order, pos + 1, str);
}
vector<string> solution(vector<string> orders, vector<int> course) {
    for (auto order : orders)
    {
        sort(order.begin(), order.end());
        comb(order, 0, "");
    }
    vector<string> answer;
    for (auto c : course)
    {
        for (auto food : m[c])
        {
            if (food.second >= 2 && food.second == cnt[c])
            {
                answer.push_back(food.first);
            }
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}