def select_sort(score, select):
    score.sort()
    for i in range(len(score)):
        if select == score[i]:
            return select
    else:
        return 0

score = [67, 93, 100, 60, 57, 86, 19, 60, 79, 84]

select = int(input("점수를 입력하세요: "))

n = select_sort(score, select)

if n != 0:
    print(f"{n}이 존재합니다.")
else:
    print("Not found")
