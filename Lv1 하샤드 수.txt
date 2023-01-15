#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    bool answer = true;
    int result = x;
    int ch=0;
    int sum=0;
    while(x != 0){
        ch = x%10;
        x /= 10;
        sum += ch;
    }
    if(result%sum!=0) answer = false;
    return answer;
}