def solution(polynomial):
    x, num = 0, 0
    polynomial = polynomial.split(" + ")
    for i in polynomial:
        if 'x' not in i:
            num += int(i)
        else:
            if len(i) == 1:
                x += 1
            else:
                x += int(i[:-1])
    if x == 0 and num == 0:
        return
    if x == 0:
        return str(num)
    if x == 1:
        x = ""
    if num == 0:
        return str(x) + "x"
    return str(x) + "x + " + str(num)