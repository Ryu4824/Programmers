#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer = 0;
    int* num = (int*)malloc(sizeof(int)*array_len);
    int temp=0;
    for (int i = 0; i < array_len; i++) {
		for (int j = i; j <array_len; j++) {
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
    for(int i=0;i<array_len;i++){
        num[i]=array[i]-n;
        if(num[i]<0){
            num[i] *= -1;
        }
    }
    int min=num[0];
    for (int i = 1; i < array_len; i++) {
        if(min>num[i]) min=num[i];
	}
    for (int i = 0; i < array_len; i++) {
        if(min==num[i]){
            answer=array[i];
            break;
        }
	}
    return answer;
}