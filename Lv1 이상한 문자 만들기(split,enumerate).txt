def solution(s):
    answer = ''
    for word in s.split(" "):
        for i, p in enumerate(word):
            if i % 2 == 0:
                answer += p.upper()
            else:
                answer += p.lower()
        answer += ' '

    return answer[:-1]