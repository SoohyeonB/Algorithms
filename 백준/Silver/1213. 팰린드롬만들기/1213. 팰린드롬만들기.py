from collections import Counter

def makePalindrome(count_name: dict):
    # dict의 value값을 모두 절반으로 나눔
    result = ""
    for c in count_name:
        result += c * (count_name[c] // 2)
    return result

def solution(name: list):
    count_name = Counter(sorted(name))
    all_even = all(v % 2 ==0 for v in count_name.values())
    
    # 홀수 값 개수세기
    odd_values = 0
    odd_str = ""
    for v in count_name:
        if count_name[v] % 2 != 0:
            odd_values += 1
            odd_str = v
            
    if len(name) % 2 == 0 and all_even: 
        # 팰린드롬 만들기
        result = makePalindrome(count_name)
        print(result + result[::-1])
        
    # 홀수인데, 나머지 개수가 모두 짝수이거나 홀수개수인 원소
    elif len(name) % 2 != 0 and odd_values == 1:
        # 팰린드롬 만들기
        result = makePalindrome(count_name)
        print(result + odd_str + result[::-1])
    else:
        print("I'm Sorry Hansoo")
        
        
    

if __name__ == "__main__":
    # 1. 이름 입력받기
    name = [e for e in input()]
    solution(name)
    
