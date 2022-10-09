class Solution:
    def isPalindrome(self, s: str) -> bool:
        temp = re.sub("[^A-Za-z0-9]+", "", s).lower()
        return temp == temp[::-1]
