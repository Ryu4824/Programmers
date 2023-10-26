def solution(n):
    num = [0, 1]
    
    for i in range(2, n + 1):
        num.append((num[i - 1] + num[i - 2]) % 1234567)
    
    return num[n]