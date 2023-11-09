def solution(n):
    answer = 0
    if n%2==0:
        for i in range(1,n//2):
            answer = answer + (n - i*2) + i
        answer += 2
    else:
        for i in range(1,n//2+1):
            answer = answer + (n - i*2) + i
        answer += 1
    return answer % 1234567

#피보나치 수열로 해결함
def solution(n):
    if n <= 1:
        return 1
    
    ways = [0] * (n + 1)
    ways[1] = 1
    ways[2] = 2
    for i in range(3, n + 1):
        ways[i] = (ways[i - 1] + ways[i - 2]) % 1234567

    return ways[n]