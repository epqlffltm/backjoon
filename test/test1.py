score = [67, 93, 100, 60, 57, 86, 19, 60, 79, 83]

select = int(input("검색할 정수 입력: "))

score.sort()

for i in range(len(score)):
    if score[i] == select:
        print(f"{select}와 일치하는 {score[i]}가 존재합니다.")
        break
else:
    print("Not fount")
