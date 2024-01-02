 # 455. Assign Cookies

# https://leetcode.com/problems/assign-cookies/description/?envType=daily-question&envId=2024-01-01

class Solution(object):
    def findContentChildren(self, g, s):
        g.sort()
        g.reverse()
        s.sort()
        s.reverse()
        print(g)
        print(s)

        i=0
        j=0
        count =0

        while(i<len(g) and  j<len(s)):
            if g[i] <= s[j]:
                i+=1
                j+=1
                count +=1
            else:
                i+=1

        return count
        