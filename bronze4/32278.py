def nth():
    n = int(input())

    if -2**15 <= n <= 2**15 - 1:
        print('short')
    elif -2**31 <= n <= 2**31 - 1:
        print('int')
    elif -2**63 <= n <= 2**63 - 1:
        print('long long')
    else:
        print('None')

if __name__ == "__main__":
    nth()
