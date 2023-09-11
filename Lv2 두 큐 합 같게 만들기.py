def solution(queue1, queue2, answer=0):
    if sum(queue1) == sum(queue2):
        return answer
    if sum(queue1) > sum(queue2):
        popnum = queue1.pop(0)
        queue2.append(popnum)
    if sum(queue1) < sum(queue2):
        popnum = queue2.pop(0)
        queue1.append(popnum)
    if len(queue1) == 0 or len(queue2) == 0:
        return -1
    return solution(queue1, queue2, answer + 1)