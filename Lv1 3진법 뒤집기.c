#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = n;
    int count = 1;
    while(num/3 >0){
        num /= 3;
        count++;
    }

    for(int i=1;i<=count;i++){
        answer += (n%3)*pow(3,count-i);
        n /= 3;
    }
    return answer;
}