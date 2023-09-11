#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int len = strlen(my_string);
    int* answer = (int*)malloc(len*sizeof(int)+1);
    int num=0,temp=0;
    
    for(int i=0;i<len;i++){
        if(my_string[i]>='0' && my_string[i]<='9'){
            answer[num++]=my_string[i]-'0';
        }
    }
    for (int i = 0; i < num; i++) {
		for (int j = i; j <num; j++) {
			if (answer[i] > answer[j]) {
				temp = answer[i];
				answer[i] = answer[j];
				answer[j] = temp;
			}
		}
	}
    answer[num]='\0';
    return answer;
}