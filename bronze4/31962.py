n, x = map(int, input().split())  # 역순으로 수정
max_s = -1  # 초기값은 -1로 설정

for _ in range(n):
    s, t = map(int, input().split())
    if s + t <= x:
        max_s = max(max_s, s)

print(max_s)