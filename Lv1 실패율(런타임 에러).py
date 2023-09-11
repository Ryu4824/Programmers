def solution(N, stages):
    answer = {}
    for i in range(1,N+1):
        count=0
        for j in range(len(stages)):
            if i <= stages[j]:
                count+=1
        answer[i]=stages.count(i)/count
    return sorted(answer,key=lambda x:answer[x], reverse=True)