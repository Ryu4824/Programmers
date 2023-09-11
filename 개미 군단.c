#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int i=hp/5, j=(hp%5)/3, k=(hp%5)%3;
    answer = i + j + k;
    return answer;
}