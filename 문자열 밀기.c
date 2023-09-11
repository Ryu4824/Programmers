#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* A, const char* B) {
    int answer = 0;
    int len = strlen(A);
    char* ch=(char*)malloc(sizeof(char)*len);
    strcpy(ch,A);
    if(strcmp(ch,B)==0) return 0;
    while(answer != len){
        char temp=ch[len-1];
        for(int i=len-1;i>0;i--){
            ch[i]=ch[i-1];
        }
        ch[0]=temp;
    
        answer++;
        
        if(strcmp(ch,B)==0){
            break;
        }
    }
    if(answer==len) return -1;
    return answer;
}