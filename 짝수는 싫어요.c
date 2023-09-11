#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
   int size = n%2==0? n/2 : (n/2)+1;
int* answer = (int*)malloc(sizeof(int)*size);

for(int i =0; i< size; i++)
{
answer[i]= 1+i*2;
}

    return answer;
}