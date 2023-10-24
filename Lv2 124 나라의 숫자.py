def solution(n):
    nlist = []
    while n>0:
        num=int(n%3)
        if num == 0:
            nlist.append(4)
            n=int(n/3)-1
        else:
            nlist.append(num)
            n=int(n/3)
    nlist.reverse()
    return ''.join(map(str, nlist))