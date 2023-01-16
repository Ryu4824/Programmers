#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int left, int right) {
    int answer = 0;
    for(int i=left;i<=right;i++){
        int num = 1;
        int ch=0;
        while(num<=i){
            if(i%num==0){
                ch++;
            }
            num++;
        }
        if(ch%2==0){
            answer += i;
        }else{
            answer -= i;
        }
    }
    return answer;
}