#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int solution(int n, vector<string> data)
{
    int answer = 0;
    vector <char> v = { 'A','C','F','J','M','N','R','T' };
    do {
        int index1 = 0;
        int index2 = 0;
        for (int i = 0; i < n; i++)//v의 인덱스 찾기
        {
            for (int j = 0; j < 8; j++)
            {
                if (data[i][0] == v[j])
                    index1 = j;
                else if (data[i][2] == v[j])
                    index2 = j;
            }
            char compare = data[i][3];//<,>,=
            int interval = data[i][4] - '0';//간격
            if (compare == '=' && abs(index1 - index2) != interval + 1)
                break;
            if (compare == '>' && abs(index1 - index2) <= interval + 1)
                break;
            if (compare == '<' && abs(index1 - index2) >= interval + 1)
                break;
            if (i == n - 1)
                answer++;
        }

    } while (next_permutation(v.begin(), v.end()));//순열 구하기 정렬하고 사용
    return answer;
}