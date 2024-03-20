class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        if(n<1)
            return tasks.size();

        int TimeIntervals=0;
        int unselected= tasks.size();
        vector<vector<int>> available( 26, {0,0});
      

        for(int i=0;i<tasks.size();i++)
            {
                //cout<<tasks[i] - 'A'<<" ";
                available[tasks[i] - 'A'][0] = tasks[i] - 'A';
                available[tasks[i] - 'A'][1]++;
            }
        
        //cout<<endl;
 
        //sort(available.begin(),available.end(),greater<int>());
        map<int,int> tab;
        while(unselected>0)
        {
            sort(available.begin(), available.end(), [](vector<int>& a, vector<int>& b) {return a[1] > b[1]; });
           /* cout<<"\n{ ";
            for(int i=0;i<26;i++)
                cout<<available[i][0] << ":"<<available[i][1]<<",";
            cout<<"}-";*/

            int flag = 0;
            for(int i=0;i<26;i++)
            {
                //cout<< i <<" ";
                if(available[i][1]==0)
                    break;
                if( (tab.find(available[i][0])==tab.end()) || (TimeIntervals - tab[available[i][0]]  > n-1) )
                    {
                        //cout<< available[i][0] <<" ";
                        TimeIntervals++;
                        tab[available[i][0]]=TimeIntervals;
                        available[i][1]--;
                        unselected --;
                        flag=1;
                        break;
                    }

                    
            }
        
            //cout<<endl;
            if(flag==0)
            {
                TimeIntervals++;
                //cout<< "idle";

            }

        }

        return TimeIntervals;


    }
};
