#include <stdio.h>

#pragma region (2)개의 함수로 만든 프로그램(함수의 기초)
	// 예제
// int sum(int x, int y);  // 함수 선언
// int main()   // main 함수 시작
// {
// 	int a = 10, b = 20;   // int 형 변수 선언 및 변수값 입력
// 	int result;           // 두 정수를 더한 결과(result)를 저장할 변수
// 	result = sum(a, b);   // sum 함수 호출
// 	printf("result : %d\n", result);
// 	// 결과 : 30
// 	return 0;
// }   // main 함수 종료
// 
// int sum(int x, int y)      // sum 함수 정의 시작
// {
// 	int temp;             // 두 정수의 합을 잠시 저장할 변수
// 
// 	temp = x + y;         // 매개변수 x와 y의 합을 temp에 보관
// 
// 	return temp;         // temp 의 값을 반환
// }                        // sum 함수 종료
#pragma endregion

#pragma region 확인문제 (3)번
	// 187cm을 미터 단위로 환산해 출력하는 프로그램이 완성되도록 빈칸을 채우세요.
	// 단 cm을 m로 환산해 반환하는 함수를 만들고 함수호출을 통해 구현하세요.

// double centi_to_meter(int cm);   // 함수 선언
// 
// int main()
// {
// 	double res;                  // 함수의 반환값을 저장할 변수
// 
// 	res = centi_to_meter(187);  // 함수 호출, 반환값을 res에 저장
// 	printf("%.2lfm\n", res);    // 반환된 res의 값 출력
// 	 
// 	return 0;
// }
// 
// double centi_to_meter(int cm)    // 함수 정의 시작
// {
// 	double m;                    // double 형 변수 선언
// 
// 	m = cm / 100.0;              // 매개변수 cm의 값에 실수값 100.0 을 나눈 값을 m 변수에 저장
// 
// 	return m;                    // 환산된 값 반환
// }

#pragma endregion

#pragma region (4)가지 키워드로 끝내는 핵심 포인트(함수 기초)
// 1번. 함수선언을 하면 함수를 만들지 않고도 함수의 형태를 미리 알릴 수 있다.
// 2번. 험수 정의는 원하는 기능의 함수를 직접 만드는 것이다.
// 3번. 함수 호출은 만든함수를 사용하는 것이다.
// 4번. return은 함수 실행 결과로 나온 값을 반환할 때 사용하는 제어문이다.

// 표로 정리하는 핵심 포인트
/* 함수의 3가지 상태.         예시                         설명
*   | 함수 선언|   int sum(int x, int y);  |   함수의 형태를 알린다.
    |----------|                           |   함수 원형에 세미콜론을 붙인다.
	|          |                           |
*   |----------|   int sum(int x, int y)   |   함수를 만든다.
*   | 함수 정의|    {                      |    반환값의 형태, 이름, 매개변수를 표시하고
*   |----------|        return x + y;      |    블록 안에 기능을 구현한다.
*   |          |    }                      |
*   |----------|                           |
*   | 함수 호출|   sum(10,20);             |  함수를 사용한다.
*   |----------|                           |  함수에 필요한 값을 인수로 준다.
*/
#pragma endregion

#pragma region 함수 기초 확인문제 
// 1. 다음은 두실수의 평균을 구하는 함수를 호출하는 코드입니다. 함수 정의에서 빈칸에 알맞은 내용을 채우세요
// double average(double a, double b); // 함수 선언
// int main()
// {
// 	double res;               // 반환값을 저장할 변수 선언
// 	res = average(1.5, 3.4);  // 함수 호출
// }
// double average(double a, double b)  // <-함수 정의를 해보시오.
// {
// 	double temp;
// 	temp = a + b;
// 	return (temp / 2.0);
// }

// 2번. 각 용어에 알맞는 설명을 연결하세요.
// ◎함수 선언         ♧함수에 필요한 값을 주고 함수를 사용한다.
// ★함수 정의         ◎함수 원형을 컴파일러에 알린다.
// ♧함수 호출         ★함수 원형을 설계하고 내용을 구현한다.

