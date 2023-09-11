#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* b1, const char* b2) {
    int l1=strlen(b1),l2=strlen(b2);
    int c1=l1-1,c2=l2-1;
    int c = (c1>c2?c1:c2)+1;
    int s=0,r=0,t,t1,t2,flag=0;
    char* a = (char*)malloc(l1>l2?l1+2:l2+2);    
    a[c+1]=0;
    for(;c>=0||r;c--) {
        t1=c1>=0?b1[c1]-'0':0;
        t2=c2>=0?b2[c2]-'0':0;

        t = t1+t2+r;
        r = t/2;
        flag |= t%2;
        a[c] = t%2+'0';
        c1--;
        c2--;        
    }
    a+=a[0]=='0';

    return a;
}
