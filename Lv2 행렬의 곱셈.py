import numpy as np
def solution(arr1, arr2):
    arr3=np.array(arr1)
    arr4=np.array(arr2)
    answer=np.dot(arr3,arr4)
    return answer.tolist()