#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int ch=0;
    while(ch != 1){
        answer++;
        ch = n%answer;
    }
    return answer;
}