// 3번. 187cm를 미터 단위로 환산해 출력하는 프로그램이 완성되도록 빈칸을 채우세요. 단,cm를
// m로 환산해 반환하는 함수를 만들고 함수 호출을 통해 구현하세요. (힌트 : cm를 m단위로 환산하는 계산법을 이용하면 쉽습니다.)

// double centi_to_meter(int cm); // 함수 선언
// int main()
// {
// 	double res;                // 함수의 반환값을 저장할 변수
// 
// 	res = centi_to_meter(187); // 함수 호출, 반환값을 res에 저장
// 	printf("%.2lfm\n", res);   // 반환된 res의 값 출력
//     // 결과 : 1.87m 
// 	return 0;
// }
// double centi_to_meter(int cm)  // 함수 정의 시작
// {
// 	double m;                  // double 형 변수 m 선언
// 	m = cm / 100.0;            // 변수 m에 cm를 m로 환산하는 계산법을 적용해서 변수 m 에 대입
// 	return m;                  // m의 값을 main함수에 반환
// }
#pragma endregion

#pragma region 매개변수가 없는 함수

// int get_num(void);  // 함수 선언
// 
// int main()   // main 함수 시작
// {
// 	int result;  //  get_num에서 반환값을 받을 변수 선언
// 
// 	result = get_num();   // 함수 호출, 반환값을 result 에 저장
// 	printf("반환값 : %d\n", result);  // 반환값 출력
//  결과 : (입력값)
// 	return 0;
// }
// 
// int get_num(void) // 매개변수가 없고 반환형만 있다.
// {
// 	int num;      // 키보드의 입력값을 저장할 변수 선언
// 
// 	printf("양수 입력 : ");    // 입력 안내 메세지
// 	scanf_s("%d", &num);      // 키보드 입력
// 
// 	while (num < 0)  // 음수가 입력되면 입력 과정 반복
// 	{
// 		printf("양수를 입력하세요! \n");
// 		printf("양수 입력 : ");
// 		scanf_s("%d", &num);
// 	}
// 	return num;               // 입력한 값 반환
// }
#pragma endregion

#pragma region 반환값이 없는 함수
// void print_char(char ch, int count);   // 함수 선언
// 
// int main(void)                        // main 함수 시작
// {
// 	print_char('@', 5);              // 문자와 숫자를 주고 함수 호출
// 	결과 : @@@@@
// 	return 0;
// }
// void print_char(char ch, int count)  // 매개변수는 있으나 반환형이 없는 함수
// {
// 	int i;
// 	if (count > 10)
// 	{
// 		return;
// 	}
// 	for (int i = 0; i < count; i++)  // i는 0부터 count-1까지 증가, 매개변수 int count의 대입값 만큼 만큼 반복
// 	{
// 		printf("%c", ch);           // 매개변수 ch 에 받은 문자 출력
// 	}
// 	return;
// }

#pragma endregion

#pragma region 매개변수와 반환값이 모두 없는 함수
// void print_line(void);   // 함수 선언
// 
// int main()
// {
// 	print_line();        // 함수 호출
// 	printf("학번       이름      전공     학점\n");
// 	print_line();        // 함수 호출
// 
// 	return 0;
// }
// 
// void print_line(void)
// {
// 	int i;
// 	for (i = 0; i < 50; i++)   // 50번 반복해서 "-" 출력
// 	{
// 		printf("-");
// 	}
// 	printf("\n");
// }
#pragma endregion

#pragma region 재귀호출 함수
// void fruit(void);   // 함수 선언
// 
// int main()
// {
// 	fruit();        // 함수 호출
// 	
// 	return 0;
// }
// void fruit(void)    // 재귀호출 함수 정의
// {
// 	printf("apple\n");
// 	fruit();        // 자신을 다시 호출
// }
// apple 가 출력되다가 종료되는이유
// 함수는 호출만으로도 일정크기의 메모리를 사용하므로 무한 호출을 하게되면 프로그램 하나가 쓸수있는 메모리(해당 프로세스에 할당된 스택 메모리)
// 를 모두 사용하게 되어 메모리 부족으로 강제 종료됩니다. 따라서 컴파일러는 컴파일 과정에서 다음과 같은 경고 메세지를 띄워 알려줍니다.
// Warning C4717 : 'fruit' : 모든 제어 경로에서 재귀적입니다. 함수로 인해 런타임 스택 오버플로우가 발생합니다.

