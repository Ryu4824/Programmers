#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*numlist_len);
    int* ch = (int*)malloc(sizeof(int)*numlist_len);
    int* ch1 = (int*)malloc(sizeof(int)*numlist_len);
    int temp = 0;
    for(int i=0;i<numlist_len;i++){ //numlist와 n값의 차이를 ch배열에 저장
        ch[i] = abs(numlist[i] - n);
    }
    for (int i=0;i<numlist_len;i++) { //오름차순 정렬
		for (int j=i;j<numlist_len;j++) {
			if (ch[i] > ch[j]) {
				temp = ch[i];
				ch[i] = ch[j];
				ch[j] = temp;
			}
        }
    }
    for (int i=0;i<numlist_len;i++) {
		ch1[i]=numlist[i];
    }
    for (int i=0;i<numlist_len;i++) { //오름차순 정렬
		for (int j=i;j<numlist_len;j++) {
			if (ch1[i] > ch1[j]) {
				temp = ch1[i];
				ch1[i] = ch1[j];
				ch1[j] = temp;
			}
        }
    }
    for (int i=0;i<numlist_len;i++) {
		for (int j=0;j<numlist_len;j++) {
			if(ch[i]==abs(ch1[j] - n)){
                if(ch[i] != ch[i+1]){ 
                    answer[i]=ch1[j];
                    break;
                }
                answer[i]=ch1[j];
            }
        }
    }
    return answer;
}