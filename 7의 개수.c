#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len) {
    int answer = 0;

    for(int i = 0; i < array_len ; i++)
    {
        while(1)
        {
            if(array[i]<=0)
                break;
            int temp = array[i]%10;
            if(temp == 7)
                 answer++;
            array[i] /= 10;
        }
    }
    return answer;
}