# 2125. Number of Laser Beams in a Bank

# https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/?envType=daily-question&envId=2024-01-03

class Solution:
    def numberOfBeams(self, bank: List[str]) -> int:
        RowCameraCount = []
        for i in bank:
            RowCameraCount.append(i.count('1'))
        ans=0

        for i in range(len(RowCameraCount)):
            j=i+1
            while( j< len(RowCameraCount) and RowCameraCount[j]== 0  ):
                j+=1
            if j< len(RowCameraCount) :
                print(RowCameraCount[i],'*',RowCameraCount[j],'=',RowCameraCount[i]*RowCameraCount[j])
                ans += RowCameraCount[i]*RowCameraCount[j]
        
        return ans