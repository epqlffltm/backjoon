while True:
    n, m = map(int, input().split())
    
    if n == 0 and m == 0:
        break
    elif n + m == 13:
        print("Never speak again.")
    elif n > m:
        print("To the convention.")
    elif n < m:
        print("Left beehind.")
    else:
        print("Undecided.")
