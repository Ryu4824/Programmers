//baby함수의 순서를 바꿔서 야매로 풀었음
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
void RemoveString(char *ap_str,char *ap_remove_str){
	int len;
	char *p_pos;
	while(*ap_str){
		if(*ap_str++ == *ap_remove_str){
			for(len=1;ap_remove_str[len];len++){
				if(*ap_str++ != ap_remove_str[len]) break;
			}
			if(ap_remove_str[len] ==0){
				ap_str -= len;
				for(p_pos = ap_str;p_pos[len];p_pos++) *p_pos = p_pos[len];
				*p_pos = 0;
			}
		}
	}
}

// babbling_len은 배열 babbling의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* babbling[], size_t babbling_len) {
    int answer = 0;
    char* baby[]={"ma","woo","ye","aya"};
    char* ptr;
    for(int i=0;i<babbling_len;i++){
        for(int j=0;j<4;j++){
            ptr=strstr(babbling[i], baby[j]);
            if (ptr != NULL){
                RemoveString(babbling[i],baby[j]);
                if(strcmp(babbling[i],"")==0) answer++;
                printf("i=%d babbling=%s baby=%s\n",i,babbling[i], baby[j]);
            }
        }
    }
    
    return answer;
}