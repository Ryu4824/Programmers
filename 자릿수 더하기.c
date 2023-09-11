#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=0;n!=0;i++){
        answer += n%10;
        n=n/10;
    }
    return answer;
}