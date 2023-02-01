def solution(k, score):
    answer = []
    ch = []
    for i in range(len(score)):
        ch.append(score[i])
        ch.sort()
        if len(ch)>k:
            del ch[0]
        answer.append(ch[0])
    return answer