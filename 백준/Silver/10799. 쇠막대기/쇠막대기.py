def solution():
    sticks = input()
    st = [] # 여는 괄호의 인덱스가 들어감
    result = 0
    
    for i in range(len(sticks)):
        if sticks[i] == '(':
            st.append(i) # 여는 괄호의 인덱스를 스택에 추가
        else:
            if st[-1] == i - 1: # () 인 경우우
                st.pop()
                result += len(st)
            else:
                st.pop()
                result += 1
    print(result)
    
    
solution()
