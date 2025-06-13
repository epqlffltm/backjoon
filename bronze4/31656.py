s = input()
result = [s[0]]
for c in s[1:]:
    if c != result[-1]:
        result.append(c)
print(''.join(result))
