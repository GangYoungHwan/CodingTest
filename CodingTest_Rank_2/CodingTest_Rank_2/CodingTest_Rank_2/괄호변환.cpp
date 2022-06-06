#include <string>
#include <vector>
#include <stack>

using namespace std;

bool check(string p)
{
    stack<char> s;
    int len = p.length();
    for (int i = 0; i < len; i++)
    {
        if (p[i] == '(')
            s.push('(');
        else
        {
            if (s.empty())
                return false;
            s.pop();
        }
    }
    return true;
}
string solution(string p) {
    if (p.empty())//1�ܰ� �Է��� �� ���ڿ��� ���, �� ���ڿ��� ��ȯ�մϴ�.
        return p;
    string answer = "";
    //2. ���ڿ� w�� �� "�������� ��ȣ ���ڿ�" u, v�� �и��մϴ�. 
    //��, u�� "�������� ��ȣ ���ڿ�"�� �� �̻� �и��� �� ����� �ϸ�, v�� �� ���ڿ��� �� �� �ֽ��ϴ�.
    string u, v;
    int left = 0;
    int right = 0;
    int len = p.length();
    for (int i = 0; i < len; i++)
    {
        if (p[i] == '(')
            left++;
        else
            right++;

        if (left == right)
        {
            u = p.substr(0, i + 1);
            v = p.substr(i + 1);
            break;
        }
    }
    if (check(u))//3. ���ڿ� u�� "�ùٸ� ��ȣ ���ڿ�" �̶�� ���ڿ� v�� ���� 1�ܰ���� �ٽ� �����մϴ�.
    {
        v = solution(v);
        answer = u + v;//3-1. ������ ��� ���ڿ��� u�� �̾� ���� �� ��ȯ�մϴ�. 
        return answer;
    }
    else//4. ���ڿ� u�� "�ùٸ� ��ȣ ���ڿ�"�� �ƴ϶�� �Ʒ� ������ �����մϴ�. 
    {
        //4-1. �� ���ڿ��� ù ��° ���ڷ� '('�� ���Դϴ�. 
        answer = '(';
        //4-2. ���ڿ� v�� ���� 1�ܰ���� ��������� ������ ��� ���ڿ��� �̾� ���Դϴ�. 
        answer += solution(v);
        //4-3. ')'�� �ٽ� ���Դϴ�. 
        answer += ')';
        //4-4. u�� ù ��°�� ������ ���ڸ� �����ϰ�, ������ ���ڿ��� ��ȣ ������ ����� �ڿ� ���Դϴ�. 
        u.erase(0, 1);
        u.erase(u.length() - 1, 1);
        for (int i = 0; i < u.length(); i++)
        {
            if (u[i] == '(')
                answer += ')';
            else
                answer += '(';
        }
        //4-5. ������ ���ڿ��� ��ȯ�մϴ�.
        return answer;
    }
}