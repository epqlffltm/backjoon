def check_all_same():
    n = int(input())
    s = input()
    print("Yes" if len(set(s)) == 1 else "No")

if __name__ == "__main__":
    check_all_same()
