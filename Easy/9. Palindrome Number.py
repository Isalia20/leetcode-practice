class Solution:
    def isPalindrome(self, x: int) -> bool:
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

        y = 0
        while x > y:
            y = x % 10 + y * 10
            x = int(x / 10)

        return x == y or int(y / 10) == x
