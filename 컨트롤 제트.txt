#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int answer = 0;
    int len=strlen(s);
    int* num = (int*)malloc(sizeof(int)*len);
    int n=0;
    char*  p;
    p = strtok(s," ");
    while(p != NULL){ 
        if (*p == 'Z') {
            answer -= num[n-1];    
        } else {
            num[n]=atoi(p);
            answer += num[n++];
        }
        p=strtok(NULL, " ");
    } 

    return answer;
}