#include <string>
#include <vector>

using namespace std;
int answer;
int dfs(string strbegin, string target, vector<string> words, int cnt) {
    string begin = strbegin;
    int count = 0;
    for (int i = 0; i < words[cnt].size(); i++) {
        if (begin[i] = !words[cnt][i])
            count++;
    }
    if (count == 1) {
        count = 0;
        for (int i = 0; i < words[cnt].size(); i++) {
            if (target[i] = !words[cnt][i])
                count++;
        }
        if (count == 1) {
            return cnt;
        }
        else
            dfs(words[cnt], target, words, cnt + 1);
    }
    else
        return 0;

}
int solution(string begin, string target, vector<string> words) {
    return dfs(begin, target, words, 0);
}