#include <string>
#include <vector>

using namespace std;

int answer = 0;
void DFS(vector<int> numbers, int target, int sum, int index)
{
    if (index == numbers.size())//종료조건
    {
        if (sum == target)//타겟넘버가 같을경우 카운트
        {
            answer++;
        }
        return;
    }
    DFS(numbers, target, sum + numbers[index], index + 1);
    DFS(numbers, target, sum - numbers[index], index + 1);
}
int solution(vector<int> numbers, int target)
{
    DFS(numbers, target, 0, 0);
    return answer;
}