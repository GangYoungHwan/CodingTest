#include <vector>
using namespace std;
vector<int> solution(vector<int> progresses, vector<int> speeds)
{
    vector<int> answer;
    int day;
    int tempday = 0;
    for (int i = 0; i < progresses.size(); i++)
    {
        day = ((99 - progresses[i]) / speeds[i]) + 1;
        if (answer.empty() || tempday < day)
        {
            answer.push_back(1);
            tempday = day;
        }
        else
            answer.back()++;
    }
    return answer;
}