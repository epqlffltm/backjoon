def an():
  n = int(input())
  a = list(map(int, input().split()))
  check = [0] * 10
  
  for num in a:
    if 0 <= num <= 9:
      check[num] = 1
  
  for i in range(10):
    if check[i] == 1:
      print(i)
      
if __name__ == "__main__":
  an()