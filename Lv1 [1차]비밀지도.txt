def solution(n, arr1, arr2):
    answer = []
    ans=""
    for i in range(n):
        binaryNum_arr1 = format(arr1[i], 'b')
        binaryNum_arr2 = format(arr2[i], 'b')
        binaryNum_n1 = binaryNum_arr1.zfill(n)
        binaryNum_n2 = binaryNum_arr2.zfill(n)
        for j in range(n):
            if binaryNum_n1[j] == '1' or binaryNum_n2[j]=='1':
                ans +="#"
            else:
                ans += " "
        answer.append(ans)
        ans = ""
    return answer