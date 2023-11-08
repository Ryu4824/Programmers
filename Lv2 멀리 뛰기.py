def solution(n):
    answer = 0
    if n%2==0:
        for i in range(1,n//2):
            answer = answer + (n - i*2) + 1
        answer += 2
    else:
        for i in range(1,n//2+1):
            answer = answer + (n - i*2) + 1
        answer += 1
    return answer % 1234567