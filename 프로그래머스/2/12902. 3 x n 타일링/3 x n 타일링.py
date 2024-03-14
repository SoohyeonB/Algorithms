def solution(n):
    # 1. 점화식 : f(n) = f(n-2)*3 + 2*f(n-4) + 2f(n-6) + ... + 2f(2) + 2
    # 2. 해당 식의 값을 각각 배열의 n번째에 저장
    f = [0 for _ in range(n+1)]
    
    print(f)
    
    
    # 1. n이 홀수이면 f(n) = 0
    if n%2 == 1: return 0
    f[2] = 3
    if n > 2:
        for i in range(4, n+2, 2):
            f[i] = f[i-2]*3 +2
            # print(f"{f[i]} = {f[i-2]}*3 + 2")
            # i-4부터 0까지의 값을 2배 시키고 더하기
            for j in range(i-4, -1, -2):
                f[i] += f[j] * 2
            f[i] %=  1000000007
    
    return f[n]