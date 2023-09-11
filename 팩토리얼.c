#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 1;
    int i=1;
    while(n!=0){
        i *= answer;
        if(i==n){
            break;
        }else if(i>=n){
            answer--;
            break;
        }
        answer++;
    }
    return answer;
}