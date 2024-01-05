class Solution:
    def mostCommonWord(self, paragraph: str, banned: List[str]) -> str:
        words = re.findall(r'\w+', paragraph.lower())
        censored = []
        for word in words:
            if word not in banned:
                censored.append(word)
        counts = Counter(censored)

        return counts.most_common(1)[0][0]