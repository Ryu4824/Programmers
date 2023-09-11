#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int i, int j, int k) {
    int answer = 0;
    char* ch = (char*)malloc(j);

    for(int num=i;num<=j;num++){
        sprintf(ch, "%d", num);
        int count=0;
        while(ch[count]!=NULL){
           if(k==ch[count++]-'0'){
               answer++;
           }
        }
    }
    return answer;
}