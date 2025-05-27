a=input()
b=input() 
print(*sorted([abs(ord(a[0])-ord(b[0])),abs(int(a[1]) - int(b[1]))]))