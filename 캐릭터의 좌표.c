#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// keyinput_len은 배열 keyinput의 길이입니다.
// board_len은 배열 board의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* keyinput[], size_t keyinput_len, int board[], size_t board_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(1);
    int x=0,y=0;
    for(int i=0;i<keyinput_len;i++){
        if(strcmp(keyinput[i],"left")==0) x--;
        if(strcmp(keyinput[i],"right")==0) x++;
        if(strcmp(keyinput[i],"down")==0) y--;
        if(strcmp(keyinput[i],"up")==0) y++;
        if(abs(x)>board[0]/2){
            if(x<0) x++;
            else x--;
        }else if(abs(y)>board[1]/2){
            if(y<0) y++;
            else y--;
        }
    }
    answer[0]=x;
    answer[1]=y;
    return answer;
}