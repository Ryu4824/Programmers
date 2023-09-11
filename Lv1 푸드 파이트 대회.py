def solution(food):
    answer = ''
    for i in range(1,len(food)):
        for j in range(int(food[i]/2)):
            answer += str(i)
    answer += str(0)
    for i in reversed(range(1,len(food))):
        for j in range(int(food[i]/2)):
            answer += str(i)
    return answer