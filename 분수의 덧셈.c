#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int denum1, int num1, int denum2, int num2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    int up=denum1*num2 + denum2*num1;
    int down=num1*num2;
    
    int num=0;
    for(int i=1;i<=up;i++){
        if(up%i==0 && down%i==0){
            num=i;
        }
    }
    printf("%d",num);
    answer[0]=up/num;
    answer[1]=down/num;
    return answer;