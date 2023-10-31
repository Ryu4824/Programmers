def solution(s):
    answer = []
    answer.extend([0, 0])
    count = 0
    zero = 0
    while s != '1':
        zero += s.count('0')
        s=s.replace("0","")
        num = len(s)
        s=bin(num)[2:]
        count += 1
    answer[0],answer[1]=count,zero
    return answer