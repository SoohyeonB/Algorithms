class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.lower()
        cleaned_string =""

        for c in s:
            # Check if the character is alphanumeric or a space
            if c.isalnum():
                # If it is, add it to the cleaned string
                cleaned_string += c
        print(cleaned_string)

        #check whether it's palindrome
        # Reverse the string using slicing
        reversed_string = cleaned_string[::-1]
        return reversed_string == cleaned_string