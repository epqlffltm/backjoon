def sol(s):
    start = 1
    i = 0
    while i < len(s):
        num_str = str(start)
        if s[i:i+len(num_str)] != num_str:
            return -1
        i += len(num_str)
        start += 1
    return start - 1


if __name__ == '__main__':
    s = input()
    print(sol(s))
