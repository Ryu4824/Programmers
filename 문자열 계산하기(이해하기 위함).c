#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {

    int answer = 0;
    char *ptr=strtok(my_string," ");
    int sign = 0;
    int count2 = 0;
    answer = atoi(ptr);
    while(ptr != NULL)
    {
        if(strcmp(ptr,"+")==0)
        {
            ptr = strtok(NULL," ");
            answer += atoi(ptr);
        }
        else if(strcmp(ptr,"-")==0)
        {
            ptr = strtok(NULL," ");
            answer -= atoi(ptr);
        }
        else
        {
            ptr = strtok(NULL," ");    
        }   
    }

    return answer;
}