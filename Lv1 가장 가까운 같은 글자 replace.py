def solution(s):
    answer = []
    for i in range(len(s)):
        if s[i] in s[:i]:
            while s[:i].count(s[i])>1:
                s = s.replace(s[i],'0',1)
            answer.append(i-s.index(s[i]))
        else:
            answer.append(-1)
    return answer