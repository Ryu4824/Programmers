#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// n과 가까운 수부터 정렬
// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*numlist_len);
    for(int i=0;i<numlist_len;i++) answer[i]=numlist[i];
    for(int i=0;i<numlist_len-1;i++){
        for(int j=0;j<=numlist_len-i-2;j++){
            if(abs(answer[j]-n)>abs(answer[j+1]-n)){
                int temp=answer[j];
                answer[j]=answer[j+1];
                answer[j+1]=temp;
            }
            else if(abs(answer[j]-n)==abs(answer[j+1]-n)){
                if(answer[j]<answer[j+1]){
                     int temp=answer[j];
                    answer[j]=answer[j+1];
                    answer[j+1]=temp;
                }
            }
        }
    }
    return answer;
}