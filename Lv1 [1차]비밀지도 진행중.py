def solution(n, arr1, arr2):
    answer = [0] *n
    for i in range(n):
        binaryNum = format(arr1[i], 'b')
        binaryNum_n = binaryNum.zfill(n)
        for j in range(n):
            if binaryNum_n[j] == '1':
                print(binaryNum_n,i,j)
                answer[i] += 1
    return answer