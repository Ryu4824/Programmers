#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* my_string) {
    int answer = 0;
    int len = strlen(my_string);
    int tmp=0;
    for(int i=0;i<len;i++){
        if (isdigit(my_string[i])!=0){
            tmp = tmp*10 + (my_string[i]-'0');
            if(i==len-1){
                answer += tmp;
            }
        }else{
            answer += tmp;
            tmp=0;
        }
    }
    return answer;
}