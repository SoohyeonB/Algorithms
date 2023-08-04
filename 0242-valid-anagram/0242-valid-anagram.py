class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        alphabet = [0] * 26
        for c in s:
            alphabet[ord(c) - ord('a')]+=1
        for c in t:
            alphabet[ord(c) - ord('a')]-=1
            
        return all(count == 0 for count in alphabet)
            