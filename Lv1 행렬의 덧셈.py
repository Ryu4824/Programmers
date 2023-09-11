def solution(arr1, arr2):
    answer = []
    for i in range(len(arr1)):
        ch = []
        for j in range(len(arr1[0])):
            ch.append(arr1[i][j]+arr2[i][j])
        answer.append(ch)
    return answer