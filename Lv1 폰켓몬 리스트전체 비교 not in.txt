def solution(nums):
    answer = 0
    ch = []
    count=int(len(nums)/2)
    for num in nums:
        if num not in ch:
            ch.append(num)
            answer+=1
            if(answer == count):
                return answer
    return answer