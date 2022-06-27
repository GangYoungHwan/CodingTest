#include <string>
#include <vector>

using namespace std;
int answer = 50;
bool visit[50];
bool check(string a, string b) {
    int cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            cnt++;
    }
    if (cnt == 1)
        return true;

    return false;
}
void dfs(string begin, string target, vector<string> words, int stage) {
    if (answer <= stage)
        return;
    if (begin == target) {
        answer = stage;
        return;
    }

    for (int i = 0; i < words.size(); i++) {
        if (check(begin, words[i]) && !visit[i]) {
            visit[i] = true;
            dfs(words[i], target, words, stage + 1);
            visit[i] = false;
        }
    }
    return;
}
int solution(string begin, string target, vector<string> words) {
    dfs(begin, target, words, 0);
    if (answer == 50)
        return 0;
    return answer;
}