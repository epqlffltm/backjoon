n = int(input())
cost_m = 0  # Mile 요금
cost_y = 0  # Juice 요금


p=list(map(int,input().split()))# 통화 시간
for i in range(len(p)):
  cost_m += (p // 30 + 1) * 10   # 30초마다 10원
  cost_y += (p // 60 + 1) * 15   # 60초마다 15원

if cost_m < cost_y:
    print(f"M {cost_m}")
elif cost_y < cost_m:
    print(f"Y {cost_y}")
else:
    print(f"M Y {cost_m}")
