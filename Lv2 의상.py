def solution(clothes):
    answer = 0
    clothes_dict = {}
    for item in clothes:
        category = item[1] 
        name = item[0]     
        if category not in clothes_dict:
            clothes_dict[category] = [] 
        clothes_dict[category].append(name) 
    if len(clothes_dict.keys()) > 0:
        answer=1
        for i in clothes_dict.keys():
            answer = (len(clothes_dict[i])+1) * answer
        answer -= 1
    return answer