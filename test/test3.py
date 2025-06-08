import random

def scan():
    return random.randint(1, 100)

def add_to_set(ary, n):
    for i in range(len(ary)):
        if ary[i] == n:  # 중복값 검사
            return 0, ary
    ary.append(n)
    return 1, ary

def output(ary):
    print("리스트 값:", ary)

if __name__ == "__main__":
    ary = []
    while len(ary) < 10:
        num = scan()
        _, ary = add_to_set(ary, num)
    output(ary)
