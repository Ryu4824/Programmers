#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    if(n%6==0){
        return n/6;
    }
    int i;
    for(i=1;i<100;i++){
        if((i*n)%6==0){
            return (i*n)/6;
        }
    }
    return answer;
}