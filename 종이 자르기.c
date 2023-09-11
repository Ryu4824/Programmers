#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int M, int N) {
    int answer = 0;
    if(M==1){
        return answer = N-1;
    }else if(N==1){
        return answer =M-1;
    }else if(M==1 && N==1){
        return answer =0;
    }
    answer = (N-1)+N*(M-1);
    return answer;
}