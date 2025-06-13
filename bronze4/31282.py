n, m, k = map(int, input().split())
diff = k - m
print((n + diff - 1) // diff)  # 올림 나눗셈