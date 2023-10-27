def solution(numbers, target):
    answer = 0
    if not numbers:
        return 1 if target == 0 else 0

    num = numbers[0]
    nums = numbers[1:]
    answer += solution(nums, target - num)
    answer += solution(nums, target + num)
    return answer