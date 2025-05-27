import math

T = int(input())  # 테스트 케이스 개수
for _ in range(T):
    N = int(input())  # 각 테스트 케이스의 N 입력
    fact = math.factorial(N)  # N! 계산
    print(fact % 10)  # 마지막 자릿수 출력
