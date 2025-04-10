#include <stdio.h>


#pragma region 포인터 (1)
/* & 연산자 */
// int main(void)
// {
// 	int a;
// 	a = 2;
// 
// 	printf("%p \n", &a);
// 	return 0;
// }
// 
// 주소연산자를 활용하여 변수의 메모리주소 확인하기.
// int main()
// {
//     int a;
//     double b;
//     char c;
// 
//     printf("int 형 변수의 주소 : %p\n", &a);
//     printf("double 형 변수의 주소 : %p\n", &b);
//     printf("char 형 변수의 주소 : %p\n", &c);
// 
//     return 0;
// }

// 포인터의 선언과 사용
// int main()
// {
//     int a;
//     int* pa;
// 
//     pa = &a;
//     *pa = 10;
// 
//     printf("포인터로 a값 출력 : %d \n",*pa);
//     printf("변수명으로 a값 출력 : %d\n", a);
// 
//     return 0;
// }

// 포인터의 시작
// int main(void)
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 
// 	printf("포인터 p에 들어 있는 값 : %p \n", p);
// 	printf("int 변수 a가 저장된 주소 : %p \n", &a);
// 
// 	return 0;
// }

// * 연산자의 이용
// int main(void)
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 	a = 2;
// 
// 	printf("a 의 값 : %d \n",a);
// 	printf("*p 의 값 : %d \n",*p);
// 
// 	return 0;
// }


// * 연산자의 이용 2
// int main()
// {
// 	int* p;
// 	int a;
// 
// 	p = &a;
// 	*p = 3;
// 
// 	printf("a 의 값 : %d \n", a);
// 	printf("*p 의 값 : %d \n",*p);
// 
// 	return 0;
// }

// 포인터도 변수이다.
// int main(void)
// {
// 	int a;
// 	int b;
// 	int* p;
// 
// 	p = &a;
// 	*p = 2;
// 
// 	p = &b;
// 	*p = 4;
// 
// 	printf("a : %d \n",a);
// 	printf("b : %d \n",b);
// 	
// 	return 0;
// 	
// }

// 포인터를 사용한 두정수의 합과 평균 계산
// int main()
// {
//     int a = 10, b = 15, total; // 변수의 선언과 초기화
//     double avg;                // 평균을 저장할 변수
//     int* pa, * pb;             // 포인터 동시 선언
//     int* pt = &total;          // 포인터 선언과 초기화
//     double* pg = &avg;         // double형 포인터 선언과 초기화
// 
//     pa = &a;                  // 포인터 pa 에 변수 a 의 주소 대입
//     pb = &b;                  // 포인터 pb 에 변수 b 의 주소 대입
// 
//     *pt = *pa + *pb;          // a값과 b값을 더해 total에 저장
//     *pg = *pt / 2.0;          // total 값을 2로 나눈 값을 avg에 저장
// 
//     printf("두 정수의 값 : %d, %d\n",*pa,*pb); // a 값과 b 값 출력
//     // 결과 = 두 정수의 값 : 10, 15
//     printf("두 정수의 합 : %d\n", *pt); // total 값 출력
//     // 결과 = 두 정수의 합 : 25
//     printf("두 정수의 평균 : %.1lf\n",*pg);    // avg 값 출력
//     // 결과 = 두 정수의 평균 : 12.5
//     return 0;
// }
#pragma endregion


#pragma region 포인터 (2)
/* 상수 포인터? */
// int main()
// 
// 	int a;
// 	int b;
// 
// 	const int* pa = &a;
// 
// 	*pa = 3; // 올바르지 않은 문장
// 	pa = &b; // 올바른 문장
// 
// 	return 0;
// 
/* 상수 포인터?2 */
// int main()
// {
//     int a;
//     int b;
//     int* const pa = &a;
// 
//     *pa = 3; // 올바른 문장
//     *pa = &b; // 올바르지 않은 문장
//     
//     return 0;
// 
// }
// 
// 포인터에 const 사용하는법
// int main()
// {
//     int a = 10, b = 20;
//     const int* pa = &a; // 포인터 pa 는 변수 a를 가리킨다.
// 
//     printf("변수 a 값 : %d\n", *pa); // 포인터를 간접 참조해 a출력
//     pa = &b;                        // 포인터가 변수 b를 다시 가리키게 한다.
//     결과 : "변수 a 값 : 10"
//     printf("변수 b 값 : %d\n", *pa); // 포인터가 간접 참조 해 b 값 출력
//     결과 : "변수 b 값 : 20" 
//     pa = &a;                        // 포인터가 다시 변수 a를 가리킨다.
//     a = 20;                         // a를 직접 참조해 값을 바꾼다.
// 
//     printf("변수 a 값 : %d\n", *pa); // 포인터로 간접 참조해 바뀐 값 출력.
//     결과 : "변수 a 값 : 20"
//     return 0;
// 
// }

