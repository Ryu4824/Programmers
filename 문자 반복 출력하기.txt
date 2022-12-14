#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int l=strlen(my_string);
    char* answer = (char*)malloc(l*n);
    int num=0;
    for(int i=0;i<l;i++){
        for(int j=0;j<n;j++){
            answer[num]=my_string[i];
            num++;
        }
    }
    answer[num]='\0';
    return answer;
}