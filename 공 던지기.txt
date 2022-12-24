#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len, int k) {
    int answer = 0;
    int num=0;
    for(int i=0;i<k-1;i++){
        num+=2;
        if(num>=numbers_len){
            num-=numbers_len;
        }
        answer=numbers[num];
    }
    return answer;
}