#include <string>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> strv(string s)
{
    vector<string> sv;
    for (int i = 0; i < s.length() - 1; i++)
    {
        string str = s.substr(i, 2);
        if (str[0] >= 'a' && str[0] <= 'z' && str[1] >= 'a' && str[1] <= 'z')
            sv.push_back(str);
    }
    return sv;
}
int intersection(vector<string> str1, vector<string> str2)
{
    vector<string> minv, maxv;
    int inter = 0;
    if (str1.size() > str2.size()) {
        minv = str2;
        maxv = str1;
    }
    else {
        minv = str1;
        maxv = str2;
    }
    for (int i = 0; i < maxv.size(); i++)
    {
        auto itr = find(minv.begin(), minv.end(), maxv[i]);
        if (itr != minv.end())
        {
            inter++;
            minv.erase(itr);
        }
    }
    return inter;
}
int solution(string str1, string str2)
{
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
    int max = 0, min = 0;
    vector<string> v1 = strv(str1), v2 = strv(str2);

    max = v1.size() + v2.size();
    min = intersection(v1, v2);
    max -= min;
    if (max == 0)
        return 65536;
    else
        return ((float)min / (float)max) * 65536;
}