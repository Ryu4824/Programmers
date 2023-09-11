def solution(nums):
    answer = 0
    num_sum = []
    from itertools import combinations
    for i in combinations(nums,3):
        num_sum.append(sum(i))
    for i in range(len(num_sum)):
        ch=0
        for j in range(2,num_sum[i]):
            if num_sum[i]%j==0:
                ch=1
                break
        if ch==1:
            continue
        answer += 1
    return answer