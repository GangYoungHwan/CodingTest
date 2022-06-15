#include <string>
#include <vector>

using namespace std;

int solution(string name) {
    int answer = 0;
    for (auto c : name)
        answer += min(c - 'A', ('Z'+1) - c);

    int len = name.length();
    int move = len - 1;
    int next;
    for (int i = 0; i < len; i++)
    {
        next = i + 1;
        while (next < len && name[next] == 'A')
            next++;
        move = min(move, i + (len - next));
    }
    answer += move;

    return answer;
}