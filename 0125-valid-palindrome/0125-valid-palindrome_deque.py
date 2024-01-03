"""
Deque을 사용하여 시간복잡도를 O(n)으로 줄임

"""
class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        strs: Deque = collections.deque()
        for c in s:
            if c.isalnum():
                strs.append(c.lower())
        while len(strs) > 1:
            if strs.popleft() != strs.pop():
                return False
        return True
