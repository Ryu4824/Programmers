def solution(n, m):
    answer = []
    a, b = max(n, m), min(n, m)
    num = 0
    while (b != 0):
        num = a % b
        a = b
        b = num
    answer.append(a)
    answer.append((n*m)/a)
    return answer