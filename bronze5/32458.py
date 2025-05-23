n = input()
try:
    n = float(n)       # 소수를 먼저 실수로 변환
    print(int(n))      # int()로 소수점 아래 버림
except ValueError:
    print("잘못된 입력입니다.")
