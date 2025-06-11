import random

def guess_the_number():
    answer = random.randint(1, 100)
    attempts = 0

    print("숫자 맞추기 게임에 오신 걸 환영합니다!")
    print("1부터 100 사이의 숫자 중 하나를 맞춰보세요.")

    while True:
        try:
            guess = int(input("당신의 추측: "))
            attempts += 1

            if guess < 1 or guess > 100:
                print("1부터 100 사이의 숫자를 입력하세요.")
            elif guess < answer:
                print("너무 작아요!")
            elif guess > answer:
                print("너무 커요!")
            else:
                print(f"정답입니다! {attempts}번 만에 맞췃습니다.")
                break
        except ValueError:
            print("숫자만 입력해주세요!")

# 게임 시작
guess_the_number()
