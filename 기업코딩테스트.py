def solution(n, m):#팰린드롬
    answer = 0
    for i in range(n, m + 1):
        if str(i) == str(i)[::-1]:
            answer += 1
    return answer

def solution1(grade):#등수
    answer = [0]*len(grade)
    count = 1
    while count <= len(grade):
        maxnum = max(grade)
        if maxnum == 0:
            break
        max_indices = [i for i, value in enumerate(grade) if value == maxnum]
        for i in max_indices:
            answer[i]=count
            grade[i]=0
        count += len(max_indices)
    return answer

def solution2(n):#3과5의 최소상자
    if n % 5 == 0:
        return n // 5
    else:
        for i in range(n // 5, 0, -1):
            if (n - i * 5) % 3 == 0:
                return i + (n - i * 5) // 3
    if n % 3 == 0:
        return n // 3
    return -1

def solution3(n):#n을 이진수로 바꾼 1의 개수와 n이하의 수에서 1의 개수가 같은 개수구하기
    answer = 0
    n_count = bin(n)[2:].count('1')
    for i in range(n):
        if n_count == bin(i)[2:].count('1'):
            answer += 1
    return answer
'''
N=3
coffee_times=[4,2,2,5,3]

입출력 예 설명
시간	제작중 커피(주문 번호)	완료 순서
0	    [1,2,3]			        []
1	    [1,2,3]			        []
2	    [1,4,5]		        	[2,3]
3   	[1,4,5]		        	[2,3]
4	    [4,5]	        		[2,3,1]
5	    [4]		             	[2,3,1,5]
6	    [4]		        	    [2,3,1,5]
7	    []                      [2,3,1,5,4]
'''