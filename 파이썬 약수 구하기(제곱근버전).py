for i in range(1, int(math.sqrt(n)) + 1): # 1 ~ n의 제곱근에 가까운 자연수까지 검사 import math
    if n % i == 0:
        x.append(i)
        if i != n // i: # 제곱수인 경우 중복 제외
            x.append(n // i)