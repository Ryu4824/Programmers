#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    int row=0;
    int col=0;
    int row_max=0,col_max=0;
    for(int i=0;i<dots_rows;i++){
        for(int j=i;j<dots_rows;j++){
            row_max=dots[i][0]-dots[j][0];
            if(row_max<0){
                row_max *= -1;
            }
            if(row<row_max) row=row_max;
        }
    }
    for(int i=0;i<dots_rows;i++){
        for(int j=i;j<dots_rows;j++){
            col_max=dots[i][1]-dots[j][1];
            if(col_max<0){
                col_max *= -1;
            }
            if(col<col_max) col=col_max;
        }
    }
    answer = row*col;
    return answer;
}