#include <iostream>
#include <iomanip>
#include<string>

//C언어에서는 #include <time.h> 라고 적음
#include <ctime>		

//C++ 환경에서 난수를 사용하기 위한 헤더 파일
#include <random>

//std::string 사용하기 위해 헤더 파일 추가
#include <string>
#include <vector>
#include<math.h>
// WinAPI에서 사용하는 헤더 파일
#include <Windows.h>
using namespace std;

//정수 자료형
/*
1) char
- 크기 : 1바이트
- 값의 저장 범위 : -128~127
- 변환 문자열 : %c
2) short
- 크기 : 2바이트
- 값의 저장 범위 : -32768 ~ 32767
- 변환 문자열 : %d

3) int
- 크기 : 4바이트
- 값의 저장 범위 : -2147483648 ~ 2147483647
- 변환 문자열 : %d
4) long
- 크기 : 4바이트
- 값의 저장 범위 : -2147483648 ~ 2147483647
- 변환 문자열 : %ld
5) long long
- 크기 : 8바이트
- 값의 저장 범위 : -2^63 ~ 2^63 - 1
- 변환 문자열 : %lld
*/
//변수의 데이터 타입 - 실수형
/*
1) float
- 크기 : 4바이트
- 값의 저장 범위 : -3.4*10^38 ~ 3.4*10^38
- 변환 문자열 : %f
- 유효숫자 : 소수점 이하 7자리

2) double
- 크기 : 8바이트
- 값의 저장 범위 : -1.79*10^308 ~ 1.79*10^308
- 변환 문자열 : %lf
- 유효숫자 : 소수점 이하 15자리

3) long double
- 크기 : 8바이트 이상
- 값의 저장 범위 : double형과 같거나 큰 범위
- 변환 문자열 : %Lf
- 유효숫자 : 소수점 이하 15자리
*/
//변수의 데이터 타입 - 논리 자료형
/*
bool (boolean)
- 크기는 1바이트
- 값의 저장 범위 : 1(true) 또는 0(false)
*/
//변수의 데이터 타입 - auto와 const
/*
1. auto
1) 개요
- C++11에서 새로 추가된 데이터 타입이다.
- 컴파일러가 변수의 데이터 타입을 자동으로 추론하여 정할 때 사용한다.
2) 상세
- 변수를 초기화할 때 특정 타입을 명시하는 대신에 auto 키워드를 사용하면 데이터 타입을 자동으로 맞춰줄 수 있다.
- 만약 초기화없이 사용하는 auto 타입 변수는 컴파일러가 어떤 타입인지 해석하지 못하므로 에러가 발생한다.
3) 특징
- 사용자의 편의를 위해 만들어진 암시 복합(임시) 타입이다.
- 반복자(iterator)나 STL에서 제공하는 컨테이너 클래스에서 사용하는 길고 복잡한 데이터 타입을 간단하게 표현할 때 사용한다.

2. const
1) 개요
- 변수의 값을 상수화시켜 값이 변하지 않도록 하는 예약어이다.
- 일반 데이터 타입의 앞에 위치한다.

예시) const int a = 10;
*/
//소숫점 자릿수
/*
fixed : 값의 크기와 상관없이 소수점 형태로 출력
setprecision(n) : 소수점 이하 n번째 자리까지 출력
*/
//관계 연산자의 종류
/*
(1) a > b : a가 b보다 크면 true, 그렇지 않으면 false
(2) a < b : a가 b보다 작으면 true, 그렇지 않으면 false
(3) a >= b : a가 b보다 크거나 같으면 true, 그렇지 않으면 false
(4) a <= b : a가 b보다 작거나 같으면 true, 그렇지 않으면 false
(5) a == b : a와 b가 같으면 true, 그렇지 않으면 false
(6) a != b : a와 b가 다르면 true, 같으면 false
*/
//논리 연산자
/*
1) a && b : 논리합(AND). a와 b가 둘 다 참이면 true
2) a || b : 논리곱(OR). a 또는 b 중에서 하나 참이면 true
3) !a : 논리부정(NOT). a가 거짓이면 true
*/
//삼항 연산자 (A ? B:C)
/*
	int num1 = 0;

	if (num1 == 0)
		cout << "TRUE";
	else
		cout << "FALSE";
	==========================삼항연산자
	 int num1 = 0;

	num1 == 0 ? cout << "TRUE" : cout << "FALSE";
*/
//반복문 예시
/*
//while문
//문제 : a가 10보다 작을 때 a에 2를 곱한 값을 a에 대입하라.
int a = 1;

if (a != 0)		//if문의 실행문이 반복문 하나만 있으면 중괄호 생략이 가능
while (a < 10)	//a가 10보다 작으므로 조건식은 참이다
{
a *= 2;		//a에 2를 곱한 값을 a에 대입
cout << "변수 a의 값은 " << a << "입니다." << endl;
}
cout << "프로그램이 종료되었습니다." << endl;



//for문
int b = 1;

// int형 변수 i는 0으로 초기화하되, 3보다 작을 동안 1씩 증가하면서 실행문을 반복한다
for (int i = 0; i < 3; i++)
{
b = b * 2;
cout << "변수 b의 값은 " << b << "입니다." << endl;
}



//do ~ while문
do {
a *= 2;
cout << "변수 a의 값은 " << a << "입니다." << endl;
} while (a < 10);

*/
//switch 조건문
/*
int num1, num2, result;	//연산에 필요한 변수들을 선언한다.
char _operator;
cout << "사칙 연산 입력(정수) : ";
cin >> num1 >> _operator >> num2;	//값을 키보드로부터 입력받는다.

switch (_operator)	//입력한 값에 따라 switch문으로 구분, 연산을 진행한다.
{
case '+':
result = num1 + num2;
break;
case '-':
result = num1 - num2;
break;
case '*':
result = num1 * num2;
break;
case '/':
result = num1 / num2;
break;
}
cout << num1 << " " << _operator << " " << num2 << " = " << result << endl;

*/
//continue 예제
/*
int sum = 0;

for (int i = 0; i < 100; i++)
{
	if (i % 3 == 0)	//i가 3의 배수에 해당할 경우
	{
	continue;	// 아래의 sum += i 실행문을 건너뛴다
	}
	sum += i;	//누적 덧셈
//continue를 실행한 후의 위치는 이곳이다
}
*/
//cin.getline() 문자열cin
/*

char str1[16];	// cin.getline() 을 사용하여 char형 배열에 문자열 대입
char str2[16];

cout << "문자열을 입력해주세요 : " << endl;
cin.getline(str1, 14);

//cin을 통한 문자열 입력 과정에서 오류가 발생했는가?
if (!cin.good())
{
//오류가 발생하면 롤백하여 이전 상태로 되돌린다
cin.clear();
cin.ignore(1024, '\n');
}
*/
//C언어 난수 생성
/*
	1. srand() 함수

						예시)
						srand(time(NULL)) = 유닉스 타임 기반 초기화

	  - srand() 함수는 난수 발생기를 초기화하는 함수이다.
	  - srand() 함수의 초기화에 필요한 값으로 정수가 들어가는데, 이때 초기화에 필요한 정수값을 시드(seed)라고 한다.
	  - seed 값은 난수의 생성 규칙을 바꾸므로 프로그램을 실행할 때마다 다른 seed 값을 줄 수만 있다면 매번 다른 난수를 구할 수 있다.


	2. rand() 함수

						예시)
						int a = rand() % 10;

	  - 실제로 난수를 구할 때 사용하는 함수이다.
	  - 기본적으로 0 ~ RAND_MAX(32767)의 범위 중에서 임의 값을 반환한다.
	  - 특정 범위로 좁혀서 난수를 출력하고 싶은 경우 rand() 함수 뒤에 (% n)을 붙인다.
*/
//C++  난수 생성
/*
	1. #include <random>
	  - 의사난수를 추출하기 위한 난수 생성기와 분포 생성기, 비결정론적 난수 생성기 등이 포함되어 있으며, 관련 클래스나 함수가 정의된 난수 라이브러리.

	2. 메르센 트위스터 (Mersenne Twister)
	  - 프랑스의 수학자인 마랭 메르센이 발견한 법칙 중 하나인 메르센 소수에서 유래
	  - 1997년 일본의 개발자 2명(마츠모토 마코토, 니시무라 타쿠지)이 고안해낸 난수 추출 방식이며, 기존 생성기들의 문제점을 피하면서도 품질이 매우 좋은 난수를 생성할 수 있는 특징이 있다.
	  - 사용처가 점차 많아지면서 C++11에 와서는 표준으로 제정되어 현재까지 사용되고 있다.

	3. 상세
	  - random_device 클래스는 예측 불가능 난수를 생성하는 것에서부터 의사난수 생성기의 초기화 또는 암호화에 사용된다.
	  - 예측 불가능한 난수는 소프트웨어에서 준비할 수 없으므로 내부적으로 하드웨어의 현재 상태나 OS로부터 시간 관련 리소스를 기반으로 생성한다.
	  - 32비트 버전이 기본값이며, 64비트는 mt19937_64 이다.
	  - 추출할 난수의 범위를 특정할 때 균등 분포(Uniform Distribution) 또는 정규 분포(NormalDistribution)를 사용한다.
*/
//C/C++ 난수생성 예제
/*
	// 유닉스 타임(UNIX TIME) 기반의 seed값 초기화
	//unix time : 1970.01.01 00:00 ~ 현재시간
	srand(time(NULL));

	// 1. rand() 함수를 사용하여 값을 추출한다
	int a = rand() % 10;		// 0 ~ 9 까지의 값 중에서 랜덤으로 하나를 대입
	int b = rand() % 10 + 1;	// 1 ~ 10까지의 값 중에서 랜덤으로 하나를 대입

	// 2. 특정 범위를 지정하여 출력한다 (ex : 10~20까지의 범위)
	// rand() % (최대값 - 최소값 + 1) + 최소값
	int c = (rand() % (20 - 10 + 1)) + 10;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;


	//===================

	// 1. random_device 클래스를 이용하여 seed값 초기화
	random_device generator;

	// 2. mt19937 방식을 사용 => 메르센 트위스터 사용
	mt19937 engine(generator());

	// 3. 난수의 범위를 특정하여 값을 추출한다
	//rand()와 다르게 최대값도 범위에 들어간다
	uniform_int_distribution<> random(0, 100);

	// 4. 출력
	cout << random(engine) << endl;

*/
//랜덤 중복 예외 처리
/*
for (int i = 0; i < 6; i++)
{
	cLotto[i] = rand() % 45 + 1;

	//똑같은 번호가 들어가는 것을 막기 위한 중복검사
	for (int j = 0; j < i; j++)
	{
		//중복일 경우?
		if (cLotto[i] == cLotto[j])
		{
			// i 의 값을 먼저 증감처리하고
			i--;

			//반복문을 탈출하여 해당 순서를 다시 반복한다.
			break;
		}
	}
}
*/
// string 의 정보를 취득하는 함수
/*
	1. size()
	  - 문자열의 길이를 정수로 반환한다.
	  - 보통 문자열의 길이를 반환할 때는 변수명.length()를 사용하나, 다른 객체에서 일부 호환성의 문제로 size()를 사용하기도 한다.

	2. empty()
	  - string 내부 값의 존재 유무를 판단할 때 사용한다.
	  - 값이 존재할 경우 1(=true)를 반환하며, 아무 것도 없을 때는 0(=false)를 반환한다.
	  - 조건을 검사할 때 size() == 0 을 사용하는 것과 똑같은 결과를 출력하지만, string을 사용하는 곳에서는 size()보다 empty()를 쓰는 것이 조금 더 빠른 경우도 있다.

	3. find()
	  - 문자열의 처음부터 끝까지 검색하고, 찾고 싶은 문자의 위치를 정수형으로 반환한다.
	  - 만약 문자를 발견하지 못했을 경우에는 잘못된 값을 반환하는데, 이는 string::npos 과 동일한 값을 가진다.
*/
// string 을 편집하는 함수
/*
	1. 연산자를 사용한 문자열의 편집 (결합)
	  - 서로 다른 문자열을 연결할 때 + 연산자를 사용하면 결합시킬 수 있다.

	2. 함수를 사용한 문자열을 편집 (분할 또는 추출)
	  - 문자열을 나누고 싶은 경우 객체명.substr() 을 사용한다.
	  - substr(x) : x번째 이후의 문자열을 반환한다.
	  - substr(x,y) : x번째 이후의 y바이트만큼 문자열을 반환한다.
	  - find() 함수와의 조합으로 특정 문자의 위치를 검색하고, 그에 맞춰 분할하는 것이 가능하다.
*/
// string 예제
/*
	//string형 변수의 선언과 초기화
	//변수를 선언한 후 값을 따로 대입해도 오류가 발생X
	string str;
	str = "string data";

	//string형 변수의 출력
	cout << str << endl;

	//string형 변수의 출력
	cin >> str;


	// 문자열의 정보를 취득하는 함수
	// 1. size()
	string str1 = "Learning to C Language!";
	string str2 = "Welcome!";

	cout << "str1 : " << str1 << endl;
	cout << "str2 : " << str2 << endl;
	cout << endl;

	//문자열의 길이를 정수로 출력한다
	cout << "str1 : " << str1.size() << endl;
	cout << "str2 : " << str2.size() << endl;
	cout << endl;

	cout << "str1 : " << str1.length() << endl;
	cout << "str2 : " << str2.length() << endl;
	cout << endl;


	// 2. empty()
	string str3 = "안녕하세요";
	string str4;

	//string 변수 내부의 값 존재 유무를 판단하는 함수
	cout << "str3 : " << str3.empty() << endl;
	cout << "str4 : " << str4.empty() << endl;
	cout << endl;

	// 3. find()
	string str5 = "Learning to C Language!";
	string str6 = "Welcome!";

	//특정 문자를 string 내부에서 검색하고 그 위치를 정수로 출력
	cout << "str5 : " << str5.find("a") << endl;
	cout << "str5 : " << str5.find("n") << endl;
	cout << "str6 : " << (str6.find("z") == string::npos) << endl;
	cout << endl;


	// 문자열을 편집하는 함수
	// 1. 연산자를 사용하는 방법 (결합)
	string str7 = "안녕하세요!";
	string str8 = "만나서 반갑습니다.";

	//덧셈 연산자를 사용하여 문자열을 결합한다.
	cout << str7 + str8 << endl;
	cout << str7 + "제 이름은 홍길동입니다." << endl;
	cout << endl;


	// 2. 함수를 사용하는 방법 (분할과 추출)
	string str9 = "HelloWorld!";

	//문자열을 나누는 함수 객체명.substr()
	cout << str9.substr(4) << endl;
	cout << str9.substr(4, 3) << endl;
	cout << str9.substr(str9.find("o")) << endl;

*/
//함수(Function)
// 1. 함수의 정의 (Definition)
/*
	  ※ 함수를 만들기 전에 다음과 같은 내용을 고려해야 한다.
			1) 함수명 : 함수의 기능에 맞는 이름은 무엇인가?
			2) 매개변수 : 함수가 기능을 수행하는데 필요한 데이터는 무엇인가?
			3) 반환형 : 함수가 수행된 후의 결과는 무엇인가?

	  예시) 두 정수의 합을 구하는 함수를 작성한다.
				  이름 : Add
				  필요한 데이터 : 정수 2개
				  두 값을 더한 결과의 데이터 타입 : 정수형 타입

	  - 이 3가지 요소를 하나로 합치면 함수 원형(function prototype)이 된다.
		 그리고 함수 원형 바로 밑에 실행할 내용을 중괄호에 넣어주면 함수가 완성.

	  - 함수의 기본 구조는 아래와 같다.

			①int ②Add (③int x, int y)
			{
				④return x + y;
			}

			① 반환자료형(리턴 타입)
			  - 함수가 기능을 수행한 후 호출한 곳으로 돌려줄 값의 형태이다.
			② 함수명
			  - 해당 함수가 무슨 기능을 수행하는지 알려준다.
			③ 매개변수(parameters)
			  - 함수가 처리할 데이터를 저장하는 변수이다.
			④ return
			  - 연산의 결과를 함수를 호출한 곳으로 되돌려준다.
*/
// 2. 함수의 호출과 반환
/*
	- 함수는 얼마든지 만들 수 있어도 만든 함수가 모두 자동으로 실행되는 것은 아니다.
	- 예제에서 main 함수가 Add 함수를 통해 a와 b를 더하고자 하므로, 괄호 안에 데이터를 넣고 호출한다. 이때, 괄호 안에 들어가는 데이터를 인수(argument)라고 한다.

	※ 인수(argument) : 함수의 매개변수로 데이터를 전달하기 위해 삽입하는 값을 가리킨다. 상수나 변수를 사용할 수 있으며, 수식을 사용하면 수식의 결과값이 인수로 쓰인다.

	- add 함수가 호출되면 main 함수의 실행은 잠시 멈추고 add 함수의 정의 부분에 있는 코드를 실행한다. 인수는 이때 함수의 매개변수에 복사되어 add 함수 내부 처리에 사용된다.

	- 호출된 함수가 처리를 종료한 뒤, 결과값을 호출한 곳으로 보내기 위해 return을 사용한다.
*/
// 3. 함수의 선언 (Declaration)
/*
	- 함수의 선언은 컴파일러가 새로 만든 함수를 인식할 수 있도록 알려주는 것이다.
	- 기본적으로 함수 원형에 세미콜론(;)을 붙이는 것으로 선언은 완료된다.


	※ 함수의 정의가 있음에도 불구하고 선언이 필요한 이유

		1. 컴파일러는 함수 선언문에서 반환자료형의 형태를 확인한다.
		  - 함수를 호출한 자리에 반환자료형과 같은 타입의 저장 공간을 준비한다.
		  - 함수의 종류와 원형을 쉽게 파악하고, 자유로운 호출을 위해 main 함수 위에 표기한다.

		2. 함수의 호출 형식에 문제가 없는지 검사한다.
		  - 매개변수의 개수와 형태에 대한 정보가 포함되어 있어, 정확한 값을 전달하는지 검사할 수 있다.
*/
// <1차 예제>
/*

//두 정수의 합을 구하는 Add 함수를 선언
int Add(int x, int y);

int main()
{
	int a = 10, b = 20;
	int result;
	result = Add(a, b); //함수 호출
	cout << "result : " << result << endl;

	return 0;
}

//Add 함수의 정의
int Add(int x, int y)
{
	int temp;		//두 정수의 합을 저장할 임시 변수
	temp = x + y;	//매개변수 x, y로 전달된 두 정수의 합을 temp 에 보관
	return temp;	//temp의 값을 호출한 위치에 반환
}
*/
// 4. 매개변수가 없는 함수
/*
	1. 개요
		- 함수는 매개변수를 꼭 가져야 하는 건 아니다.
		- 예를 들어 키보드로부터 값을 입력받아 그 값을 반환하는 함수를 만든다면 호출 시에 값을 전달받을 필요가 없으므로 매개변수가 필요 없다.

	2. 상세
	  - 매개변수가 없는 함수는 매개변수의 자리에 void 키워드를 넣어 만든다.
	  - 괄호만 사용하는 것도 가능하나, void를 넣어 매개변수가 없다는 것을 명시해주는 것이 컴파일러에게도 좋고, 더욱 안정적으로 빌드가 가능하다.
	  - 함수를 호출할 때 매개변수/인수가 없어도 괄호는 무조건 사용해야 한다.
*/
// <2차 예제>
/*
//매개변수가 없는 함수의 선언
int getValue(void);

int main()
{
	int result;

	//값을 받아오는 함수를 호출하고, 반환된 값을 result에 저장
	result = getValue();

	cout << "값 : " << result << endl;

	return 0;
}

//매개변수가 없는 함수의 정의
int getValue(void)
{
	int value;			//키보드로부터 전달받은 값을 저장

	cout << "값을 입력하세요 : ";
	cin >> value;

	return value;		//입력받은 값을 호출 위치로 반환한다
}



*/
// 5. 반환자료형이 없는 함수
/*
	1. 개요
	  - 함수는 기본적으로 기능에 따라 형태(데이터 타입)이 결정되는 특징이 있다.
	  - 그러나, 만약 데이터를 받아서 단지 화면에 출력만 하는 함수를 만든다면 특별히 반환자료형이 필요하지 않다.
	  - 반환 자료형이 없는 함수는 선언과 정의에 void 를 사용한다.

	2. 상세정보
	  - 일반 함수의 정의에 사용하는 return이 없다.
	  - void형 함수는 return이 없어도 기능을 수행한 후, 호출한 곳으로 알아서 되돌아가기 때문.
	  - 만약 함수 실행 중간에 되돌아가야 하는 경우가 발생한다면 return 을 어디에서든 호출할 수 있다.
	  - 반환자료형이 void인 함수는 컴파일러가 반환값이 없다고 가정하여 별도의 메모리 확보를 실행하지 않는다. 따라서, 값을 반환해도 저장할 공간이 없기 때문에 return 뒤에 값을 표기할 수 없다.
*/
//함수 연습문제(math)
/*
	키보드로부터 정사각형 공간의 평수를 입력하면
	한 면의 길이를 미터 단위로 출력하는 프로그램을 작성한다.
	1평은 3.3058m^2로 계산하여 소수점 둘째 자리까지 출력한다.

	라이브러리 함수 : double sqrt(double)
	  -> 제곱근을 구하는 함수 (math.h 또는 cmath 를 include)

	사용자 정의 함수 : doubel square(double)
	  -> 평수를 제곱미터로 바꾸어 리턴하는 함수


	[실행결과]
	넓이 입력(평수) : 2.5 (엔터)
	한 면의 길이 : 2.87m
*/

