#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b, int c) 
{
    int answer = 0;

    if (a != b != c)
    {
        answer = a + b + c;
        return answer;
    }
    else if (a == b != c || a != b == c)
    {
        answer = (a + b + c) * ((a * 2 ) + (b * 2) + (c * 2));
        return answer;
    }
    else if (a == b == c)
    {
        answer = (a + b + c) * ((a * 2) + (b * 2) + (c * 2)) * ((a * 3) + (b * 3) + (c * 3));
        return answer;
    }

}