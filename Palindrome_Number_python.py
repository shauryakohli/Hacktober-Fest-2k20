#https://leetcode.com/problems/palindrome-number/
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        num = bool
        numstr = str(x)
        if numstr.startswith('-'):
            # numrev=numstr[::-1]
            num = False
        elif numstr.endswith('0') and len(numstr) != 1:
            # numrev=numstr[::-1]
            num = False
        elif len(numstr) == 1:
            num = True
        elif numstr == '0' and len(numstr) == 1:
            num = True
        else:
            numrev = numstr[::-1]
            #print(numrev)
            if numrev == numstr:
                num = True
            else:
                num=False
        return num