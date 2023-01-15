#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(long long n) {
    // 리턴할 값은 메모리를 동적 할당해주세요.
    int size = 1;
    int* answer = (int*)malloc(sizeof(int)*size);
    long long ch = n;
    if(n==0) answer[0] = 0;
    while(ch != 0){
        answer[size-1] = ch%10;
        ch /= 10;
        size++;
        answer = realloc(answer,sizeof(int)*size);
    }
    
    return answer;
}