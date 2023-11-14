def solution(n, left, right):
    answer = []

    for i in range(left, right + 1):
        row = i // n
        col = i % n
        value = max(row, col) + 1
        answer.append(value)

    return answer