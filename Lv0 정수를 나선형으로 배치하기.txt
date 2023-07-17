def solution(n):
    answer = [[0]*n for _ in range(n)] #배열 초기화
    count = 0
    min_row = min_col = 0
    max_row = max_col = n - 1

    while count < n*n:
        #최소 행에 값 넣기
        for i in range(min_col, max_col + 1):
            count += 1
            answer[min_row][i] = count
        min_row += 1 #최소 행 1증가

        #최소 행에 최대 열에 값 넣기
        for i in range(min_row, max_row + 1):
            count += 1
            answer[i][max_col] = count
        max_col -= 1 #최대 열 1감소

        #최대 행에 감소된 최대 열에서부터 최소 열까지의 값 넣기
        for i in range(max_col, min_col - 1, -1):
            count += 1
            answer[max_row][i] = count
        max_row -= 1 #최대 행 1감소

        #최소 열에 감소된 최대 행에서부터 최소 행까지의 값 넣기
        for i in range(max_row, min_row - 1, -1):
            count += 1
            answer[i][min_col] = count
        min_col += 1 #최소 열 1증가

    return answer