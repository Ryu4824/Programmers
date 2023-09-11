#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// quiz_len은 배열 quiz의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char** solution(const char* q[], size_t l) {
    int c,d,f,t,len;
    int sgn,right,n = 0,tmp,result;
    char** ans = (char**)malloc(l*sizeof(char*));
    for(c=0;c<l;c++) {
        f = 0; n = 0; sgn = 1; tmp = 0; right = 0;
        len = strlen(q[c]);
        for(d=0;d<=len;d++) {
            t = q[c][d];
            if( f == 1 && (t == ' '|| t == 0) ) {                
                if(right) result = sgn*tmp==n;
                else n += sgn>0?tmp:-tmp;
                tmp = 0; sgn = 1; f = 0;
            } 
            else if(t >= '0' && t <= '9'){ f = 1; tmp = tmp*10 + t-'0'; }
            else if(t == '-') sgn *= -1;
            else if(t == '=') right = 1;

        }
        ans[c] = (char*)malloc(2*sizeof(char));
        ans[c][0] = result ? 'O' : 'X';
        ans[c][1] = 0;
    }    

    return ans;
}