def solution(n):
    answer = 0
    ch = []
    while int(n) != 0:
        ch.append(int(n%10))
        n /= 10
    ch.sort()
    for i in range(len(ch)):
        answer += ch[i]*(10**i)
    return answer