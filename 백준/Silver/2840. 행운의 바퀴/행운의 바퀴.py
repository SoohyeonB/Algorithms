# 행운의 바퀴 - 반례: 같은 글자가 두번이상 등장하지 않음
import sys
input = sys.stdin.readline

def solution():
    """
    - 바퀴를 k번 돌릴때, 화살표가 가리키는 글자가몇번 바뀌었는지를 나타내는 s
    """
    answer = ''
    # 1. input 받기 n: 바퀴 칸의 수, k: 바퀴를 돌리는 횟수
    n, k = map(int, input().split())
    
    # 2. 입력한 바퀴 수만큼 ? 채움
    wheel = ['?' for _ in range(n)]
        
    # 3. 회전수만큼 입력받기
    index = 0
    for _ in range(k):
        times, alphabet = input().split()
        index = (index + int(times)) % n
        
        if alphabet in wheel and wheel[index] != alphabet: return '!' # 만약 같은 알파벳이 이미 바퀴 안에 있는 경우
        # 비어있거나 같은 알파벳이 같은 자리에 있는 경우
        elif wheel[index] == '?' or wheel[index] == alphabet:
            wheel[index] = alphabet
        # 다른 알파벳이 해당 자리에 있는 경우
        else:
            return '!'
            
            
    # 4. 다 돌고 난 후 출력 순서 바꾸기
    # 특정 인덱스를 기준으로 리스트 바꾸기
    # reversed_list = my_list[index+1:][::-1] + my_list[:index+1]
    index = n - index - 1
    wheel = wheel[::-1]
    wheel = wheel[index:] + wheel[0:index]
    
    answer = ''.join(wheel)
    
    return answer
print(solution())