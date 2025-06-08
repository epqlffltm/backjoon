count = int(input())

for _ in range(count):
    s = input()
    m = int(s) + 1
    if len(s) >= 2:
        divisor = int(s[-2])
    else:
        print("Bye")
        continue

    if divisor == 0:
        print("Bye")
        continue

    if m % divisor == 0:
        print("Good")
    else:
        print("Bye")
