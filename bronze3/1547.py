N = int(input())
ball = 1  # 처음 공 위치

for _ in range(N):
    a, b = map(int, input().split())
    if ball == a:
        ball = b
    elif ball == b:
        ball = a

print(ball)
