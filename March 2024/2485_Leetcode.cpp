// 2485. Find the Pivot Integer
// https://leetcode.com/problems/find-the-pivot-integer/?envType=daily-question&envId=2024-03-13
class Solution {
public:
    int pivotInteger(int n) {
        int f=-1,fsum=0;
        int l =-1,lsum =0;
        int x= -1;
        fsum = n*(n+1)/2;

        f=n;

        while(f>=1)
        {            
            lsum = lsum + (f);
            
            if(fsum==lsum)
                {
                    //cout<<"***"<<fsum<<" "<<lsum<<endl;
                    return f;
                }

            fsum = fsum - f;
            
            //cout<<f<<" : "<<fsum<< " "<<lsum <<endl;
            f--;
        }

        




        return x;
    }
};
