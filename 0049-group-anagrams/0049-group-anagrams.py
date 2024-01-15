class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # make a new dictionary
        anagrams = collections.defaultdict(list)
        
        # append words in dictionary
        for word in strs:
            anagrams[''.join(sorted(word))].append(word)

        return list(anagrams.values())