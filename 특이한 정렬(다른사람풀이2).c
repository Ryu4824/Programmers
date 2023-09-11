#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numlist_len은 배열 numlist의 길이입니다.
int* solution(int numlist[], size_t numlist_len, int n) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*numlist_len);
    int tmp;
    int bef,aft;

    for(int i=0;i<numlist_len-1;i++)
        for(int j=i;j<numlist_len;j++)
        {
            if(numlist[i]<numlist[j])
            {
                tmp=numlist[i];
                numlist[i]=numlist[j];
                numlist[j]=tmp;
            }
        }

        for(int i=0;i<numlist_len-1;i++)
        for(int j=i;j<numlist_len;j++)
        {
            bef=(numlist[i]-n>0?numlist[i]-n:n-numlist[i]);
            aft=(numlist[j]-n>0?numlist[j]-n:n-numlist[j]);
            if(bef>aft)
            {
                tmp=numlist[i];
                numlist[i]=numlist[j];
                numlist[j]=tmp;
            }
        }
    for(int i=0;i<numlist_len;i++)
        answer[i]=numlist[i];
    return answer;
}