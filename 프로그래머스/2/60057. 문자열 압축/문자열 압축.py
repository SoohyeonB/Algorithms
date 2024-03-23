import collections
import sys


def solution(s):
    answer = 0
    """
    1. 하나씩 자른 경우
    2. 두개씩 자른 경우
    3. 세개씩 자른 경우 ... etc
    
    time complexity = n (maybe)
    space = 
    """
    # 1. 1부터 n까지 슬라이싱하여 중복되는 것들을 압축
    minLen = len(s)

    # 1개씩 슬라이싱 : 1 ~ n//2까지 슬라이싱
    for padding in range(1, len(s)//2+1): # padding : 1 ~ len(s)//2+1
        print(f"padding: {padding}")
        sub_compressed = ""
        subsum = 1
        prev = ''
        for i in range(0, len(s), padding):
            cur = s[i:i+padding]
            # 연속으로 존재하면 개수 ++
            if prev == cur:
                subsum += 1
            # 연속이 끊기면 이전것까지만 저장
            if prev!=cur and prev != '':
                if subsum == 1: sub_compressed += prev
                else: sub_compressed += (str(subsum) + prev)
                subsum = 1
                prev = cur
            if prev == '':
                prev = cur
            # 만약 padding이 남아있는 element 개수보다 적을때 (나머지 부분이 다 못읽히는 경우)
            if padding >= len(s)-i:
                if subsum == 1: sub_compressed += prev
                else: sub_compressed += (str(subsum) + prev)
                    
                

        # print(sub_compressed)
        minLen = min(minLen, len(sub_compressed))
        # print("최소길이: ", minLen)
        
    return minLen