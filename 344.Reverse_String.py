class Solution:
    def reverseString(self, s: List[str]) -> None:
        """
        Do not return anything, modify s in-place instead.
        """
        start = 0
        end = len(s) - 1

        while (start < end):
            tmp = s[start]
            s[start] = s[end]
            s[end] = tmp
            
            start += 1
            end -= 1