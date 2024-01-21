# 345. Reverse Vowels of a String

# https://leetcode.com/problems/reverse-vowels-of-a-string/description/?envType=study-plan-v2&envId=leetcode-75

class Solution(object):
    def reverseVowels(self, s):


        x= []

        for i in s :
            if  i  in ['a','e','i','o','u','A','E','I','O','U']:
                x.append(i)

        ans =""

        for i in s:
            if  i  in ['a','e','i','o','u','A','E','I','O','U']:
                p = x[-1]
                x.pop()
                ans+=p
                #print(p)
            else:
                ans+=i


        return ans
