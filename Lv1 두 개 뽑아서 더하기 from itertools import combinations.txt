def solution(numbers):
    answer=[]
    from itertools import combinations
    for i in combinations(numbers,2):
        answer.append(sum(i))
    answer = list(set(answer))
    answer.sort()
    return answer