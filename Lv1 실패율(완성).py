def solution(N, stages):
    answer = {}
    for i in range(1,N+1):
        challenge=0
        for j in range(len(stages)):
            if i <= stages[j]:
                challenge+=1
        if challenge==0:
            answer[i]=0
        else:
            answer[i]=stages.count(i)/challenge
    return sorted(answer,key=lambda x:answer[x], reverse=True)