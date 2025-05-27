n = int(input())
training_days = list(map(int, input().split()))

total_gain = 0

for i in range(n):
    x, y = map(int, input().split())
    if training_days[i] == 1 and y > x:
        total_gain += y - x

print(total_gain)
