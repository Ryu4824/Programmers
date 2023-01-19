#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    int row_max = 0;
    int col_max = 0;
    int temp=0;
    for(int i=0;i<sizes_rows;i++){
        if(sizes[i][0]<sizes[i][1]){
            temp=sizes[i][1];
            sizes[i][1]=sizes[i][0];
            sizes[i][0]=temp;
        }
    }
    for(int i=0;i<sizes_rows;i++){
        if(row_max<sizes[i][0]){
            row_max=sizes[i][0];
        }
        if(col_max<sizes[i][1]){
            col_max=sizes[i][1];
        }
    }
    answer = row_max*col_max;
    return answer;
}