// 수정된 예제

#pragma region 세번만 실행되는 재귀함수 호출

// void fruit(int count);
// 
// int main()
// {
// 	fruit(1);   // 처음 호출하므로 1을 인수로 준다.
// 
// 	return 0;
// }
// 
// void fruit(int count)    // 호출 횟수를 매개변수에 저장
// {
// 	printf("Apple\n");
// 	if (count == 3)      // 호출 횟수가 3이면 반환하고 끝낸다.
// 	{
// 		return;  
// 	}
// 	fruit(count + 1);    // 재호출할때 호출 횟수를 1증가
// 	printf("jam\n");
// }
// 결과 Apple
//	    Apple
//      Apple
//      jam
//      jam
// jam이 두번 출력된이유
// 재귀 호출 함수의 경우 최초 호출한곳이 아니라 이전에 호출했던곳으로 돌아가기때문이다.
// 참고사항
// 재귀 호출의 경우 하나의 함수에서 코드를 반복실행하는듯 하지만 실제로는 새로운함수를 실행하는것과같다.
// 재귀 호출 함수는 경우에 따라 복잡한 반복문을 간단히 표현할 수 있으나 코드를 읽기가 쉽지않고 반복호출되면서
// 메모리를 사용하므로 제한적으로 사용하는것이 좋다.

#pragma endregion
#pragma endregion

#pragma region (5)가지 키워드로 끝내는 핵심포인트(함수 심화)
// 1. 처리할 데이터를 스스로 입력하는 함수에는 매개변수가 없어도된다.
// 2. 전달받은 데이터를 화면에 출력하는 함수는 반환형을 쓰지 않아도 된다.
// 3. 같은 내용을 단지 화면에 출력하는 함수는 매개변수와 반환값을 둘다 쓰지 않아도 된다.
// 4. 매개변수와 반환값이 없을 때 빈 공간은 void를 적어준다.
// 5. 재귀호출 함수 는 자기 자신을 다시 호출한다.

// 다양한 함수의 형태

// 매개변수가 없는경우
// ◎선언 int get_num(void); 또는 int get_num();
// ◎특징 호출할 때 인수 없이 괄호만 사용한다.

// 반환형이 없는 경우
// ◎선언 void print_char(char ch, int count);
// ◎특징 반환할 때 return문을 쓰지 않거나 return문만 사용한다.
//        호출 문장을 수식의 일부로 쓸 수 없다.

// 반환형과 매개변수가 모두 없는 경우
// ◎선언 void print_line(void);
// ◎특징 2가지 경우의 특징을 모두 포함한다.

// 재귀호출 함수
// ◎정의 void fruit() {... fruit(); ...}
// ◎특징 함수 안에 재귀 호출을 멈추는 조건이 있어야 한다. 그러지않을경우 스택 오버 플로우가 발생한다.

#pragma endregion

#pragma region 함수 심화 확인문제
// 1. 다음중 함수의 형태(원형)에 따라 옳게 사용 된것을 고르세요
// ① void func(int,double);
//   int main(void)
//   {
//      func(1.5,10);
//   }
// ② int func(void);
//   int main(void)
//   {
//      func(void);
//   }
// ③ void func(void);
//   int main(void)
//   {
//     func() + 10;
//   }
// ④ int func(double)
//   int main(void)
//   {
//      pritf("%d", func(3.4));
//   }
// 정답 은 2번

