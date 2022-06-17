#include <string>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <algorithm>
using namespace std;
unordered_map<string, int> Map;
vector<int> List[4][3][3][3];
vector<int> solution(vector<string> info, vector<string> query) {
    Map["-"] = 0;
    Map["cpp"] = 1;
    Map["java"] = 2;
    Map["python"] = 3;

    Map["backend"] = 1;
    Map["frontend"] = 2;

    Map["junior"] = 1;
    Map["senior"] = 2;

    Map["chicken"] = 1;
    Map["pizza"] = 2;
    //info
    for (auto str : info)
    {
        //info스플릿
        stringstream ss(str);
        string a, b, c, d;
        int score;
        ss >> a >> b >> c >> d >> score;
        int arr[4] = { Map[a],Map[b],Map[c],Map[d] };
        for (int i = 0; i < (1 << 4); i++)
        {
            int idx[4] = { 0 };
            for (int j = 0; j < 4; j++)
            {
                if (i % (1 >> j))
                    idx[j] = arr[j];
            }
            List[idx[0]][idx[1]][idx[2]][idx[3]].push_back(score);
        }
    }
    //이진검색을위해 정렬
    for (int a = 0; a < 4; a++) {
        for (int b = 0; b < 3; b++) {
            for (int c = 0; c < 3; c++) {
                for (int d = 0; d < 3; d++) {
                    sort(List[a][b][c][d].begin(), List[a][b][c][d].end());
                }
            }
        }
    }
    //쿼리랑 비교
    vector<int> answer;
    for (auto str : query)
    {
        stringstream ss(str);
        string a, b, c, d, t;
        int score;
        ss >> a >> t >> b >> t >> c >> t >> d >> score;
        auto slist = List[Map[a]][Map[b]][Map[c]][Map[d]];
        vector<int>::iterator low = lower_bound(slist.begin(), slist.end(), score);
        answer.push_back(slist.end() - low);
    }
    return answer;
}