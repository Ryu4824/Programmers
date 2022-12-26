#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int* solution(int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(100*(sizeof(int)));
    int num=0;
    for(int i=2;i<=n;i++){
        if(n%i==0){
            answer[num] = i;
            num++;
            while(n%i==0){
                n /= i;
            }
        }
    }
    return answer;
}