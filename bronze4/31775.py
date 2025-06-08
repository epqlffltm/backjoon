def gp():
    s1 = input().split()
    s2 = input().split()
    s3 = input().split()

    target = ['l', 'k', 'p']

    if s1 == target or s2 == target or s3 == target:
        print('GLOBAL')
    else:
        print('PONIX')

if __name__ == '__main__':
    gp()
