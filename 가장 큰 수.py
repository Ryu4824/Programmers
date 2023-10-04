"""
배열의 값들을 문자로 만든 다음 정렬 후 합치기
문제점 정렬을 하게되면 2번 예제는 9534303이되어버림
"""
def solution(numbers):
    answer = ''
    str_numbers = list(map(str,numbers))
    str_numbers.sort(reverse=True)
    for i in str_numbers:
        answer += i
    return answer