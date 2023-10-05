"""
가장 큰 수
1. '30', '3'의 경우 정렬하면 '3', '30'인데 '30', '3'이 되어야함 그래서
```
if str_numbers[j+1].startswith(str_numbers[j]):
    if str_numbers[j] > str_numbers[j+1][-1]:
```
조건 추가함
2. '3','3'의 경우 중복되면 ['3', '30', '31', '3', '34', '5', '9']이런 식으로 정렬이되어서
set함수를 사용하여 `len(str_numbers)-len(set(str_numbers))`의 값으로 2중 for문 생성
3. 위의 경우 불필요한 횟수가 더 추가되어 시간초과됨
예를들어 ['3', '3', '30', '31', '34', '5', '9', '9', '9']이면 3번만 반복하면 되는데 5번이 반복이됨 그래서
```
from collections import Counter

arr = ['3', '3', '30', '31', '34', '5', '9', '9', '9']

count_dict = Counter(arr)
most_common = count_dict.most_common(1)
num,count=most_common[0]
count
```
Counter를 사용하여 가장 많은 숫자 한가지의 횟수만 반복하도록함.
4. 시간초과는 해결했으나 실패라고 뜸
아마도 `if str_numbers[j] > str_numbers[j+1][-1]:`조건문이 원인이라고 생각되어 수정함
5. 원인을 아직 찾지 못함 반례가 뭐가 있을까..
"""
'''
정답 코드
numbers = list(map(str, numbers))
numbers.sort(key=lambda x: x*3, reverse=True)
answer = ''.join(numbers)
answer = str(int("".join(numbers)))
'''
def solution(numbers):
    str_numbers = list(map(str,numbers))
    str_numbers.sort()
    while True:
        swapped = False
        for j in range(len(str_numbers)-1):
            if str_numbers[j] == str_numbers[j+1]:
                continue
            if str_numbers[j+1].startswith(str_numbers[j]):
                if str_numbers[j][0] <= str_numbers[j][len(str_numbers[j])-1]:
                    if str_numbers[j][0] >= str_numbers[j+1][len(str_numbers[j])]:
                        str_numbers[j+1], str_numbers[j] = str_numbers[j], str_numbers[j+1]
                        swapped = True
                else:
                    if str_numbers[j][0] > str_numbers[j+1][len(str_numbers[j])]:
                        str_numbers[j+1], str_numbers[j] = str_numbers[j], str_numbers[j+1]
                        swapped = True
            print(str_numbers)
        if not swapped:
            break
    str_numbers.reverse()
    answer = str(int("".join(str_numbers)))
    return answer