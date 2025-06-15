import math

def solve():
    # n, a, b를 입력받습니다.
    n, a, b = map(int, input().split())

    # 1. a와 b의 최소공배수(LCM)를 계산합니다.
    # LCM(a, b) = (a * b) / GCD(a, b)
    # math.gcd는 두 수의 최대공약수를 계산합니다.
    common_divisor = math.gcd(a, b)
    
    # // 연산자를 사용하여 정수 나눗셈을 합니다.
    # 'a * b'가 너무 커져 오버플로우가 발생할 가능성이 있다면 
    # (a // common_divisor) * b 처럼 계산하는 것이 안전하지만, 
    # 문제의 제약(n, a, b <= 10^6)에서는 직접 곱해도 괜찮습니다.
    lcm_ab = (a * b) // common_divisor

    # 2. 각 조건에 해당하는 총 개수를 계산합니다.

    # a의 배수 총 개수
    count_a_total = n // a

    # b의 배수 총 개수
    count_b_total = n // b

    # a와 b의 공배수 (FizzBuzz) 총 개수
    # 이는 LCM(a, b)의 배수 개수와 같습니다.
    count_fizzbuzz = n // lcm_ab

    # 3. 요구되는 세 가지 카운트를 계산합니다.

    # a로만 나누어 떨어지는 수의 개수 (a의 배수 중 FizzBuzz가 아닌 것)
    count_fizz_only = count_a_total - count_fizzbuzz

    # b로만 나누어 떨어지는 수의 개수 (b의 배수 중 FizzBuzz가 아닌 것)
    count_buzz_only = count_b_total - count_fizzbuzz

    # 4. 결과를 출력합니다.
    print(count_fizz_only, count_buzz_only, count_fizzbuzz)

# 함수를 호출하여 프로그램을 실행합니다.
solve()