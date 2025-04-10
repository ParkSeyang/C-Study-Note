#include <stdio.h>

#pragma region 2개의 함수로 만든 프로그램(함수의 기초)
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

#pragma region 확인문제 3번
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
