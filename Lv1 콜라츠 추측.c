#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num) {
    int answer = -1;
    int ch=num;
    if(num==1) return 0;
    
    for(int i=1;i<500;i++){
        if(ch%2==0){
            ch = ch/2;
        }else if(ch%2==1){
            ch = ch*3 +1;
        }
        
        if(ch==1){
            return i;
        }
    }
    return answer;
}