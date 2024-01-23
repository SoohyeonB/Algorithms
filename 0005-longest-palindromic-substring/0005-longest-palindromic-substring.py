class Solution:
    def longestPalindrome(self, s: str) -> str:
        # 팰린드롬 확장 (left, right으로 인덱스 하나씩 늘림)
        def expand(left: int, right: int) -> str:
            while left>=0 and right<len(s) and s[left]==s[right]:
                left -= 1
                right += 1
            print(s[left+1:right])
            return s[left+1:right]
        result = ''
        # reversed copy s[::-1]    
        if len(s)<2 or s==s[::-1]:
            return s
        # 슬라이딩 윈도우 우측으로 이동
        for i in range(len(s)-1):
            result = max(result, expand(i, i+1), expand(i, i+2), key=len)
        return result