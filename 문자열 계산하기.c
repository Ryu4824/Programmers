#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int len =strlen(my_string);
    char *ptr = strtok(my_string, " ");
    int* num = (int*)malloc(sizeof(int)*len);
    bool m;
    for(int i=0;ptr != NULL;i++){
        num[i]=atoi(ptr);
        if (i==0){
            answer=num[i];
        }else {
            if(*ptr == '+'){
                m=true;
            }else if(*ptr == '-'){
                m=false;
            }else{
                if(m){
                    answer += num[i];
                } else{
                    answer -= num[i];
                }
            }
        }
        ptr=strtok(NULL, " ");
    }
    return answer;
}