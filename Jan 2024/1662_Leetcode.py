# 1662. Check If Two String Arrays are Equivalent

# https://leetcode.com/problems/check-if-two-string-arrays-are-equivalent/?envType=daily-question&envId=2024-01-27

class Solution(object):
    def arrayStringsAreEqual(self, word1, word2):
        return (''.join(word1)==''.join(word2))