def solution(arr):
    answer = []
    answer.append(arr[0])
    i,count = 0,0
    for i in range(len(arr)):
        if(answer[count]==arr[i]):
            continue
        answer.append(arr[i])
        count += 1
    return answer