#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// board_rows는 2차원 배열 board의 행 길이, board_cols는 2차원 배열 board의 열 길이입니다.
int solution(int** board, size_t board_rows, size_t board_cols) {
    int answer = board_rows*board_cols;
    int x=board_rows,y=board_cols;
    int ch[100][100]={0, };
    for(int i=0;i<board_rows;i++){
        for(int j=0;j<board_cols;j++){
            if(board[i][j]==1){
                ch[i][j]=2;
                ch[i][j+1]=2;ch[i][j-1]=2;ch[i-1][j]=2;ch[i+1][j]=2;
                ch[i+1][j+1]=2;ch[i+1][j-1]=2;ch[i-1][j-1]=2;ch[i-1][j+1]=2;
            }
        }
    }
    for(int i=0;i<board_rows;i++){
        for(int j=0;j<board_cols;j++){
            if(ch[i][j]==2){
                answer--;
            }
        }
    }
    return answer;
}