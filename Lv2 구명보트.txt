def solution(people, limit):
    people.sort()
    start=0
    end=len(people)-1
    answer = 0
    while start<=end: #시작인덱스와 마지막 인덱스가 같아질때까지 반복
        #최소값과 최대값의 합이 limit보다 작거나 같음으로 pop대신 시작 인덱스 1증가 끝인덱스 1감소
        if people[start] + people[end] <= limit:
            start += 1
            end -= 1
        #최대값만 제거하는 경우
        else:
            end -= 1
        answer += 1
    return answer