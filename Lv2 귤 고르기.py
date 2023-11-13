from collections import Counter

def solution(k, tangerine):
    answer = 0
    counter = Counter(tangerine)
    duplicates_list = sorted([x for x in tangerine if counter[x] > 1], key=lambda x: (counter[x], x))
    return len(set(duplicates_list[:k]))