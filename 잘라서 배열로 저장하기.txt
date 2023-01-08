#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* my_str, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_str);
    char** answer = (char**)malloc(sizeof(char*)*(len/n+1));
    int count=0;
    for(int i=0;i<(len/n)+1;i++){
        answer[i]=(char *)malloc(sizeof(char)*(n + 1));
    }
    for(int i=0;i<(len/n)+1;i++){
        for(int j=0;j<n;j++){
            answer[i][j]=my_str[count++];
        }
        answer[i][n]='\0';
    }
    return answer;
}