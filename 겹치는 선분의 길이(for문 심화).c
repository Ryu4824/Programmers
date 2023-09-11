#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lines_rows는 2차원 배열 lines의 행 길이, lines_cols는 2차원 배열 lines의 열 길이입니다.
int solution(int** lines, size_t lines_rows, size_t lines_cols) {
    int answer = 0;
    int arr[200] = {0,};
        
    // 2. lines 정보를 arr 배열에 적용
    for(int i = 0; i < lines_rows; i++)
        for(int j = lines[i][0] + 100; j < lines[i][1] + 100; j++){
            arr[j]++;
        }
        
    // 3. arr 배열에서 겹친 부분 세기
    for(int i = 0; i < 200; i++)
        if(arr[i] > 1) answer++;
    
    return answer;
}