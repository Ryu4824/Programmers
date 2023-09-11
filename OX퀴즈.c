#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* quiz[], size_t quiz_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char** answer = (char**)malloc(quiz_len);
    for(int i=0;i<quiz_len;i++){
        answer[i]=(char *)malloc(sizeof(char)*10);
    }
    for(int i=0;i<quiz_len;i++){
        char *ptr=strtok(quiz[i]," ");
        int sum = atoi(ptr);
        while(ptr != NULL)
        {
            if(strcmp(ptr,"+")==0)
            {
                ptr = strtok(NULL," ");
                sum += atoi(ptr);
            }
            else if(strcmp(ptr,"-")==0)
            {
                ptr = strtok(NULL," ");
                sum -= atoi(ptr);
            }
            else if(strcmp(ptr,"=")==0)
            {
                ptr = strtok(NULL," ");
                printf("%d\n",sum);
                if(atoi(ptr)==sum){
                    answer[i]="O";
                }else{
                    answer[i]="X";
                }
                
            }   
            else
            {
                ptr = strtok(NULL," ");
            }   
        }
    }
    return answer;
}
