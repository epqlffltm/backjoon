def phonenumber_input():
    phone = input("전화번호를 입력하세요: ")  # 예: 01234567890
    check_phone_str(phone)

def check_phone_str(phone):
    if phone.startswith("010") and len(phone)==11:
        print("입력된 번호:", phone)
    else:
        print("잘못된 번호입니다")

if __name__ == "__main__":
    phonenumber_input()
