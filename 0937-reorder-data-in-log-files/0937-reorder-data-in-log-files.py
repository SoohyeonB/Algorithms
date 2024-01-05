class Solution:
    def reorderLogFiles(self, logs: List[str]) -> List[str]:
        # "dig1 8 1 5 1"
        digs = []
        strings = []

        for log in logs:
            if log.split()[1].isdigit():
                digs.append(log)
            else:
                strings.append(log)
        print(strings)
        strings.sort(key=lambda element: (element.split()[1:], element.split()[0]))
        print(strings)
        return strings + digs
                
                