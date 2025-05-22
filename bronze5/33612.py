month = 24288
N = int(input())

month += N * 7
year = month // 12
mon = (month % 12) + 1

print(year, mon)