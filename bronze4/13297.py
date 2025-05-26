import sys
input=sys.stdin.readline
print(*[len(input().rstrip()) for _ in range(int(input()))], sep="\n")
