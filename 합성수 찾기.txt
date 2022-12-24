#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%j==0){
                num++;
                if(num>=3){
                    answer++;
                    break;
                }
            }
        }
        num=0;
    }
    return answer;
}