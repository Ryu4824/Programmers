def solution(k, m, score):
    answer = 0
    score=sorted(score)
    for i in range(len(score),0,-m):
        ch = i-m
        if ch >= 0: 
            answer+=score[ch]*m
    return answer