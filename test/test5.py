import random

star=[]
percent=[]
shape=[]

for i in range(50):
  num=random.randint(1,3)
  if num==1:
    star.append("x")
  elif num==2:
    percent.append("x")
  else:
    shape.append("x")
    
print(star)
print(percent)
print(shape)