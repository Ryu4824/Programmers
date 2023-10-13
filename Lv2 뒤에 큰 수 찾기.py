def solution(numbers):
    answer = []
    for i in range(len(numbers)-1):
        for j in range(i+1,len(numbers)):
            if numbers[i] < numbers[j]:
                answer.append(numbers[j])
                break
        if numbers[i] < numbers[j]:
            continue
        answer.append(-1)
    answer.append(-1)
    return answer