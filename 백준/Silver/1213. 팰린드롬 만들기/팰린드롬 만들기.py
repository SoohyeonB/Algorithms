# 팰린드롬 만들기
import sys
import collections
input = sys.stdin.readline

def makePalindrome(countName):
    palindrome = ""
    for c in countName:
        # 개수의 절반만큼을 string에 붙임
        # 문자열 += 'A' * ('A'의 개수의 절반)
        palindrome += c *(countName[c] // 2)
    return palindrome
    
    
def solution():
    name = [char for char in input() if char.isalpha()]
    countName = collections.Counter(sorted(name))
        
    # 홀수 값 개수 세기
    odds = 0 # 훌수개 있는 알파벳의 개수
    odd = '' # 홀수개 있는 알파벳
    for i in countName:
        if countName[i] % 2 == 1: # 개수가 홀수이면 
            odds += 1
            odd = i
    
    if len(name)%2 == 0 and odds == 0:
        part = makePalindrome(countName)
        return part + part[::-1]
    elif len(name)%2 != 0 and odds == 1:
        part = makePalindrome(countName)
        return part + odd + part[::-1]
    else:
        return "I'm Sorry Hansoo"

print(solution())