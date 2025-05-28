t, x = map(int, input().split())
n = int(input())
can_attend = 0

for _ in range(n):
    k = int(input())
    schedule = list(map(int, input().split()))
    if x in schedule:
        can_attend += 1

print("YES" if can_attend == n else "NO")
