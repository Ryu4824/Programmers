from collections import Counter #함수를 제외하려면 딕셔너리로 해결하면 될듯

def solution(k, tangerine):
    answer = 0
    num = 0
    for i,j in Counter(tangerine).most_common(k):
        answer += j
        num += 1
        if answer >= k:
            return num