//연습문제 풀이(math)
/*
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double square(double a);

int main()
{
	// 1. 연산에 필요한 변수를 선언
	double value, conversion;

	// 2. 키보드로부터 평수를 입력받는다
	cout << "넓이 입력 (평수) : ";
	cin >> value;

	// 3. 입력받은 값을 제곱미터 단위로 변환한다
	conversion = square(value);

	// 4. 제곱미터 단위로 변환한 값을 미터 단위로 재변환하여 출력
	cout << fixed << setprecision(2) << endl;
	cout << "한 면의 길이 : " << sqrt(conversion) << endl;

	return 0;
}

double square(double a)
{
	//평수를 제곱미터로 변환하는 함수
	return a * 3.3058;
}
*/
// <3차 예제>
/*

//반환 자료형이 없는 함수의 선언
void print_char(char ch, int cnt);

int main()
{
	//void형 함수의 호출
	print_char('A', 15);

	return 0;
}

//반환 자료형이 없는 함수의 정의
//매개변수는 있으나 반환 자료형이 없다.
void print_char(char ch, int cnt)
{
	// 일반 함수와 다르게 여기서의 return은
	// 코드 실행을 강제로 중지시키는 역할을 수행한다
	if (cnt > 10) return;

	// i는 0부터 cnt - 1까지 증가
	for (int i = 0; i < cnt; i++)
	{
		cout << ch;
	}
}
*/
// 6. 반환자료형과 매개변수 2가지가 모두 없는 함수
/*
	- 일정한 문자열을 여러 번 출력할 때, 함수로 만들어 출력하는 것이 효율성을 극대화하는 방법이다.
	- 이러한 경우에 함수의 반환자료형과 매개변수에 모두 void를 넣는다.
*/
// 변수의 영역
//1. 지역 변수 (local)
/*
	1. 개요
	- 지역 변수는 함수 안에 선언되는 변수이다.
	- 프로그램에서 가장 많이 사용한다.


	2. 특징
	- 사용 범위가 코드 블록 내부로 제한되므로 다른 함수에서는 사용할 수 없다.
	- 지역 변수는 이름이 같아도 선언된 함수가 다르면 각각의 독립된 저장 공간을 가진다.
	- 특정 블록 안에 변수를 선언하면 사용 범위가 그 블록 내부로 제한된다.
	- 사용 가능한 변수가 둘 이상이면 가장 가까운 블록에 선언된 변수를 사용한다.


	3. 지역 변수의 장점
	  1) 메모리를 효율적으로 사용한다.
		- 함수 안에서만 사용하므로 함수 실행이 종료되면 해당 공간을 유지할 필요가 없음.
		- 지역 변수가 선언된 함수가 종료되면 할당된 저장 공간을 자동으로 반환한다.

	  2) 디버깅에 유리하다.
		- 값에 문제가 있을 때 수정하기 쉽다.
		- 특정 변수에 들어간 값이 예상치 못한 결과를 불러왔을 경우, 해당 변수가 선언된 코드 블록 또는 함수 안에서만 찾으면 되기 때문.


	4. 지역 변수의 단점
	  1) 자동으로 초기화가 되지 않는다.
	  2) 사용 범위가 하나의 함수로 제한되어, 여러 함수에서 데이터 공유가 불가능하다.
*/
// 지역 변수의 특징 2번 예제
/*

//함수의 선언
void assign(void);

int main()
{
	//지역 변수의 초기화
	int a = 0;
	cout << "main 함수의 int형 변수 a : " << a << endl;
	assign();

	return 0;
}

//함수의 정의
void assign(void)
{
	// main 함수에 있는 변수와 같은 이름의 지역 변수
	int a = 10;
	cout << "assign 함수의 int형 변수 a : " << a << endl;
}

*/
// 지역 변수의 특징 3번 예제
/*
int main()
{
	int a = 10, b = 20;
	cout << "교환 실행 전 a와 b의 값 : " << a << ", " << b << endl;

	//코드 블록 생성
	{
		//int형 임시 변수 temp 선언
		int temp;

		//a와 b는 main 함수에서 선언된 변수
		//temps는 해당 코드 블록에서 선언된 변수
		temp = a;
		a = b;
		b = temp;
	}
	//temp는 사용 범위가 선언된 해당 코드 블록을 벗어나지 못한다

	cout << "교환 실행 후 a와 b의 값 : " << a << ", " << b << endl;


	return 0;
}

*/
// 지역 변수의 특징 4번 예제
/*
int main()
{
	//해당 변수는 아래 블록 안에 새로 선언된 a, b에 의해 사용 범위가 제한된다
	int a = 10, b = 20;
	cout << "교환 실행 전 a와 b의 값 : " << a << ", " << b << endl;

	//코드 블록 생성
	{
		//int형 변수 선언
		int a, b, temp;

		//해당 연산식의 a, b는 블록 안에 새로 선언된 변수를 사용
		temp = a;
		a = b;
		b = temp;
	}
	//temp는 사용 범위가 선언된 해당 코드 블록을 벗어나지 못한다

	cout << "교환 실행 후 a와 b의 값 : " << a << ", " << b << endl;


	return 0;
}

*/
// 2. 전역 변수 (global)
/*
	1. 개요
	  - 프로그램 전체에서 사용되는 변수를 가리킨다.
	  - 프로그램이 실행될 때 메모리를 할당하며, 프로그램이 종료될 때 메모리를 시스템에 반납한다.

	2. 특징
	  1) 사용 범위가 프로그램 전체로 확대되어 어떤 함수에서라도 사용이 가능하다.
	  2) 전역 변수는 프로그램의 시작과 끝을 함께 한다.
	  3) 초기화를 하지 않아도 자동으로 0으로 초기화된다.

	3. 단점
	  1) 전역 변수의 이름을 바꾸면 그 변수를 사용하는 모든 함수를 찾아 수정해야 한다.
	  2) 전역 변수의 값이 잘못된 경우, 접근 가능한 모든 함수를 의심해야 한다.
	  3) 코드 블록 내에 같은 이름의 지역 변수를 선언하면 그 영역에서는 전역 변수를 사용할 수 없다.
*/
// 전역 변수 예제
/*
void assign_10(void);
void assign_20(void);

//전역 변수의 선언
int a;

int main()
{
	cout << "함수 호출 전 a의 값 : " << a << endl;

	assign_10();
	assign_20();

	cout << "함수 호출 후 a의 값 : " << a << endl;

	return 0;
}

void assign_10(void)
{
	// 전역 변수 a에 10을 대입한다.
	a = 10;
}

void assign_20(void)
{
	// 전역 변수 a의 같은 이름의 지역 변수 a를 선언한다.
	int a;
	// 지역 변수 a에 20을 대입.
	a = 20;
}
*/
// 3.static 지역 변수 (정적 변수)
/*
	1. 개요
	  - 지역 변수를 선언할 때 static 예약어를 사용하면 정적 변수가 된다.
	  - 코드 블록 안에 선언하므로 사용 범위가 제한되나, 일반 지역 변수와 다르게 메모리에 존재하는 기간이 다르다.
	  - 호출한 함수가 종료되어도 저장 공간을 그대로 유지한다.

	2. 특징
	  - 호출된 함수가 종료되더라도 저장 공간을 계속 유지한다.
	  - 정적 변수는 선언된 블록 안에서만 사용하는 전역 변수와 같다.
	  - 전역 변수와 동일하게 프로그램이 종료될 때까지 유지된다.
	  - 특별한 값을 입력하지 않는 이상 0으로 자동 초기화.
*/
//static 정적 변수 예제
/*

void auto_func(void);
void static_func(void);

int main()
{
	cout << "일반 지역 변수를 사용한 함수 실행 결과" << endl;
	for (int i = 0; i < 3; i++)
	{
		auto_func();
	}

	cout << "정적 지역 변수를 사용한 함수 실행 결과" << endl;
	for (int i = 0; i < 3; i++)
	{
		static_func();
	}

	return 0;
}

void auto_func(void)
{
	//지역 변수를 선언하고 초기화
	int a = 0;
	a++;
	cout << a << endl;
}

void static_func(void)
{
	//정적 지역 변수를 선언하고 초기화
	static int a;
	a++;
	cout << a << endl;
}

*/
// 메모리 구조
/*
	- 운영체제(OS)는 프로그램을 실행할 때 메모리를 시스템에서 나누어 제공해준다.

	1. 코드 영역(Code)
	  - 사용자가 실행할 프로그램의 코드가 저장되는 부분이다.
	  - CPU가 코드 영역에 저장된 명령어들을 가지고 연산 실행.

	2. 데이터 영역(Data)
	  - 전역 변수와 정적(static) 변수가 저장되는 부분이다.
	  - 프로그램의 시작과 끝을 함께 한다.

	3. 스택 영역(Stack)
	  - 함수와 관련이 있으며, 지역 변수와 매개변수가 저장되는 부분이다.
	  - 함수 호출과 동시에 할당되지만 기능 수행이 완료되면 자동 소멸한다.
	  - 기본적으로 후입선출-LIFO(Last-In First-Out) 방식으로 동작한다.
	  - 컴파일 때 크기가 결정된다.

	4. 힙 영역(Heap)
	  - 사용자가 직접적으로 메모리 관리를 할 수 있으며, 관리를 해야만 하는 곳이기도 하다.
	  - 힙 영역은 사용자가 메모리를 동적으로 할당하고 해제할 수 있다.
	  - 런타임 때 크기가 결정된다.
*/
// 주소 연산자
/*
	1. 개요
	  - 변수는 메모리 상의 저장 공간 위치만 알면 사용할 수 있다.
	  - 여기서 말하는 위치는 주소를 가리키는데, 이 주소를 사용하기 위해 필요한 것은 주소를 구하는 주소 연산자, 주소를 담는 포인터, 포인터로 변수를 사용할 때 필요한 간접참조 연산자가 있어야 한다.
	 - 주소는 변수가 할당된 메모리 공간의 시작 주소를 사용한다.
	 - 주소는 연산을 통해 직접 구해야 하며, 주소 연산자는 &(ampersand) 기호를 사용한다.


	2. 메모리 주소
	  - 프로그램이 사용하는 메모리에는 바이트별 주소값이 존재한다.
	  - 이 값은 0부터 시작하고 바이트 단위로 1씩 증가하며, 2바이트 이상의 크기를 갖는 변수는 여러 개의 주소값에 걸쳐 할당된다.


	3. 상세
	  - 주소 연산자는 단항 연산자이며 변수만을 피연산자로 사용한다.
	  - 메모리 주소가 파악되면 할당된 변수의 크기를 계산할 수 있으나, 이는 컴파일러와 운영체제의 상태에 따라 위치나 구조가 상이할 수 있다.
	  - 주소는 0부터 시작하는 양수이므로 출력할 때 unsigned에 해당하는 %u를 사용하는 것이 좋다.
	  - C++ 환경에서는 기본적으로 주소를 출력했을 때 16진수로 표시하며, printf를 사용하는 C언어 환경에서는 기본 10진수이다. 만약 16진수로 표시하고 싶은 경우 %x 나 %p를 입력한다.
*/
// 포인터
/*
	1. 개요
	  - 주소를 저장하는 변수이다.
	  - 일반적인 변수와 마찬가지로 선언한 뒤에 사용하며, 변수 앞에 *를 붙이면 된다.
*/
//1. 포인터란?
/*
	-프로그램에서 변수를 사용하면 해당변수의 값을 메모리상에 일시적으로 보관한다.
	-메모리 위에 올라간 데이터에 액세스하기 위해서는 그 데이터가 메모리 어디에 할당되어 있는가를 알아야한다.
	-보통 프로그래머가 변수가 메모리의 어딘가에 존재하고 있는지를 일부러 의식하지 않고 변수를 사용하고 있다.
	이는 프로그래머의 눈에 보이지 않는 어딘가에서 프로그래밍언어가 열심히처리해주고 있기때문
	-그러나 일부러 명시적으로 메모리 상의 주소를 의식하여 프로그래밍을 하는 방법도 있는데,
	이 때 사용하는 것이 바로 포인터(Pointer) 이다
*/
//2.
/*
int value = 10;
int* pointer = &value;

printf("%d\n", pointer);
printf("%08x", pointer);

변수를 선언하면 해당 변수의 값을 보관할 영역이 메모리 상에 자동 생성된다.
이메모리 상의 보관 영역을 주소(Address)라고한다

1번째 줄에 선언한 것은 별다를 것 없는 int형 변수이다
반면, 2번째 줄에 선언한 것은 여러 기호를 사용하여 선언한 이상한 int형 변수이다

2번째 줄의 우항에서 특정변수 앞에&(ampersand)를 붙이는 경우가 있는데 이연산자를 주소 연산자라고 한다.
일반 변수에 해당 연산자를 사용하면 해당 변수가 저장된 곳의 주소를 추출한다.

그다음, 2번째 줄의 좌항에서는 변수명 앞에 *기호가 붙어있다.
이기호는 간접참조 연산자라고 한다.

변수명에 해당 연산자를 붙여 선언한 변수는 포인터 변수라고 한다.
포인터 변수는 일반 변수와 다르게 다른변수와 함수 등의 주소를 보관한다

*/
//3.주소의 표시 형식
/*
위의 printf 함수는 포인터 변수 pointer 가 가진 주소값을 출력한다.
주소라는 것은 본래 단순한 정수이지만
자릿수가 많아지면 보기 어려워져서 16진수로 표기하는 일도있다
*/
//4.포인터 변수를 통한 값의 변경
/*
int value1 = 10;
int* pointer = &value1;

int value2 = *pointer;
*pointer = 20;

printf("value1: %d\n", value1);
printf("value2: %d\n", value2);

포인터 변수에 간접참조 연산자를 붙이면
해당 포인터 변수에 저장된 주소와 연결된 값을 받아온다
다시 말해서, 이상태의 pointer 변수는 value1과 동일한 내용을 가지고 있다는 뜻이다.

포인터변수 pointer 에는 value1의 메모리 주소가 대입되어 있으므로 변수 value2에는 value1의 값인 10이 대입되는 것
*/
//5.포인터는 '가르킨다'는 의미
/*
int value1 = 10;
int* pointer = &value1;

printf("pointer:%d\n" ,*pointer);

int value2 = *pointer;
*pointer = 20;

printf("pointer:%d\n", *pointer);

pointer = &value2;

printf("pointer:%d\n", *pointer);
*/
//6.포인터 변수를 사용할 때의 주의점
//6-1. 간접참조 연산자의 유무
/*
int value, value2;
int* pointer = &value; //주소를 사용

*pointer = 10;//주소에 연결된 값을 사용

pointer = &value2;//주소를 사용
/*
포인터의 변수의 선언과 초기화에서 간접참조 연산자를 붙여 주소에 접근할 수 있다.

이후에는 간접참조 연산자를 붙이면 주소에 연결된 값을 다루며
반대로 이를 붙이지 않으면 주소를 다룬다.

선언할 때와 대입할 때의 상황이 완전 다르기 때문에
포인터 변수를 취급할 때는 주의깊게 살펴야 한다.

*/
//6-2 간접참조 연산자의 위치,다수의 포인터를 선언
/*
int *pointer;	//OK	(간접참조 연산자의 위치는 어디에 집어넣든 상관 없음)
int * pointer;	//OK
int* pointer;	//OK
int* pointer1, * pointer2;	//OK
int* pointer1,pointer2;		//NG(뒤쪽의 변수는 일반 int형 변수로 선언됨)
*/
//7.NULL 포인터
/*
int* pointer = NULL;//C언어 NULL포인터선언 (int* pointer = 0;)
int* pointer = nullptr;//C++
int num = 123;

//pointer는 변수 num을 가리킨다
pointer = &num;

//pointer가 다시 NULL포인터로 변경됨
pointer = 0;

/*
NULL포인터는 메모리 상의 그어디도 가리키고 있지 않은 상태의 포인터이다.

NULL이 포인터임을 명시하기 위해 ((*void)0) 로 정의된 경우도 있는데,
이는 NULL이 정수의 0을 대체하기 위함이 아니라
포인터의 현재 상태를 표현해주려고만 사용되는 키워드임을 증명해준다.
*/
//연습문제
//아래코드를 참고하여 키보드로 입력한 양수를 4로 나누어 몫과 나머지를 변수에 저장하는 함수 func를 만들기
/*
void func(int* x, int* y);
int main()
{

	int mod, rem;
	func(&mod, &rem);
	cout << "몫 :" << mod << "나머지 :" << rem << endl;




	return 0;
}
void func(int* x, int* y)
{
	int tmp;
	cin >> tmp;

	int a = 4;
	*x = tmp / a;
	*y = tmp % a;
}
*/
//1.동적 할당 (Dynamic allocation)
/*
	1.서론
	-프로그램을 작성할 때 데이터 종류나 개수를 장담할 수 없는 경우, 필요한 변수나 배열의 공간을 실행 도중에 확보하는 것이 좋다.

	-프로그램에 필요한 저장 공간은 프로그램을 작성할 때 변수나 배열 선언을 통해 확보한다.

	-하지만 프로그램의 실행 중에 저장 공간을 할당하는 경우가 있는데,
	이렇게 확보한 공간은 재활용을 위해 다시 시스템에 반납해야 한다.

	-C언어 에서는 malloc과 free라는 함수로 동적 할당을 실행하였으나,
	C++에서는 메모리의 동적 확보 방법이 변경되어 동적 메모리를 확보하는 것이 더욱편리해졌다.

	2.new (C++)
	-지정한 데이터 타입의 사이즈만큼 메모리를 확보하고, 그포인터를 반환한다.

	-일반 배열은 변수를 배열의 사이즈로 지정하는것이 불가능하다 그러나 new를 사용하면 변수의 값을 이용하여 메모리를 확보하는 것이 가능하다.
	*변수를 생성하는 방법은 아래와 같다.
		1)int*num =new int;
		-동적 할당된 변수 내부의 값은 0
		2)int*num =new int(10);
		-동적 할당된 변수 내부의 값은 10
		3)int*num =new int[10];
		-동적 할당된 배열 요소 수는 10

	3.delete
	-동적 할당된 메모리는 사용처가 없어지면 해제하여 시스템에 반납을 해야한다.

	-new로 확보한 메모리는 delete로 해제하는 것이 원칙이다.

	-delete를 하지않은 채로 놔두면 갈 곳 없는 메모리가 그대로 남아 마지막에는 메모리부족(memory leak)현상이 발생한다.

	-new를 통해 확보 했던 메모리는 프로그램을 종료하면 자동으로 해제되기 때문에 샘플 코드처럼 단순한 경우라면 굳이 delete를 사용하지 않아도 문제가 발생하진 않는다.

	-new로 만든 배열을 메모리에서 해제하기 위해서는 반드시 delete[]와 같은 형식으로 해야만 한다.
	그렇지않으면 프로그램이 제대로 작동하지 않아 버그를 낳을 수 있다.
*/
// 동적 할당 예제
/*
//동적 할당을 통해 메모리 확보
	int* num = new int; //4바이트의 공간을 동적 할당
	double* avg = new double;//8바이트의 공간을 동적 할당
	*num = 10;
	*avg = 85.4835;
	cout << *num << endl;
	cout << *avg << endl;

	//동적 할당된 메모리를 시스템으로 반환
	delete num;
	delete avg;

	//=========================================

	//배열의 동적 할당
	int buf = 100;
	//int nums[buf];			//변수 배열 사이즈로 사용불가
	int* nums = new int[buf];	//변수 배열 사이즈로 사용가능
	for (int i = 0; i < buf; i++)
	{
		nums[i] = i;
	}
	cout << nums[0] << endl;
	cout << nums[50] << endl;
	cout << nums[99] << endl;

	//배열의 메모리 해제(반드시 대괄호를 붙여서 해제할 것) -안하면 메모리 쌓여서 무거워짐!!
	delete[]nums;
*/
//구조체(Struct)
/*
	1.개요
	-복수의 값을 한 곳에 정리하여 관리할 수 있는 사용자 정의 문법이다.

	-여러 가지의 데이터 타입을 결집시켜 새로운 데이터 타입을 만들어 낼수 있다.

	-배열도 복수의 값을 일괄적으로 다룰 수 있는 데이터 타입이지만.
	배열은 동일 타입의 집한인 것에 비해 구조체는 각기 다른 타입을 한꺼번에 관리 할 수 있다.

	2.구조체의 정의
	{   //멤버 변수
	char name[50];
	int age;
	char gender;

	-struct라는 것이 이제부터 구조체를 작성할 거라는 키워드 이다.

	-중괄호를 이용하여 코드블록을 작성하고, 해당 블록안에 구조체에 종속된 변수를 선언한다.
	이때 구조체안에서 선언된 변수는 멤버(또는 멤버 변수)라고한다.

	-변수의 개수 제한은 없다

	-코드 블록의 마지막에는 세미콜론을 반드시 넣어주어야한다

	3.구조체의 선언
	-구조체는 데이터 타입이므로 사용할 때는 일반 변수처럼 선언하고 사용한다.
	-구조체 변수의 멤버에 접근하기 위해서는 멤버 접근 연산자(마침표)를 사용해야한다.

	4.구조체의 초기화
	-멤버 변수에 문자열이 존재하는 경우,초기화를 할 수 있다면 바로 해주는것이 더욱 코드를 간결하게 쓸 수 있다.
	-초기화 값은 구조체에서 멤버 변수를 선언한 순서대로 입력하는 것이 원칙이다.
	-배열의 초기화와 마찬가지로 멤버 변수의 개수와 초기화 값을 개수가 일치하지 않을 경우 부족한 부분은 0으로 채워진다.

	예)Person _person={0};//전체가 0으로초기화

	-초기화 값이 부족할 경우 남은 부분을 0으로 채운다.

	예)Person _person ={1}; //맨 처음 변수만 1로,나머진 0으로 초기화

	-그리고 배열과 마찬가지로 선언을 하고난뒤의 초기화는 불가능
*/
/*
struct Person //구조체 person 선언
{
char name[50];//구조체의 멤버 선언
int age;
char gender;
};
int main()
{
	Person person;//Person타입의 변수를 선언한다

	//구조체의 각 멤버의 값을 대입
	//멤버 접근 연산자(period 또는 full point)
	strcpy_s(person.name, sizeof(person.name) - 1, "홍길동");
	person.age = 20;
	person.gender = 'M';

	//사용자 정의 구조체 Person의 선언과 초기화
	Person _person = {"홍길동",20,'M'};
	//Person _person = { 0 };//전체 0으로초기화
	//Person _person = { 1 };//첫변수만 1로 초기화 나머지 0으로초기화

	cout << "name :" << _person.name << endl;
	cout << "age :" << _person.age << endl;
	cout << "gender :" << _person.gender << endl;

	Person _person1 = { "홍길동",20,'M' };
	Person _person2;

	_person2 = _person1;

	Person _person3[] = {
	{ "홍길동",20,'M' },
	{ "홍길동",21,'M' },
	{ "홍길동",22,'M' },
	{ "홍길동",23,'M' },
	};

	//선언한 구조체 배열의 요소 개수를 파악하는 방법
	//sizeof(구조체 배열명)으로 구조체 배열 전체의 크기(바이트)를 파악
	//sizeof(구조체 명)을 사용하면 구조체 1개당 필요사이즈를 확인가능
	int count = sizeof(_person3) / sizeof(Person);

	for (int i = 0; i < count; i++)
	{
		cout << "name :" << _person3[i].name << endl;
		cout << "age :" << _person3[i].age << endl;
		cout << "gender :" << _person3[i].gender << endl;
	}
	return 0;
}
*/
//구조체 연습문제
/*
struct book
{
	char title[20];
	char author[20];
	int page;
	int price;
};

struct cracker
{
	int price;
	int calories;
};

struct student
{
	int num;//학번
	char name[20];//이름
	int score;//5과목 점수
	double avg;//평균
};
void getline(char x, int y);
int main()
{
	cracker postic;
	postic.price = 0;
	postic.calories = 0;
	cout << "가격,열량을 입력해주세요";
	cin >> postic.price >> postic.calories;
	cout << "가격 :" << postic.price << "원\t열량 :" << postic.calories<<"Kcal"<< endl;

	getline(70,'=');
	cout << "학번\t이름\t국어\t영어\t수학\t사회\t과학\t평균\n";
	getline(70,'-');
	student _student = {
	184,
	"홍길동",
	{85,46,75,93,68},
	0
	};
	int count=sizeof(_student.score)/sizeof(int);;
	cout << _student.num << "\t" << _student.name << "\t";
	for (int i = 0; i < count; i++)
	{
		_student.avg += (double)_student.score[i];
		cout << _student.score[i]<<"\t";
	}
	cout << _student.avg / count<<endl;
	getline(70, '=');
	*/
	//열거형 구조체(Enumerated Type)
	/*
	1.개요
	-선언/정의 형식은 구조체와 거의 동일하다.
	-단, 포함되는 요소들은 모두 문자열로 작성한다.

	2.특징
	-멤버의 선언에서 큰따옴표가 없는 문자열을 사용하나, 이들 요소의 내부처리 값은 0부터 시작하는 양의 정수이다.
	-변수가 지니는 단순한 수치에 의미를 부여할 수 있기에 프로그램의 전체적인 가독성을 향상시켜준다.
	*/
	//열거형 구조체 예제
	/*
	enum Direction
	{
		EAST =10,//정수 10부터시작
		WEST,
		NORTH,
		SOUTH
	};
	int main()
	{
		Direction direction;
		int select;

		cout << "진행 해야할 방향을 표시 해주세요." << endl;
		cout << "0.동쪽\t1.서쪽\t2.북쪽\t3.남쪽\n";
		cin >> select;

		direction = (Direction)select;//direction = select; 안됨 형변환 해줘야함

		switch(direction)
		{
		case EAST:
			cout << "동쪽" << endl;
			break;
		case WEST:
			cout << "서쪽" << endl;
			break;
		case NORTH:
			cout << "북쪽" << endl;
			break;
		case SOUTH:
			cout << "남쪽" << endl;
			break;
		}
	*/
	//type definition(typedef)
	/*
	1.개요
	-기존의 데이터 타입을 말미삼아 새로운 이름을 짓게 만들어주는 키워드이다
	2.특징
	-데이터 타입이 너무 길어 오타가 자주 날 것 같은경우,또는 일일이 입력 하기에 너무 귀찮을 때 typedef를 사용하면 간단하게 표기할 수 있다.
	-구조체에서는 또 다른 구조체명을 정의할 때 사용한다.
	*/
	//typedef 예제 *데이터 타입 이름 바꿈*
	/*
	typedef unsigned int uint;
	typedef char ch;
	typedef struct student
	{
		int num;
		char name[20];
	}STUDENT;
	typedef struct student//student를 지워도됨
	{
		int num;
		char name[20];
	}Profile,Sample;//또하나의 구조체명 ,를찍어 더추가할수있음
	int main()
	{
		unsigned int num1 = 10;
		uint num2 = 20; //unsigned int타입을 uint라는 이름으로 사용
		ch a[20] = "홍길동";
		cout << a;
		student _student1 = { 123,"홍길동" }; //일반 적인 구조체 변수선언

		Profile _student2; //새로정의한 이름으로 구조체 변수 선언
		_student2 = _student1;//눈에 보이는 데이터 타입은 다르나 사실 둘 다 같은 student 구조체 그래서 대입이 가능하다
	*/
	//객체 지향 프로그래밍(OOP,Object Oriented Programming)
	/*
	-C언어에 클래스 (Class) 개념을 도입하면서 생긴 특성이다.
	-대표적으로 캡슐화,다형성,상속성이 있다.
	-정보 은닉과 추상화도 있으나,상기 3가지 속성을 중점적으로 본다.

	*/
	//캡슐화 (encapsulation)
	/*
	[실생활 예시(TV)]
	 -기능:전파 수신,영상 표시
	 -조작:전원ON/OFF ,채널 변경,음량 조절

	 *TV의 구조와 동반되는 지식이 없더라도 조작방법만 알고 있으면 TV를 사용함에 있어서 전혀 불편함이 없다.
	 ->몰라도 되는 정보는 일부러 공개할 필요가 없고, 필요한 정보만을 공개하는 것이 정보 은닉(data hiding)이다.
	 ->이외에도 단순히 공개를 안하는것만이 아니라 허가된 조작 이외의 방법을 불허하는 것도 캡슐화의 특징이다.
	 ->또한,특정기능을 구현하기 위한 함수와 그에필요한 변수를 구성하고 오브젝트화 하여 예상치 못한 버그를 최소화 하여야 한다.
	*/
	//다형성 (Polymorphism)
	/*
	  -TV의 리모컨에는 전원 버튼이 있다.
	  -에어컨의 리모컨에도 전원 버튼이 있다.
	  -어느 쪽도 가전제품의 전원을 ON/OFF 할 수 있다
	   전원이라는 것에 대한 조작으로 결과를 다르게 받는다.

	   #동일한 이름의 명령(전원)이라도 조작 대상이 다르면 다른 결과를 불러오는 것이 바로 다형성의 특징이다.
	*/
	//상속성(Inheritance)
	/*
		-TV의 기본적인 기능을 탑재한 제품을 제작하였다.
		-이 제품은 일반적인 TV로써 문제 없이 사용할 수 있지만,
		4k 해상도 지원과 네트워크 기능 같은 고급 기능을 탑재 하여 추가로 제품을 개발하려 한다

		#아무 것도 없는 상태에서 처음부터 설계하지 않고,
		기존 오브젝트의 내용을 일부 상속받아 그것을 기반으로 설계하여 효율성을 추구하는 것이 상속의 특징이다.
	*/
	//클래스(class)
	/*
		1.개요
		-객체 지향 프로그래밍의 특성을 구현하기 위해 만들어진 문법이다.

		2.상세
		-클래스는 관계된 기능이 매우 많고 복잡하다.
		객체 지향 프로그래밍을 올바르게 이해하고 최대한 이용할 수 있을 정도로 숙달하는 것은 매우 힘들다.
		-그렇다고는 해도 모든 기능을 반드시 알아야 할 필요는 없으며, 구현하고 싶은 것을 구현할 수만 있으면 지금은 그걸로충분.

		3.접근 제어 지시자
		-클래스의 캡슐화에 필요한 키워드이다.
		1) public
		- 에디에서든 외부로 부터 접근을 허용한다.
		2) private
		-외부로부터의 모든 접근을 차단한다.
		-지시자를 아무 것도 설정하지 않았을 경우 private로 고정(기본값)
		3) protected
		-해당 키워드가 선언된 클래스. 그리고 그 클래스를 상속받은 하위 클래스만 접근이 가능하다.


	*/
	//접근제어자 예제
	/*
	class SimpleClass
	{
		int g, h; //여기서부터 private
	public://접근 제어자
		int number;
		string name;

	private: //여기서부터 private
		int a, b;

	public: //여기서부터 public
		int c, d;

	protected://여기서부터 protected
		int e, f;
	};

	int main()
	{
		SimpleClass sc;
		sc.number = 0;
		sc.name="홍길동";
		cout << "number :" << sc.number << endl;
		cout << "name :" << sc.name << endl;




		return 0;
	}
	*/
	//인스턴스(Instance)
	/*
	1.개요
	-정의한 클래스를 기반으로 변수를 선언했을 때, 클래스 타입의 변수는 변수라는 이름보다 인스턴스(Instance)라는 이름으로 불린다.

	2.상세
	-인스턴스의 이름은 일반 변수나 구조체처럼 명사 위주로 표기한다.
	-정의된 클래스를 기반으로 삼아 우리가 사용할 수 있도록 실체화시킨 것이다.
	-클래스를 데이터 타입으로 설정하고, 해당 타입의 변수를 만들면 자동으로 인스턴스가 생성된다.
	-'클래스 타입 변수=인스턴스'라 생각해도 무방
	*/
	//Getter&Setter
	/*
	* Getter : 값을 받아오기 위한 접근용 함수
	* Setter : 값을 설정하기 위한 멤버 함수

		직접적으로 멤버 변수에 접근을 못하는 상황이 닥치더라도 접근 제어 함수를 사용하여 값의 수정을 자유롭게 할 수 있다.
		단, 이렇게 하는 경우 변수의 대한 정보를 은폐하지 않은 것과 다름없기 때문에 필요없는 조작에 대한 경계선을 확실하게 만들어줘야할 필요가 있다.

		<캐릭터 오브젝트>
		=>좌표를 수정해야 하는 상황
		  그런데 x,y축에 직접적인 접근이 안돼;

		  오브젝트 안에 getPosition, setPosition 라는 함수가 존재
		  */
		  //Getter&Setter예제
		  /*
				class SimpleClass
		  {
		  private:
			  int number; //여기서부터 private
			  string name;


		  public:
			  int GetNumber() { return number; }
			  void SetNumber(int n){number = n; }
			  string GetName() { return name; }
			  void SetName(string s) { name = s; }


			  SimpleClass():number(0),name("NoName")
			  {
			  //멤버 변수가 이미 초기화된 상태이기 때문에 다시 초기화할 필요가 없다
			  }

		  };
		  int main()
		  {
			  sc.SetNumber(100);
			  sc.SetName("홍길동");

			  cout << "number : " << sc.GetNumber() << endl;
			  cout << "name :" << sc.GetName() << endl;
			  return 0;
		  }

		  */
		  //생성자와 소멸자
		  /*
			  1.생성자
			  -반환자료형을 가지고 있지 않으며,클래스명과 동일한 이름을 가진 특수 함수이다.
			  반환자료형을 사용하지도 않는데 void까지 사용하지 않는다.

			  -멤버 함수의 한 종류지만,클래스의 인스턴스를 생성하기 직전에 자동으로 호출된다.
			  -생성자는 일반 함수와 다르게 나중에 따로 호출하는 것이 불가능하다.
			  -코드 블록의 작성은 자유롭게 할 수 있으나, 인스턴스가 생성될 때마다 호출되는 특성으로 인해 쓸데 없는 코드를 삽입하여 메모리를 낭비하지 않도록 한다.

			  2.생성자를 생략한 경우
			  -클래스안에 생성자를 정의하지 않았을 경우, 컴파일러는 자동으로 아무것도 하지않는 생성자를 만들어 처리한다.

			  3.멤버 초기화 리스트
			  -생성자에서 초기화를 실시할 때 멤버 변수를 입력 후 대입으로 평범하게 초기화 할 수 있지만,
			  초기화 리스트를 이용하여 값을 대입하는 것도 가능하다

			  4.동적 할당을 통한 생성자 호출
			  -new 키워드를 사용하지 않은 일반 인스턴스는 변수의 선언과 동시에 생성자를 호출한다.
			  반면, 포인터로 인스턴스를 선언했을 경우에는 그자체으론 생성자가 호출되지 않아 new키워드로 메모리 영역을 확보하고,
			  포인터 변수에 값을 대입하여 생성자를 호출한다.

			  -포인터 변수가 아닐 때는 scope를 벗어나기 전까지 메모리 해제가 불가능 하다.
			  스코프를 벗어난다는 것이 해당 변수에 접근이 불가능해진다는 것을 가르키므로,
			  똑같은 변수에 다른 인스턴스를 재할당 하는것은 안된다

			  -포인터 변수는 delete로 원하는 때에 메모리를 해제할 수 있다. 메모리를 해제하고 난뒤라도 스코프 범위 내에서라면 다시 변수에 접근할 수 있다.

			  -new 키워드로 다시 메모리를 확보하면 동일한 포인터 변수에 다른 인스턴스를 할당할 수 있다.

			  SimpleClass():number(0),name("no name"){} //생성자 초기화
		  */
		  //생성자와소멸자 예제
		  /*
		  class ArrayInt
		  {
			  int* p;
			  int length;

		  public:
			  ArrayInt(int length = 0)
			  {
				  p = new int[length];
				  if (p == NULL)
					  this->length = 0;
				  else
					  this->length = length;
				  for (int i = 0; i < length; i++)
					  p[i] = 0;
			  }
			  ~ArrayInt()
			  {
				  if (p != NULL)
					  delete[] p;
			  }
			  int size() { return length; }
			  bool isvalid(int index)
			  {
				  if (index < 0 || length <= index)
				  {
					  return false;
				  }
				  else
					  return true;
			  }
			  int get(int index)
			  {
				  return isvalid(index) ? p[index] : 0;
			  }
			  void set(int index, int n){
				  if (isvalid(index))
				  {
					  p[index] = n;
					  {
			  }
		  };

		  int main()
		  {
		  ArrayInt arrint(10);
		  for (int i = 0; i < arrint.size(); i++)
		  {
			  arrint.set(i, i + 1);
		  }
		  cout << arrint.get(0) << endl;
		  cout << arrint.get(5) << endl;
		  cout << arrint.get(9) << endl;


		  return 0;
		  }
		  */
		  //소멸자(distructor)
		  /*
			  -생성자와 마찬가지로 반환자료형과 인수를 가지지 않으며,클래스명과 동일한 이름을 가지는 특수 함수이다.

			  -어두에~(틸드)를 붙힌다

			  -기본적으로 생성자를 통해 메모리 등의 리소스를 확보한 경우에 실행하여 그것들이 안전하게 삭제 되도록 처리하는 역할을 담당한다.

			  -소멸자를 생략한경우 생성자와 마찬가지로 아무것도 하지않는 디폴트 소멸자를 자동으로 생성한다.
		  */
		  //포인터 생성자 예제
		  /*
		  //인스턴스의 선언과 동시에 생성자 호출
			  SimpleClass sc1;

			  //클래스 동적할당
			  //포인터 변수의 선언(아직 생성자가 호출되지 않은 상태)
			  SimpleClass* sc2;

			  //new 키워드 사용으로 생성자 실행
			  sc2 = new SimpleClass();//sc2에 메모리 확보

			  //delete로 해제하여 이후 사용을 금지한다
			  delete sc2;

			  //이미 해제했던 변수에 new키워드를 사용하여 메모리 재할당
			  sc2 = new SimpleClass();
		  */
		  //클래스 예제 2
		  /*
		  class SimpleClass
		  {
		  private:
			  int number; //여기서부터 private
			  string name;


		  public:
			  int GetNumber() { return number; }
			  void SetNumber(int n){number = n; }
			  string GetName() { return name; }
			  void SetName(string s) { name = s; }


			  SimpleClass():number(0),name("NoName")
			  {
			  //멤버 변수가 이미 초기화된 상태이기 때문에 다시 초기화할 필요가 없다
			  }

		  };

		  int main()
		  {
			  SimpleClass sc;//SimpleClass sc인스턴스 선언;

			  //Getter&Setter 를 이용하여 변수의 값을 변경한다.
			  sc.SetNumber(100);
			  sc.SetName("홍길동");

			  cout << "number : " << sc.GetNumber() << endl;
			  cout << "name :" << sc.GetName() << endl;

			  //===============================================

			  //인스턴스의 선언과 동시에 생성자 호출
			  SimpleClass sc1;

			  //클래스 동적할당
			  //포인터 변수의 선언(아직 생성자가 호출되지 않은 상태)
			  SimpleClass* sc2;

			  //new 키워드 사용으로 생성자 실행
			  sc2 = new SimpleClass();//sc2에 메모리 확보

			  //delete로 해제하여 이후 사용을 금지한다
			  delete sc2;

			  //이미 해제했던 변수에 new키워드를 사용하여 메모리 재할당
			  sc2 = new SimpleClass();


			  return 0;
		  }
		  */
		  //숙제
		  /*
		  클래스를 사용하여 몬스터 정보를 3개 구축하라.
		  단,스테이터스에 필요한 변수는 모두 private로 분류하고,
		  getter&setter 함수를 사용하여 값을 지정하라
		  [실행결과]
		  ================
		  몬스터 명:슬라임
		  HP::10
		  MP:3

		  STR:3
		  DEF:1
		  DEX:1
		  INT:0

		  */
		  /*
		  class Monster
		  {
			  string MonsterName;
			  int HP, MP;
			  int STR, DEF, DEX, INT;
		  public:
			  string GetMonsterName() { return MonsterName; }
			  void SetMonsterName(string n) { MonsterName = n; }
			  int GetMonsterHP() { return HP; }
			  void SetMonsterHP(int x) { HP = x; }
			  int GetMonsterMP() { return MP; }
			  void SetMonsterMP(int x) { MP = x; }
			  int GetMonsterSTR() { return STR; }
			  void SetMonsterSTR(int x) { STR = x; }
			  int GetMonsterDEF() { return DEF; }
			  void SetMonsterDEF(int x) { DEF = x; }
			  int GetMonsterDEX() { return DEX; }
			  void SetMonsterDEX(int x) { DEX = x; }
			  int GetMonsterINT() { return INT; }
			  void SetMonsterINT(int x) { INT = x; }
		  };
		  void getLine(char x, int y);
		  void SlimeInfo();
		  void OrangeMushroomsinfo();
		  void GreenMushroomsinfo();
		  int main()
		  {
			  getLine('=', 60);
			  SlimeInfo();
			  getLine('=', 60);
			  OrangeMushroomsinfo();
			  getLine('=', 60);
			  GreenMushroomsinfo();

			  return 0;
		  }
		  void getLine(char x, int y)
		  {
			  for (int i = 0; i < y; i++)
			  {
				  cout << x;
			  }
			  cout << endl;
		  }
		  void SlimeInfo()
		  {
			  Monster Slime;//몬스터 1
			  Slime.SetMonsterName("슬라임");
			  Slime.SetMonsterHP(10);
			  Slime.SetMonsterMP(3);
			  Slime.SetMonsterSTR(3);
			  Slime.SetMonsterDEF(1);
			  Slime.SetMonsterDEX(1);
			  Slime.SetMonsterINT(0);

			  cout << "몬스터 이름 : " << Slime.GetMonsterName() << endl;
			  cout << "HP : " << Slime.GetMonsterHP() << endl;
			  cout << "MP : " << Slime.GetMonsterMP() << endl;
			  cout << "STR : " << Slime.GetMonsterSTR() << endl;
			  cout << "DEF : " << Slime.GetMonsterDEF() << endl;
			  cout << "DEX : " << Slime.GetMonsterDEX() << endl;
			  cout << "INT : " << Slime.GetMonsterINT() << endl;
		  }
		  void OrangeMushroomsinfo()
		  {
			  Monster OrangeMushrooms;//몬스터 2
			  OrangeMushrooms.SetMonsterName("주황버섯");
			  OrangeMushrooms.SetMonsterHP(20);
			  OrangeMushrooms.SetMonsterMP(0);
			  OrangeMushrooms.SetMonsterSTR(5);
			  OrangeMushrooms.SetMonsterDEF(2);
			  OrangeMushrooms.SetMonsterDEX(2);
			  OrangeMushrooms.SetMonsterINT(0);

			  cout << "몬스터 이름 : " << OrangeMushrooms.GetMonsterName() << endl;
			  cout << "HP : " << OrangeMushrooms.GetMonsterHP() << endl;
			  cout << "MP : " << OrangeMushrooms.GetMonsterMP() << endl;
			  cout << "STR : " << OrangeMushrooms.GetMonsterSTR() << endl;
			  cout << "DEF : " << OrangeMushrooms.GetMonsterDEF() << endl;
			  cout << "DEX : " << OrangeMushrooms.GetMonsterDEX() << endl;
			  cout << "INT : " << OrangeMushrooms.GetMonsterINT() << endl;
		  }
		  void GreenMushroomsinfo()
		  {
			  Monster GreenMushrooms;//몬스터 3
			  GreenMushrooms.SetMonsterName("초록버섯");
			  GreenMushrooms.SetMonsterHP(30);
			  GreenMushrooms.SetMonsterMP(0);
			  GreenMushrooms.SetMonsterSTR(5);
			  GreenMushrooms.SetMonsterDEF(3);
			  GreenMushrooms.SetMonsterDEX(2);
			  GreenMushrooms.SetMonsterINT(0);

			  cout << "몬스터 이름 : " << GreenMushrooms.GetMonsterName() << endl;
			  cout << "HP : " << GreenMushrooms.GetMonsterHP() << endl;
			  cout << "MP : " << GreenMushrooms.GetMonsterMP() << endl;
			  cout << "STR : " << GreenMushrooms.GetMonsterSTR() << endl;
			  cout << "DEF : " << GreenMushrooms.GetMonsterDEF() << endl;
			  cout << "DEX : " << GreenMushrooms.GetMonsterDEX() << endl;
			  cout << "INT : " << GreenMushrooms.GetMonsterINT() << endl;
		  }
		  */
		  //this 포인터
		  /*
		  1.개요
		  -자기자신을 가리키는 포인터이다.
		  -여기서 말하는 자기자신이라는 의미는 해당 함수를 호출한 인스턴스를 호출한다
		  */
		  //상속
		  /*
			  1.개요
			  -클래스에 매우 중요한 기능 중 하나이다.
			  -특정 클래스의 기능을 이어받아 새로운 클래스를 만들어낸다

			  2.상세
			  -상속시켜줄 클래스는 상위 클래스 또는 부모 클래스라고 하며,
			  내용은 딱히 특별한 것이 없는 평범한 형태를 취하고 있다.
			  -상속을 받는 클래스는 하위 클래스 또는 자식 클래스라고 하며,
			  상위 클래스의 기능을 그대로 이어 받음과 동시에 새로운 기능을 추가할 수 있다.

			  3.상속방법
			  -상속을 실시할 때는 아래와 같은 문법을 준수한다

			  예시)하위클래스명:public 상위 클래스명

			  -하위 클래스를 정의하기 전에 상위 클래스가 먼저 정의되어 있어야 한다.
			  -만약 이둘의 위치가 뒤바뀌어 있는 경우에는 컴파일 에러를 발생시킨다.

		  */
		  //상속클래스 예제
		  /*
		  //상속 클래스(상속시켜줄 클래스)
		  class BaseClass
		  {
		  public:
			  void print()
			  {
				  cout << "BassClass\n";
			  }
		  };
		  //하위클래스(상속을 받을 클래스)
		  class DerivedClass :public BaseClass
		  {
		  public:
			  void printNew()
			  {
				  cout << "DerivedClass\n";
			  }
		  };
		  int main()
		  {
			  DerivedClass dc;
			  //인스턴스에서 상위 클래스의 멤버 함수를 호출
			  dc.print();
			  //하위 클래스에서 새로 정의한 멤버 함수를 호출
			  dc.printNew();
			  return 0;
		  }
		  */
		  /*
		  int main()
		  {
			  monsterSlime* ms = new monsterSlime();
			  ms->ShowingMonsterStatus();
			  delete ms;

			  monsterOak* ok = new monsterOak();
			  ok->ShowingMonsterStatus();
			  delete ok;

			  return 0;
		  }
		  */
		  //다중 정의와 가상함수
		  /*
		  1.함수의 오버로딩 (overloading)
		  -C언어 에서는 동일한 이름으로 함수를 정의하면 에러를 발생 시킨다.
		  -반면 C++은 C언어보다 더욱 유연한 처리를 위해 함수의 매개변수가 다르면 동일한 이름이라도 정의할 수 있다.
		  이것을 함수의 오버로딩(또는 다중정의)라고 한다.

		  -함수를 호출할 때는 데이터 타입이 어떤지 명시적인 구분이 불가능.
		  그러나 상황에 맞는 인수를 대입하면 그것에 맞춰 자동으로 적용된다.

		  2.가상 함수(virtual function)
		  -상속은 특정 클래스의 기능을 이어받은 새로운 클래스를 정의하는 것.
		  -기본 클래스에 새로운 함수를 추가하는 것만으로도 심플하면서 어느정도 편리한 파생 클래스를 만들 수 있다.
		  하지만 상속에서 가장 중요한 것은 다형성을 구현화 할 수 있다는 것인데,이를 실행하기 위해 필요한 것이 가상 함수이다.

		  3.가상 함수의 사용 방법
		  virtual[멤버 함수의 원형];  #부모 클래스에서 사용한다
		  -부모 클래스에서 virtual 키워드를 사용해 가상함수를 만들면, 자식클래스에서 재정의된 멤버 함수도 자동으로 가상 함수로 생성된다.

		  4.final과 override
		  1)final
		  -자식 클래스 특정 함수를 재정의할 수 없도록 제한하는 키워드 이다.
		  ->상속은 가능하지만 파생 클래스에서의 재정의는 안했으면 하는함수
		  -클래스명 뒤에 부착하여 잘못된 상속을 방지하거나 상속할 수 없는 클래스를 만들 수 있다.
		  ->이클래스는 더이상 확장하면 안돼~ 할때 사용

		  2)override
		  -자식 클래스의 가상 함수에서만 사용하며, 매개변수를 입력하는 괄호 바로 뒤에 부착한다
		  -재정의를 실행할 때 매개변수의 타입이나 개수를 잘못 입력할 때가 있지만,
		  컴파일러가 이를 완벽하게 걸러주진 못한다.
		  -이를 막아주고 확실하게 명시해주는 키워드가 바로 override
		  */
		  //함수의 오버라이드
		  /*
		  -이미정의된 내용을 싸그리 무시하고,동일명의 함수나 변수를 재정의하는 문법
		  -함수를 통한 오버라이딩을 실시하는 경우, 명령문을 새로 작성해야 하기 때문에 해당 함수 원형을 부모 클래스에 있는 것과똑같이 할 필요가 있다
		  */
		  //가상 함수(virtual function)
		  /*
		  1.개요
		  -자식 클래스에서 재정의를 실행할 멤버 함수이다.

		  2.문법
		  virtual[멤버 함수 원형];
		  -상위 클래스에서 virtual 키워드를 사용해 가상 함수를 만들면, 하위 클래스에서 똑같은 이름의 함수를 만들경우 자동으로 가상함수가 된다.
		  */
		  //함수의 오버로딩 예제(class내에 함수명이 같으나 매개변수의 갯수나 형식이 틀린 것)
		  /*
		  int _max(int x, int y)
		  {
			  return x > y ? x : y;
		  }
		  double _max(double x, double y)
		  {
			  return x > y ? x : y;
		  }
		  int main()
		  {
			  int num1 = 5;
			  int num2 = 7;
			  double num3 = 1.5;
			  double num4 = 0.2;

			  cout << _max(num1,num2) << endl;

			  return 0;
		  }
		  */
		  //오버 라이딩 예시1(virtual 키워드 미사용) (상속받은 클래스에 상위 클래스의 함수명이 같도록 하는것)
		  /*
		  자식 클래스에서 뭘 어떻게 하든 간에 부모 클래스에서 정의된 내용만 표시됨
		  class Base//부모 클래스
		  {
		  public:
			  void func() { cout << "안녕하세요" << endl; }
		  };
		  class Derived :public Base//Base 클래스를 상속 받는 자식 클래스
		  {
		  public:
			  void func() { cout << "만나서 반갑습니다" << endl; }
		  };

		  int main()
		  {
			  Base* a = new Base();
			  Base* b = new Derived();
			  a->func();
			  b->func();

			  return 0;
		  }
		  */
		  //오버 라이딩 예시2(virtual 키워드 사용)
		  /*
		  class Base
		  {
		  public://virtual키워드사용하면 복사한다고생각하면됨
			  virtual void func() { cout << "안녕하세요" << endl; } //virtual 키워드를 사용하여 재정의될 예정인 함수를 설정
		  };
		  class Derived :public Base
		  {
		  public:
			  void func() { cout << "만나서 방갑습니다" << endl; }
		  };

		  int main()
		  {
			  Base* a = new Base();
			  Base* b = new Derived();
			  a->func();
			  b->func();

			  return 0;
		  }
		  */
		  //오버 라이딩 예시3(virtual,final,override 키워드 사용) C++11에서 추가된 키워드를 사용하여 상속을 입체적으로 표현
		  /*
		  class Base //class Base final 클래스명 옆에 붙히면 상속 불가능 (상속못하게 할때 사용)
		  {
		  public:
			  virtual void func1()final;
			  virtual void func2();
			  void func_register();
		  };
		  class Derived :public Base
		  {
		  public:
			  void func1(); //final 키워드가 들어갔기 때문에 오버라이딩 불가능 final=재정의불가
			  void func2()override; //아무런 이상없이 오버라이딩 가능
			  void func_register(int a)override;//매개변수의 불일치로 오버라이딩 불가능
			  void func_register()override;//부모클래스에 가상 함수 선언이 안되어 있어 오버라이딩 불가능(비가상함수이기 때문에 재정의 불가)
		  };

		  int main()
		  {
			  Base* a = new Base();
			  Base* b = new Derived();
			  a->func();
			  b->func();

			  return 0;
		  }
		  */
		  //일반화 프로그래밍(Generic Programming)
		  /*
		  -객체 지향 프로그래밍이 데이터를 중요시하는 반면,
		  이쪽은 프로그램의 알고리즘에 중점을 두는 프로그래밍 방식이다.
		  */
		  //템플릿(template)
		  /*
		  1.개요
		  -매개변수의 타입에 따라 함수나 클래스를 자동으로 추론하여 생성하는 문법.
		  -템플릿을 사용하면 여러 자료형에서 작동할 수 있는 하나의 함수 또는 클래스를 만들 수 있다.

		  2.함수 템플릿
		  -매개변수를 통해 자료형을 자동으로 추론하여 함수를 정의한다.
		  -임의의 자료형을 인수로 전달했을 때,컴파일러가 해당 자료형에 부합하는 함수를 자동으로 생성한다.

		  [문법]
		  template<typename 타입>
		  함수원형
		  {
		  실행문
		  }

		  -C++ 98에서 추가된 typename 키워드를 사용하기 전까지는
		  typname 대신에 class키워드를 사용했었다.
		  -때문에 템플릿에서 typename 과 class는 같은 의미를 가진다.

		  2.클래스 템플릿
		  -대상이 클래스인 것이 다를 뿐, 기본적인 내용은 함수 템플릿과 동일 하다.
		  -자료형에 따라 다르게 동작하는 클래스를 만들수 있다.

		  [문법]
		  template<typename 타입>
		  Class 클래스명
		  {
		  실행문
		  }
		  -typename 대신에 class를 사용할수 있다.
		  */
		  //함수 템플릿 예시1(2개의 변수를 더하는 함수)(서로 다른 데이터 타입 2개의 변수를 더하는 함수)
		  /*
		  template<typename T>
		  T Add(T a, T b)
		  {
				  return a + b;
		  }
		  template<typename T1, typename T2>//서로다른 데이터 타입의 변수를 더하기
		  void Add(T1 a, T2 b)
		  {
			  return a + b;
		  }
		  int main()
		  {
			  int a = 10, b = 20;
			  float c = 1.5, d = 2.4;
			  cout << Add(a,b);
			  cout << Add(c, d);
			  Add(a, d);//서로다른 데이터 타입
			  return 0;
		  }
		  #pragma region
		  #pragma endregion
		  */
		  //다양한 타입의 데이터를 저장하는 클래스를 작성한다
		  /*
		  template<typename T>
		  class Temp
		  {
		  private:
			  T data;
			  template<typename T>
			  Temp<T>::Temp(T _data)
			  {
				  //템플릿 변수를 초기화 한다
				  data = _data;
			  }

			  template<typename T>
			  void Temp<T>::setData(T _data)
			  {
				  data = _data;
			  }

			  template<typename T>
			  T Temp<T>::getData()
			  {
				  return data;
			  }
		  public:
			  //생성자로 템플릿 변수를 초기화 컨트롤+ .(선언/정의만들기)  +c
			  Temp(T _data);
			  void setData(T _data);
			  T getData();
		  };
		  int main()
		  {
			  //템플릿 클래스의 인스턴스
			  Temp<int> temp1(0);
			  Temp<char> temp2('A');
			  //인스턴스 내부의 변수 값을 세팅한다
			  temp1.setData(10);
			  temp2.setData('B');

			  //인스턴스 내부 변수의 값을 출력한다
			  cout << temp1.getData() << endl;
			  cout << temp2.getData() << endl;

			  return 0;
		  }
		  */

		  //define
		  /*
		  1.개요
		  -특정 이름으로 매크로를 정의해주는 전처리 지시자이다.

		  2.문법
		  #define [매크로명] [치환될 부분]
		  =>다른 변수들과 구분이 쉽게 가도록 암묵적으로 대문자표기

		  3.장점
		  -자주 사용하는 상수나 문자열을 의미 있는 단어로 바꿀 수 있다.
		  -전체적인 코드의 길이가 줄어들어 가독성이 향상 된다.

		  4.단점
		  -문제가 발생하면 매크로가 어떤 형태로 치환되는지 무조건 재확인이 필요하다.
		  -왜냐하면 컴파일러는 전처리가 끝나고 치환된 소스 파일로 빌드를 진행하지만, 사용자 시선에서는 매크로로 작성된 코드 밖에 볼 수 없기 때문.
		  */
		  //define 예제
		  /*
		  #define PI 3.141592f //실수형 상수를 매크로명 PI로 정의(1)
		  #define LIMIT 100.0	//실수형 상수를 매크로명 PI로 정의(2)
		  #define MSG "passed!"	//문자형 상수를 매크로명 MSG로 정의
		  #define ERR_PRN cout<<"범위를 벗어났습니다!"<<endl	//출력문을 매크로명 ERR_PRN으로 정의
		  #define INTRO "Learning C language\
		  & Basic Data Struct" //길면 (\)삽입하여 줄바꿈할 수 있다.
		  int main()
		  {
			  //반지름을 입력하여 원의 면적을 구하는 예제
			  double radius, area;//반지름과 면적을 담을 변수들
			  cout << "반지름을 입력하세요 :";
			  cin >> radius;

			  area = PI * radius * radius;

			  if (area > LIMIT)
			  {
				  ERR_PRN;
			  }
			  else
			  {
				  cout << "원의 면적 :" << area << "(" << MSG << ")" << endl;
			  }


			  return 0;
		  }
		  */
		  //define function(매크로함수)
		  /*
		  1.개요
		  -괄호 안에 들어가는 인수에 따라 서로 다른 결과를 갖도록 치환하며,함수처럼 사용할 수 있는 매크로의 한 종류.

		  2.문법
		  #define / 매크로함수명(인수) / 치환될 부분

		  3.장점
		  -호출한 함수로 이동하는 과정이 필요 없다.
		  -일반 함수에 비해 상대적으로 실행속도가 빠른 편이다.
		  -크기가 작은 함수를 호출하는 경우에는 매크로 함수가 좋은 대안이 될수 있다.

		  4.단점
		  -함수처럼 스이는 전처리 지시자이나,
		  치환된 이후 발생할 문제를 예측하는 것이 힘들다

		  -함수의 목적 중하나인 기능을 구현하는 것에 대해 한계가 명확하고,
		  이를 수정하는 것도 쉬운 일이 아니다.
		  */
		  //define function 예제
		  /*
		  #define SUM(a,b)((a)+(b))
		  #define MUL(a,b)((a)*(b))
		  int main()
		  {
			  //변수선언
			  int result;
			  int a = 10, b = 20;
			  int x = 30, y = 40;
			  cout << "a+b=" << SUM(a, b) << endl;
			  cout << "x*y=" << MUL(x, y) << endl;
			  //30을 2와 5의 곱으로 나누기
			  result = 30 / MUL(2, 5);
			  //(30 /2 )*5	#define MUL(a,b)a*b
			  //30 /(2*5)		#define MUL(a,b)(a*b)
			  //30 /(2*2+3)	#define MUL(a,b)((a)*(b))
			  cout << result;
			  return 0;
		  }
		  */
		  //define operator(매크로 연산자)
		  /*
		  1.개요
		  -매크로의 치환될 부분에서 사용하는 연산자이다.

		  2.종류
		  1)#:인수를 문자열로 치환한다
		  2)##:2개의 토큰을 붙여서 하나로 만드는 역활을 수행한다.

		  */
		  //define operator 예제
		  /*
		  #define PRINT_EXPR(x)cout<<#x<<"="<<x<<endl
		  #define NAME_SET(x,y)(x##y)
		  int main()
		  {
			  int a1, a2;

			  NAME_SET(a, 1) = 10;
			  NAME_SET(a, 2) = 20;
			  //cout<<"a1+a2"<<"="<<a1+a2<<endl;
			  PRINT_EXPR(a1 + a2);
			  return 0;
		  }
		  */
		  //conditional compile (조건부 컴파일)
		  /*
		  1.개요
		  -소스코드를 조건에 따라 선택적으로 컴파일하는 전처리 지시자이다.

		  2.종류
		  1)#if~#endif
		  -가장 기본적인 조건부 컴파일 문법이다.
		  -#if문의 조건식이 참이면 #if와 #endif 사이의 모든 문장을 컴파일 한다
		  -만약 조건을 충족하지 못할 경우 조건문 안의 소스코드가 비활성화된다.

		  2)#if~ #else ~#endif
		  -기존의 if~else 문과 마찬가지로 조건이 2개일 때 사용한다.

		  3)#if ~ #elif ~ #else ~ #endif
		  -기존의 if~else 문과 마찬가지로 조건이 3개일 때 사용한다.

		  4)#ifdef ~ #endif (#if defined ~ #endif)
		  -매크로가 정의되어 있는 것을 확인할 때 사용하는 문법이다

		  5)#ifndef ~#endif (#if !defined ~ #endif)
		  -매크로가 정의되어 있지 않은 상태를  확인할 때 사용하는 문법이다

		  ※#ifdef 나 #ifndef는 매크로의 정의 여부만 판단하기 때문에
		  다른연산자와 함께 조건식을 구성하려면 #if defined또는 #if !defined를 사용해야 한다

		  6)#undef
		  -조건부 컴파일을 실행하기 전에 매크로의 정의를 취소한다.
		  -해당 지시자를 사용하면 대상 매크로는 그즉시 정의가 취소되어 특정 조건부 컴파일을 건너뛴다.

		  7)#error
		  -사용자의 의지로 컴파일을 강제 중단하고 에러 메시지를 출력하는 지시자
		  -에러메시지를 작성할 때 큰따옴표가 필요없는 것이 특징이다
		  */
		  //#if~ #endif 예제
		  /*
		  #define VER 7
		  int main()
		  {
			  cout << "프로그램 버전을 검사합니다." << endl;
		  #if VER>=6 //프로그램버전이 6이상일 경우?
			  //여기에위치한 소스코드를 실행한다.
			  cout << "현재버전은 " << VER << " 입니다." << endl;
		  #endif

			  return 0;
		  }
		  */
		  //#if ~ #else ~ #endif 예제
		  /*
		  #define VER 5
		  int main()
		  {
			  cout << "프로그램 버전을 검사합니다." << endl;
		  #if VER>=6 //프로그램버전이 6이상일 경우?
			  //여기에위치한 소스코드를 실행한다.
			  cout << "현재버전은 " << VER << " 입니다." << endl;
		  #else
			  //버전이 6미만일경우
			  cout << "현재버전은 " << VER << " 입니다." << endl;
			  cout << "업데이트가 필요 합니다." << endl;
		  #endif

			  return 0;
		  }
		  */
		  //#if ~ #elif ~#else ~#endif
		  /*
		  #define VER 5
		  int main()
		  {
			  cout << "프로그램 버전을 검사합니다." << endl;
		  #if VER>=6 //프로그램버전이 6이상일 경우?
			  //여기에위치한 소스코드를 실행한다.
			  cout << "현재버전은 " << VER << " 입니다." << endl;
		  #elif VER<6 && VER >=3
			  //만약 두번째 조건을 만족 했을경우 여기에 위치한 소스코드를 실행한다.
			  //버전이 6미만일경우
			  cout << "현재버전은 " << VER << " 입니다." << endl;
			  cout << "업데이트가 필요 합니다." << endl;
		  #else
			  //상기조건을 모두 만족하지 못했을 경우 여기에 소스코드를 실행한다.
			  cout << "현재 지원이 종료된 프로그램 입니다." << endl;
			  cout << "상위 버전의 프로그램을 설치해주세요!" << endl;
		  #endif

			  return 0;
		  }
		  */
		  //#ifdef ~#endif , #ifndef ~#endif 예제
		  /*
		  #define BIT16//치환될 부분이 없는 매크로
		  int main()
		  {
			  int num = 0;
		  #ifdef BIT16 //정의가 되어있는지 확인
			  num = 32767;//정의되어 있으면 이부분을 실행
		  #else
			  num = 21417483647; //정의되어 있지 않으면 이 부분을 실행
		  #endif

		  #ifndef BIT16 //정의가 되어있는지 확인
			  num = 32767;//정의되어 있으면 이부분을 실행
		  #else
			  num = 21417483647; //정의되어 있지 않으면 이 부분을 실행
		  #endif

			  return 0;
		  }
		  */
		  //undef (매크로정의를 삭제)
		  /*
		  #define BIT16//치환될 부분이 없는 매크로
		  int main()
		  {
			  int num = 0;
		  #undef BIT16	//매크로의 정의를 삭제하는 #undef(undefine)

		  #ifdef BIT16	//해당매크로가 정의되어 있는지를 검사한다
			  num = 32767;	//정의 되어있으면 이부분을 실행
		  #else
			  num = 21417483647; //정의되어 있지않으면 이부분을 실행
		  #endif

			  return 0;
		  }
		  */
		  //error (컴파일을 강제중단)
		  /*
		  #ifndef BIT32
		  #error 현재 32비트는 지원하지 않습니다.
			  //특정 조건을 만족하여 컴파일을 강제중단하는 error 실행
		  #else
			  //있을경우 pass
		  #endif
		  */