// 주소와 포인터의 크기
// int main()
// {
//     char ch;
//     int in;
//     double db;
// 
//     char* pc = &ch;
//     int* pi = &in;
//     double* pd = &db;
// 
//     printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
//     결과 : 8
//     printf(" int형 변수의 주소 크기 : %d\n", sizeof(&in));
//     결과 : 8
//     printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));
//     결과 : 8
// 
//     printf("char * 포인터의 크기 : %d\n", sizeof(pc));
//     결과 : 8
//     printf("int * 포인터의 크기 : %d\n", sizeof(pi));
//     결과 : 8
//     printf("double * 포인터의 크기 : %d\n", sizeof(pd));
//     결과 : 8
// 
//     printf("char * 포인터의 크기 : %d\n", sizeof(*pc));
//     결과 : 1
//     printf("int * 포인터의 크기 : %d\n", sizeof(*pi));
//     결과 : 4
//     printf("double * 포인터의 크기 : %d\n", sizeof(*pd));
//     결과 : 8
// 
//     return 0;
// }
// 부가설명
// 13~15행이 각변수의 주소를 구해 크기를 출력하는 문장입니다. ch,in,db는 각각변수 자체의 크기는
// 다르지만, 그 시작 주소 값의 크기는 모두 같습니다. 따라서 17~19행의 포인터도 가리키는 자료형과
// 상관없이 모두 크기가 같습니다. 물론 21~23행과 같이 포인터에 간접 참조 연산자를 사용해 가리키는
// 변수의 크기를 모두 출력한다면 각각 다른 결과가 나옵니다.

/* 포인터의 대입규칙 1 */
// 허용되지 않는 포인터의 대입
// int main()
// {
//     int a = 10;    // 변수 선언 과 초기화
//     int* p = &a;   // 포인트 선언과 동시에 a를 가리키도록 초기화
//     double* pd;    // double형 변수를 가리키는 포인터
// 
//     pd = p;        // 포인터 p값을 포인터 pd에 대입;
//     printf("%lf\n", *pd);   // pd가 가리키는 변수의 값 출력
//     결과 : -92559592117432107884277659021957555520241347761778250032873472.000000
//     return 0;
// }
// 포인터의 대입 규칙 1
// 포인터는 가리키는 변수의 형태가 같을 때만 대입해야 합니다.
// 부가설명
// 컴파일러는 p에 저장된 값을 int형 변수의 주소로 생각하고, pd에 저장된값을 double형 변수의 주소로
// 생각합니다. 따라서 pd에 p를 대입한 후에 간접 참조 연산을 수행하면 변수a에 할당된 영역이후의 
// 할당되지 않은 영역까지 사용하게 됩니다.

// 포인터의 대입 규칙 2
// 형변환을 사용한 포인터의 대입은 언제나 가능합니다.
// 포인터가 가리키는 자료형이 다른경우 형 변환 연산자를 사용하면
// 경고 메세지 없이 대입할 수 있습니다. 물론 대입한 후에 포인터를
// 통한 사용에 문제가 없어야 합니다. 

// 예시) 포인터에 형변환을 사용하여 대입할때
// double a = 3.4;  <- double 형 변수 선언
// double *pd = &a; <- pd가 double형 변수 a를 가리키도록 초기화
// int *pi;         <- int형 변수를 가리키는 포인터
// pi = (int *)pd;  <- pd 값을 형 변환해 pi에 대입

// 부가설명
// 여기서 pi가 간접 참조 연산을 수행하면 변수 a에 일부를 int형 변수처럼 사용할수 있습니다.
// 이런사용 방법은 포인터로 메모리를 직접 쪼개 쓰는 것이므로 데이터가 메모리에 저장되는 방식을
// 충분히 이해하고 있어야 합니다. 만약 *pi = 10; 과 같이 a의 일부분에 정수를 저장하면 정수와실수의
// 데이터 크기와 저장 방식이 다르므로 a에 저장한 실수 값은 사용할 수 없습니다.

/* 포인터의 덧셈 */
// int main()
// {
// 	int a;
// 	int* pa;
// 	pa = &a;
// 
// 	printf("pa 의 값: %p \n",pa);
// 	printf("(pa + 1) 의 값 : %p \n", pa + 1);
// 	return 0;
// }

/* 포인터의 덧셈2 */
// int main()
// {
// 	int a;
// 	char b;
// 	double c;
// 	int* pa = &a;
// 	char* pb = &b;
// 	double* pc = &c;
// 
    // int 형은 기본 4byte 메모리를 
    // 할당함으로 4byte 만큼 주소값이 더해진다.
