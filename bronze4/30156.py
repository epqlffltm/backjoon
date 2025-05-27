n = int(input())

for _ in range(n):
    a, b = 0, 0
    pump = input().strip()
    for ch in pump:
        if ch == 'a':
            a += 1
        elif ch == 'b':
            b += 1
    print(min(a, b))
