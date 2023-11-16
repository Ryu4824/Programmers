def solution(elements):
    num_list = []
    for i in range(len(elements)):
        end = 1+i
        for start in range(len(elements)):
            if len(elements)<end:
                end -= len(elements)
                num = sum(elements[start:])+sum(elements[0:end])
            elif start > end:
                num = sum(elements[start:])+sum(elements[0:end])
            else:
                num = sum(elements[start:end])
            num_list.append(num)
            end+=1
    return len(set(num_list[1:]))