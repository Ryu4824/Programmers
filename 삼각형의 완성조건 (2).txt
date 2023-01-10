#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int answer = 0;
    int swap = 0;
    if(sides[0]>sides[1]){
        swap=sides[0];
        sides[0]=sides[1];
        sides[1]=swap;
    }
    for(int i=sides[1]-sides[0];i<sides[1];i++){
        answer++;
    }
    for(int i=sides[1];i<sides[0]+sides[1]-1;i++){
        answer++;
    }
    return answer;
}