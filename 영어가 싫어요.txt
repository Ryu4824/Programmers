#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
long long solution(const char* numbers) {
    int len = strlen(numbers);
    long long answer = 0;
    char* ch = (char*)malloc(sizeof(char)*len);
    char* E[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int num=0,count=0;
    for(int i=0;i<len;i++){
        ch[num++]=numbers[i];
        ch[num]='\0';
        for(int j=0;j<10;j++){
            if(strcmp(ch,E[j])==0){
                answer=answer*10+j;
                num=0;
            }
        }
    }
    return answer;
}