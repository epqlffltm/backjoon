n=int(input())
staision=[0,1000]

for i in range(n):
  x,y=map(int,input().split())
  if staision[1]<y:
    staision.append(x,y)
    
print(staision)