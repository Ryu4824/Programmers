#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;
    int sum=0;
    int check=0;
    for(int i=0;i<array_len;i++){
        for(int j=i;j<array_len;j++){    
            if(array[i]==array[j]){
                sum++;
            }
        }
        if(sum>check){
            check=sum;
            answer = array[i];
        }
        else if(sum==check){     
            answer=-1;
        }
        
        sum=0;
    }
    return answer;
}