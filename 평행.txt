#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    double ch_rows[6]={0,};
    double ch_cols[6]={0,};
    int count=0;
    double ch[6]={0,};
    for(int i=0;i<dots_rows;i++){
        for(int j=i;j<dots_rows;j++){
            if(i != j){
                ch_rows[count]=abs(dots[i][0]-dots[j][0]);
                ch_cols[count]=abs(dots[i][1]-dots[j][1]);   
                ch[count]=ch_cols[count]/ch_rows[count];
                count++;
            }
        }
    }

    for(int i=0;i<count;i++){
        for(int j=i;j<count;j++){
            if( i != j && ch[i]==ch[j]){
                answer = 1;
            }
        }
    }
    return answer;
}