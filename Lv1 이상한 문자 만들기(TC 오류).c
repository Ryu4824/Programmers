#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char)*strlen(s));
    char* p = strtok(s," ");
    int count=-1;
    while(p != NULL){
        count++;
        int len = strlen(p);
        for(int i=0;i<len;i++){
            if(i%2==0 && p[i]>97){
            answer[count] = p[i] - 32;
            }else if(i%2!=0 && p[i]<97){
            answer[count] = p[i] + 32;
            }else{
                answer[count] = p[i];
            }
            count++;
        }
        answer[count] = ' ';
        p = strtok(NULL," ");
    }
    
    answer[count]='\0';
    
    
    return answer;
}