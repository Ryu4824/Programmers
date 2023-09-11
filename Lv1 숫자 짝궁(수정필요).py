def solution(X, Y):
    answer = []
    for i in range(len(X)):
        if X[i] in Y:
            answer.append(X[i])
            Y = Y.replace(X[i],'',1)
            
    answer.sort()
    answer=''.join(reversed(answer))
    
    if len(answer) == 0:
        answer = '-1'
    elif answer[0] == '0':
        answer ='0'
    return answer