#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* quiz[], size_t quiz_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int num[5] = {0};
    char** answer = (char**)malloc(sizeof(char*) * quiz_len);
    for(int l = 0; l < (int)quiz_len; l++)
        answer[l] = (char*)malloc(sizeof(char) * 2);

    for(int l = 0; l < (int)quiz_len; l++){
        int i = 0, j = 0, m = 1, a = 0;
        int num[5] = {0};
        while(quiz[l][i]){
            while(quiz[l][i] != ' ' && quiz[l][i] != '\0'){
                if(quiz[l][i] == '-')
                    m *= -1;
                else if((quiz[l][i] == '+') || (quiz[l][i] == '='))
                    m = 1;
                else
                    a = a * 10 + quiz[l][i] - 48;
                i++;
            }
            num[j] = (j == 1) ? m : a * m;
            a = 0; m= 1;
            if(!(quiz[l][i])) break;
            i++; j++;
        }
        answer[l] = (num[0] + num[1] * num[2] == num[4]) ? "O" : "X";
    }
    return answer;
}