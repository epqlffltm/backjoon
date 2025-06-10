def onion():
    ao = bo = 1
    n, a, b = map(int, input().split())
    for _ in range(n):
        ao += a
        bo += b
        if ao == bo:
            bo -= 1
        elif ao < bo:
            ao, bo = bo, ao
    print(ao, bo)

# 호출
if __name__ == "__main__":
  onion()
