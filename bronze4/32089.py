while True:
    s = input()
    if s == "0":
        break

    num = int(s)
    arr = list(map(int, input().split()))

    max_sum = max(sum(arr[i:i+3]) for i in range(num - 2))
    print(max_sum)
