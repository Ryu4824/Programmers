def solution(storey):
    answer = 0
    while storey>0:
        num = storey%10
        if int(storey/10%10) >= 5:
            if num >= 5:
                answer += (10-num)
                storey = int((storey/10)) + 1
            else:
                answer += num
                storey = int(storey/10)
        else:
            if num > 5:
                answer += (10-num)
                storey = int((storey/10))+1
            else:
                answer += num
                storey = int(storey/10)
    return answer