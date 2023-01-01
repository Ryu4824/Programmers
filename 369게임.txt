#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int order) {
    int answer = 0;
    int num=0;
    while(order != 0){
		num = order % 10;
		order /= 10;
        if(num%3==0 || num%6==0 || num%9==0){
            answer++;
        }
        if(num==0){
            answer--;   
        }
    }
    return answer;
}