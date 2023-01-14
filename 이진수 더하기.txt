#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* bin1, const char* bin2) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int size =1;
    char* answer = (char*)malloc(sizeof(char)*size);
    int t = 1;
    int bin1_len = strlen(bin1);
    int bin1_ch = atoi(bin1);
    int bin2_len = strlen(bin2);
    int bin2_ch = atoi(bin2);
    int sum = 0;
    while(bin1_ch>0){
        sum += bin1_ch%10 * t;
        bin1_ch /= 10;
        t *= 2;
    }
    t = 1;
    while(bin2_ch>0){
        sum += bin2_ch%10 * t;
        bin2_ch /= 10;
        t *= 2;
    }
    
    int *a = (int*)malloc(sizeof(int)*size);
    for (int i = 0; sum != 0; i++) {
        a[i] = sum % 2;
        sum /= 2;
        if (sum != 0) {
            size++;
            a = realloc(a, sizeof(int)*size);
        }
    }
    // 배열 원소 거꾸로 출력 
    int count=0;
    for (int i = size - 1; i >= 0; i--) {
        answer[count++] = a[i]+'0';
    }
    answer[count]='\0';
    if(strcmp(bin1,"0")==0 ||strcmp(bin2,"0")==0){
        strcpy(answer,"0");
    }
    return answer;
}