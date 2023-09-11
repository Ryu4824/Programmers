#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int num, int total) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*num);

    int avg = total /num;
    int count = (num -1)/2;
    int start = avg - count;

    for(int i = 0; i< num; i++)
    {
        answer[i] = start ++;    
    }

    return answer;
}