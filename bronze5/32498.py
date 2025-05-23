n = int(input())
li = [int(input()) for _ in range(n)]

x = sum(1 for num in li if num % 2 == 1)
print(x)
