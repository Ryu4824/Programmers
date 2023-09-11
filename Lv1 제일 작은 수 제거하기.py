def solution(arr):
    answer = []
    del arr[arr.index(min(arr)):arr.index(min(arr))+1]
    answer = arr.copy()
    if(not answer):
        answer.append(-1)
    return answer