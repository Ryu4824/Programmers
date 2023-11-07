def solution(s):
    answer = 0
    for _ in range(len(s)):
        stack = []
        count = 0
        for word in s:
            if word in "({[":
                stack.append(word)
            elif word in ")}]":
                if not stack:
                    break
                top = stack.pop()
                if (word == ")" and top != "(") or (word == "}" and top != "{") or (word == "]" and top != "["):
                    break
                count += 1
        if count*2 == len(s):
            answer += 1
        s = s[1:] + s[0]
    return answer