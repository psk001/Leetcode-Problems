class Solution:
    def isPalindrome(self, x: int) -> bool:
        k = str(x)
        return (k==k[::-1])        