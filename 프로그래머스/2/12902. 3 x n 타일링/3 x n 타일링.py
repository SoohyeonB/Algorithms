def solution(n):
    # 1. 점화식 : f(n) = f(n-2)*3 + 2*f(n-4) + 2f(n-6) + ... + 2f(2) + 2
    # 2. 해당 식의 값을 각각 배열의 n번째에 저장
    
    dp = [0 for _ in range(n+1)]
    
    # 홀수인 경우 x
    if n%2 == 1:
        return 0
    dp[4]= 11
    dp[2] =3
    if n > 4:
        for i in range(4, n+1, 2):
            dp[i] = dp[i-2] *3 + 2
            # 2씩 곱해서 더하는 나머지
            for j in range(i-4, -1, -2):
                dp[i] += dp[j] *2
                dp[i] %= 1000000007
    
    print(dp)    
    return dp[n]