// 	printf("pa 의 값 : %p \n", pa);
// 	printf("(pa + 1) 의 값 : %p \n", pa + 1);
// 
    // char 형 은 기본 1byte 메모리를 
    // 할당함으로 1byte 만큼 주소값이 더해진다.
// 	printf("pb 의 값 : %p \n", pb);
// 	printf("(pb + 1) 의 값 : %p \n", pb + 1);
// 
    // double 형은 기본 8byte의 메모리를
    // 할당함으로 8byte 만큼 주소값이 더해진다.
// 	printf("pc 의 값 : %p \n", pc);
// 	printf("(pc + 1) 의 값 : %p \n", pc + 1);
// 
// }

/* 포인터 뺄셈 */
// int main()
// {
//     int a;
//     int* pa = &a;
// 
    // int 형은 기본 4byte 메모리를 
    // 할당함으로 4byte 만큼 주소값이 뺄셈이 된다.
//     printf("pa 의 값 : %p \n",pa);
//     printf("(pa - 1) 의 값 : %p \n",pa - 1);
// }

/* 포인터끼리의 덧셈 */

// int main()
// {
//     int a;
//     int* pa = &a;
//     int b;
//     int* pb = &b;
//     int* pc = pa + pb;
// 
// 포인터 끼리의 덧셈은 아무런 의미가 없기 때문에 
// C 언어에선 수행할 수 없습니다.
// 
//     return 0;
// }

// 포인터를 사용한 두 변수의 값 교환
// void swap(int* pa, int* pb); // 두 변수의 값을 바꾸는 함수 의 선언
// 
// int main()
// {
//     int a = 10, b = 20; // 변수의 선언과 초기화
// 
//     swap(&a, &b);       // a, b의 주소를 인수로 주고 함수 호출
//     printf("a:%d b:%d\n", a, b);  // 변수 a,b 출력
// 
//     return 0;
// }
// void swap(int* pa, int* pb)  // 매개변수로 포인터 선언
// {
//     int temp;                // 교환을 위한 임시변수 선언
// 
//     temp = *pa;              // 임시변수(temp)에 pa가 가리키는 변수의 값 저장
//     *pa = *pb;               // pa가 가리키는 변수에 pb가 가리키는 변수의 값 저장
//     *pb = temp;              // pb가 가리키는 변수에 temp 값 저장
// }
// 결과  a : 20 b : 10

// 포인터 없이 두변수의 값을 바꾸는 함수는 불가능한가?
// 다른 함수의 변수 사용하기 (잘못된 예시)
// void swap(void);
// int main()
// {
//     int a = 10, b = 20;
// 
//     swap();
//     printf("a:%d b:%d\n", a, b);
// 
//     return 0;
// }
// void swap(void)
// {
//     int temp;
// 
//     temp = a;
//     a = b;
//     b = temp;
// }
// 결과 'a' : 선언되지않은 식별자 입니다.
//      'b' : 선언되지않은 식별자 입니다.
// 에러가 나는이유 : 함수안에 선언된 변수명은 사용범위가 함수내부로 제한되므로 main 함수에
// 있는 변수 a, b는 다른 함수인 swap함수 에서 그이름을 사용할 수 없습니다. 좀더 정확히 설명
// 하자면 변수가 선언된 시점부터 선언된 블록 끝까지로 제한됩니다. 결국 이방법은 컴파일 단계
//에서 문제가 발생합니다.

// 변수의 값을 인수로 주는 경우
// void swap(int x, int y);
// 
// int main()
// {
//     int a = 10, b = 20;
// 
//     swap(a, b);
//     printf("a:%d b:%d\n", a, b);
// 
//     return 0;
// }
// void swap(int x, int y)
// {
//     int temp;
// 
//     temp = x;
//     x = y;
//     y = temp;
// }
// 결과 a : 10 b : 20
// 값이 안바뀌는이유
// 함수를 호출 할때 main 함수의 변수 a, b의 값이 복사되어 15행의 매개변수 x,y에 저장됩니다.
// 결국 swap 함수 안에서는 a,b의 복사본을 바꾸므로 main함수의 두변수 a,b의 값은 변함이 없게됩니다.
// swap 함수에서 매개 변수의 이름을 a,b로 사용해도 결과는 같습니다. 이름이 같아도 함수가 다르면
// 메모리에 별도의 저장공간을 확보하므로 전혀 다른 변수로 사용됩니다.
// 마지막으로 swap 함수에서 바꾼값을 main 함수로 반환하는 방법을 생각할수있는데, 함수는 오직 하나의값만을
// 반환 할수 있으므로 한번의 함수 호출을 통해 두변수의 값을 바꾸는것은 불가능합니다.


#pragma endregion