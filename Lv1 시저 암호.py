def solution(s, n):
    answer = ''
    for word in s.split(" "):
        for i in range(len(word)):
            num = ord(word[i])+n
            if num>ord('z'):
                num -= 26
            elif num>ord('Z') and word[i].isupper():
                num -= 26
            answer += chr(num)
        answer += ' '
    return answer[:-1]