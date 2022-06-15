#include <string>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

bool isPrime(int num)
{
    if (num < 2)
        return false;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
            return false;
    }
    return true;
}
int solution(string numbers) {
    set<int> answer;
    sort(numbers.begin(), numbers.end());
    do {
        for (int i = 1; i <= numbers.size(); i++)
        {
            int num = stoi(numbers.substr(0, i));
            if (isPrime(num))
                answer.insert(num);
        }
    } while (next_permutation(numbers.begin(), numbers.end()));
    return answer.size();
}