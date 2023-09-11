def solution(citations):
    answer = 0
    citations.sort(reverse=True)
    for num in citations:
        if num > answer:
            answer+=1
    return answer