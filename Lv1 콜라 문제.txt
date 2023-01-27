def solution(a, b, n):
    answer = 0
    while n>=a:
        answer += b*(n//a)
        n = b*(n//a) + n%a
    return answer