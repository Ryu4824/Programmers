def solution(n, words):
    answer = []
    ch_word = []
    now = 1
    loop = 1
    ch_word.append(words[0])
    for i in range(1,len(words)):
        now += 1
        if now > n:
            now = 1
            loop += 1
        if ch_word[-1][-1] != words[i][0] or words[i] in ch_word:
            answer.append(now)
            answer.append(loop)
            break
        ch_word.append(words[i])
    if len(answer) == 0:
        answer = [0,0]
    answer
    return answer