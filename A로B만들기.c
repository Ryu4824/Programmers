#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* before, const char* after) {
    int answer = 0;
    int len = strlen(before);
    char temp;
    char b[len];
    char a[len];
    
    strcpy(b,before);
    strcpy(a,after);
    
    for (int i = 0; i < len; i++) {
		for (int j = i; j <len; j++) {
			if (b[i] > b[j]) {
				temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
            if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
    if(strcmp(a,b)==0){
        answer=1;
    }
    return answer;
}