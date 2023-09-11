def solution(answers):
    answer = []
    l = len(answers)
    ch1 = [1, 2, 3, 4, 5]
    ch2 = [2, 1, 2, 3, 2, 4, 2, 5]
    ch3 = [3, 3, 1, 1, 2, 2, 4, 4, 5, 5]
    ch_num=[0,0,0]
    for i,v in enumerate(answers):
        if ch1[i%len(ch1)] == v:
            ch_num[0]+=1
        if ch2[i%len(ch2)] == v:
            ch_num[1]+=1
        if ch3[i%len(ch3)] == v:
            ch_num[2]+=1
    for i,v in enumerate(ch_num):
        print(i,v)
        if v==max(ch_num):
            answer.append(i+1)
    return answer