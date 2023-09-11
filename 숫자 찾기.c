#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = 1;
    int* n = (int*)malloc(7);
    int i;
    for(i=0;num!=0;i++){
        n[i]=num%10;
        num=num/10;
    }
    for(int j=i;j!=0;j--){
        if(n[j-1]==k){
            return answer;
        }
        answer++;
    }
    answer = -1;
    return answer;
}