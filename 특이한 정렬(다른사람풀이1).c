#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int num[], size_t l, int n) {
    int c,d,dif;
    int buf[2][10000]={0,};
    int* ans = (int*)malloc(l*sizeof(int));

    for(c = 0;c < l;c++) {
        dif = num[c]-n;
        if(dif >= 0) {
            buf[0][dif] = num[c];
        } else {
            dif*=-1;
            buf[1][dif] = num[c];
        }        
    }
    for(c=d=0;c<10000;c++) {
        if(buf[0][c]) ans[d++] = buf[0][c];
        if(buf[1][c]) ans[d++] = buf[1][c];
    }

    return ans;
}