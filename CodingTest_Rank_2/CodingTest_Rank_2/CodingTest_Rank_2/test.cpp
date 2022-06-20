/*
string

▪ 문자열 일부분 잘라내기 - substr
s.substr(index, 개수)

▪ 문자열에서 특정 문자 찾기 - find
s.find("찾으려는 문자열") -> 찾으려는 문자열이 등장하는 첫 번째 인덱스를 리턴해줌

형변환
string -> int
string result = to_string(int);

int->string
int result = stoi(string); (#include <string> 필요)

char ->int
int result = char - '0';

int ->char
int a = 1;
char result = (char)(a +48);

▪ 소문자 변환 (tolower 함수)
string str = "ABC";
for(int i=0; i<str.size(); i++)
{
	str[i] = tolower(str[i]);
}

▪ 대문자 변환 (toupper 함수)
string str = "abc";
for(int i=0; i<str.size(); i++)
{
	str[i] = toupper(str[i]);
}

========================================================================================
▪ 최대공약수
int GCD(int a, int b)
{
    if (b == 0)return a;
    else return GCD(b, a % b);
}
int gcd = GCD(max(a, b), min(a, b)); //a>b가 되어아함

▪ 최소공배수
int a =(a * b) / GCD(max(a, b), min(a, b));
========================================================================================
*/

