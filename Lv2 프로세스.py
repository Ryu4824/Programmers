def solution(priorities, location):
    answer = 0
    c=0
    while priorities:
        if max(priorities) == priorities[c]:
            answer+=1
            priorities.pop(c)
            if location == c:
                break
            if c < location:
                location -= 1
            c-=1
        c += 1
        if len(priorities)==c:
            c=0
    return answer