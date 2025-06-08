def is_harshad(x):
    s = sum(map(int, str(x)))
    return x % s == 0

def count_harshad(N):
    cnt = 0
    for i in range(1, N + 1):
        if is_harshad(i):
            cnt += 1
    return cnt

if __name__ == "__main__":
    N = int(input())
    print(count_harshad(N))
#78점 받음...