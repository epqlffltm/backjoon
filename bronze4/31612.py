N = int(input())
S = input().strip()

sum_ = 0
for c in S:
    if c == 'j' or c == 'i':
        sum_ += 2
    elif c == 'o':
        sum_ += 1

print(sum_)