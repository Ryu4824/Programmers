def solution(s):
    answer = True
    pnum=0
    ynum=0
    for i in range(len(s)):
        if 'p' in s[i] or 'P' in s[i]:
            pnum += 1
        elif 'y'==s[i] or 'Y'==s[i]:
            ynum += 1
    if(pnum!=ynum):
        answer = False
    return answer