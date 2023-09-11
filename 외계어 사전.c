#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// spell_len은 배열 spell의 길이입니다.
// dic_len은 배열 dic의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* spell[], size_t spell_len, const char* dic[], size_t dic_len) {
    int answer = 2;
    char temp[spell_len][1];//중복된 문자를 담아두는 배열
    for(int i=0;i<dic_len;i++){
        int count=0;   
        int dlen = strlen(dic[i]);
        for(int j=0;j<dlen;j++){
            for(int k=0;k<spell_len;k++){
                if(dic[i][j]==spell[k][0] && temp[i][0]!=dic[i][j]){               
                    count++;
                    temp[i][0]=spell[k][0];                                                  
                } 
                if(count==spell_len){
                    answer=1;
                    break;
                }         
            }
        }
    }
    return answer;
}