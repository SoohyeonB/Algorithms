class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
				# 문자열만 찾아서 새로운 리스트에 넣기
        words = re.findall(r'\w+', paragraph.lower())
        censored = []
        for word in words:
            if word not in banned:
                censored.append(word)
        counts = Counter(censored)
        
        print(counts.most_common())
        print(counts.most_common(1))
        print(counts.most_common(1)[0])
        print(counts.most_common(1)[0][0])

        return counts.most_common(1)[0][0]
