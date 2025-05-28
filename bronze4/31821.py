n = int(input())  # 메뉴 수
a = []  # 메뉴 가격 리스트

for i in range(n):
    a.append(int(input()))  # 각 메뉴 가격 입력

m = int(input())  # 학생 수
price = 0  # 총 결제 금액

for i in range(m):
    c = int(input())  # 학생이 고른 메뉴 번호
    price += a[c - 1]  # 인덱스는 0부터 시작하므로 -1

print(price)
