#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int solution(int numbers[], size_t numbers_len) {
    int answer = 0;
    int temp=0;
    int* num = (int*)malloc(sizeof(int)*numbers_len);
    for(int i=0;i<numbers_len;i++){
        num[i] = numbers[i];
    }
    for (int i=0;i<numbers_len;i++) {
		for (int j=i;j<numbers_len;j++) {
			if (num[i] > num[j]) {
				temp = num[i];
				num[i] = num[j];
				num[j] = temp;
			}
		}
	}
    int count=0;
    for(int i=0;i<10;i++){
        if(num[count]!=i){
            answer += i;
            continue;
        }
        count++;
    }
    return answer;
}