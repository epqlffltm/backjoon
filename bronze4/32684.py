cho = list(map(int, input().split()))  # 차, 포, 마, 상, 사, 졸
han = list(map(int, input().split()))  # 차, 포, 마, 상, 사, 병

score_table = [13, 7, 5, 3, 3, 2]

cho_score = sum(c * s for c, s in zip(cho, score_table))
han_score = sum(h * s for h, s in zip(han, score_table)) + 1.5  # 한나라는 +1.5

if cho_score > han_score:
    print("cocjr0208")
else:
    print("ekwoo")
