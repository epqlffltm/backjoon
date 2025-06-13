def time():
    S = int(input())
    Ma, F, Mb = map(int, input().split())
    print("high speed rail" if S <= Ma + F + Mb or S <= 240 else "flight")

if __name__ == "__main__":
    time()
