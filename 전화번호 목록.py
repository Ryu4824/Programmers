#효율성 테스트 실패
#방법 1) 2중 for문을 제거해보자
    #2중 for문을 안하고 전체 경우의 수를 확인하는 방법은?
#방법 2) startswith함수에 뭔가가 있나?
    #만약 startswith함수에 문제라면 뭐를 사용해야하지?
def solution(phone_book):
    answer = False
    for i in phone_book:
        for j in range(len(phone_book)):
            if i != phone_book[j]:
                answer = i.startswith(phone_book[j])
                if answer == True:
                    return False
    return True