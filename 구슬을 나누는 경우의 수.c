#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int balls, int share) {
    int answer=0;
    __int128 n=1,a=1,m=1;
    
    for(int i=1; i<=balls ; i++){
        n *= i;
    }
    for(int i=1; i<=balls-share ; i++){
        a *= i;
    }
    for(int i=1; i<=share ; i++){
        m *= i;
    }
    answer=n/(a*m);
    return answer;
}