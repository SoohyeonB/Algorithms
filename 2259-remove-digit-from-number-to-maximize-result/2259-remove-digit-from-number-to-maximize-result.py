class Solution:
    def removeDigit(self, number: str, digit: str) -> str:
        maximum = -1 
        for i in range(len(number)):
            if number[i] == digit:
                result = number[:i] + number[i+1:]
                maximum = max(int(result), maximum)

        return(str(maximum))