#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* polynomial) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(1);
    char* ch = (char*)malloc(1);
    char* ch1 = (char*)malloc(1);
    
    //polynomial="x + 12";
    int xnum=0,num=0;
    char *ptr=strtok(polynomial," + ");
    int len=strlen(ptr);
    while(ptr != NULL){
        len=strlen(ptr);
        if(ptr[len-1]=='x'){
            if(len==1){
                xnum++;
            }else{
                xnum += atoi(ptr);
            }
        }else{
            num += atoi(ptr);
        }
        ptr = strtok(NULL," + ");
    }
    
    if(xnum==0&&num==0){
        answer="0";
    }//아무것도 없을때
    if(xnum==0 && num>0){
        sprintf(answer, "%d", num);
    }//x가 없을때
    if(num==0 && xnum>1){
        sprintf(answer, "%d", xnum);
        strcat(answer, "x");
    }//x만 존재할때
    if(xnum>1 && num>0){
        sprintf(ch, "%d", xnum);
        answer=ch;
        strcat(answer, "x + ");
        sprintf(ch1, "%d", num);
        strcat(answer,ch1);
    }//둘다 존재할때
    if(xnum==1){
        strcpy(answer,"x");
        if(num != 0){
            strcat(answer, " + ");
            sprintf(ch, "%d", num);
            strcat(answer, ch);
        }
    }//x가 1일때
    return answer;
}