// 2. main 함수와 실행 결과를 참고해서 1부터 일정수까지의 합을 구하는 sum 함수를 만들고 프로그램을 완성하세요.
// void sum(int num);  // 함수 선언
// int main()
// {
// 	sum(10);   // 1부터 10까지의 합 출력
// 	sum(100);  // 1부터 100까지의 합 출력
// 	
// 	return 0;
// }
// 
// void sum(int num)  // 매개변수에 합을 구할 마지막 값을 받는다.
// {
// 	int i = 0;     // 반복 횟수를 세는 변수와 합을 누적할 변수 정의
// 	int result = 0;
// 	for (i = 0; i <= num; i++) // 1부터 매개변수 num까지 i 증가
// 	{
// 		result += i;           // i만큼 반복해 result(합을 누적하는 변수)에 더한다.
// 	}
// 
// 	printf(" 1부터 %d까지의 합은 %d 입니다.\n", num,result);    // num과 result를 출력한다.
// 결과 : 1부터 10 까지의 합은 55입니다.
//      : 1부터 100 까지의 합은 5050입니다.
// }

// 3. 다음 프로그램의 실행결과를 적으세요. 정답 : 9
// int func(int n);
// int poly(int n);
// 
// int main()
// {
// 	printf("%d\n", func(-3));
// 	// 결과 : 9
// 	return 0;
// }
// int func(int n)  // 2*n*n + 3*n을 계산한 후에 그 절대값을 구하는함수
// {
// 	int res;
// 	res = poly(n);
// 	if (res >= 0)
// 	{
// 		return res;
// 	}
// 	else
// 	{
// 		return -res;
// 	}
// }
// int poly(int n)  // 2*n*n + 3*n을 계산해 반환하는 함수
// {
// 	return ((2 * n * n) + (3 * n));
// }

// 도전 실전 예제 
// 1부터 10까지의 합의 계산(재귀호출 사용)

// int rec_func(int n);
// 
//  int main()
// 
// 	int sum = 0;
// 	sum = rec_func(10);
// 
// 	printf("1에서부터 10까지의 합 : %d\n", sum);
// 	return 0;
// 
// / 1번
// int rec_func(int n)
// {
//    int count = 0;
//     count= n-1; // 재귀함수가 얼만큼 자신을 호출하는지 새기위한 변수
// 	int sum = 0;
// 	if (n == 0)
// 	{
// 		return sum;
// 	}
// 	else
// 	{
// 		sum = n + rec_func(n - 1);  // 재귀함수 가 자신을 호출하여 새로 함수를 불러온다 재귀함수는 rec_func(n-1) 만큼 계속불러온다
// 	}
//    printf("카운트 횟수 : %d\n", count); // 재귀함수가 만들어진만큼 count 변수에 대입된 수를 출력
// 	return sum;
// }
 
// 2번
// int rec_func(int n)
// {
// 	int count = 0;
// 	count = n - 1;   // 재귀함수가 얼만큼 자신을 호출하는지 새기위한 변수
// 	if (n == 0)
// 	{
// 		return n;
// 	}
// 	n = n + rec_func(n - 1);   // 재귀함수 가 자신을 호출하여 새로 함수를 불러온다 재귀함수는 rec_func(n-1) 만큼 계속불러온다
// 	printf("카운트 횟수 : %d\n", count);  // 재귀함수가 만들어진만큼 count 변수에 대입된 수를 출력
// 	return n;
// }

// 재귀함수에 대한 추가설명
// 재귀함수는 자기자신을 호출할때 일정횟수를정해놨다면 그횟수만큼 자신을 호출합니다 그렇게되면 임시함수가 1~10번까지존재하게되고
// 그 함수들은 10번부터 안에 명령문이 실행되면서 이전함수로 돌아갑니다 그렇다는것은 10번함수는 9번함수로 돌아가면서 실행된다는 의미입니다.
// 또한 각자 함수에서 한번씩 명령문이 실행되기때문에 재귀함수에대한 호출 횟수를새기위해 count++;과 같은변수를만들어도 각자 함수에서 1번씩만실행되기때문에
// 얼마만큼실행됫는지 제대로 카운팅이 올라가지않습니다.

#pragma endregion
