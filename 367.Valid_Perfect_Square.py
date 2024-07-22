#!/usr/bin/python3

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        
        n = 1
        if num == 1:
            return True

        while n <= num / 2:
            if n * n == num:
                return True
            n += 1
        return False

if __name__ == "__main__":
    solution = Solution()
    print(solution.isPerfectSquare(3))