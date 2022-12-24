#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// num_list_len은 배열 num_list의 길이입니다.
int** solution(int num_list[], size_t num_list_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int** answer = (int**)malloc(sizeof(int*)*(num_list_len/n));
    int a=num_list_len/n;
    for(int i=0;i<a;i++){
        answer[i]=(int *)malloc(sizeof(int)*n);
    }
    int k=0;
    for(int i=0;i<a;i++){
        for(int j=0;j<n;j++){
            answer[i][j]=num_list[k++];
            printf("%d",answer[i][j]);
        }
        printf("\n");
    }
    return answer;
}