#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 1;
    //가로/n * 세로/n * 높이/n
    for(int i=0;i<box_len;i++){
        answer*=box[i]/n;
    }
    return answer;
}