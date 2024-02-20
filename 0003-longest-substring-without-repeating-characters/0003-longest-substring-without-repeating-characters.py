class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # dictionary사용하여 key:value 한쌍만을 찾을 것
        dictionary = {}

        max_length = start = 0

        for index, char in enumerate(s):
            # 이미 등장한 문자면 start 위치 갱신
            if char in dictionary and start <= dictionary[char]:
                start = dictionary[char] + 1
            else:
                max_length = max(max_length, index - start + 1)
            # 현재 문자의 위치 삽입
            dictionary[char] = index
        return max_length