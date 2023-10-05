#효율성 테스트 실패
#방법 1) 2중 for문을 제거해보자
    #2중 for문을 안하고 전체 경우의 수를 확인하는 방법은?
#방법 2) startswith함수에 뭔가가 있나?
    #만약 startswith함수에 문제라면 뭐를 사용해야하지?
def solution(phone_book):
    phone_book.sort()
    for i in range(len(phone_book)-1):
        if phone_book[i+1].startswith(phone_book[i]):
            return False
    return True