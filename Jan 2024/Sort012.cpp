// Sort 0 1 2

// https://www.codingninjas.com/studio/problems/631055?utm_source=youtube&utm_medium=affiliate&utm_campaign=parikh_youtube&leftPanelTabValue=PROBLEM



#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //cout<<arr[2]<<endl;
   int hash[3]={0,0,0};
   for(int i=0;i<n;i++)
   {
      if(arr[i]==0)
         hash[0]++;
      else if(arr[i]==1)
         hash[1]++;
      else 
         hash[2]++;
   }
   //cout<<"^^^\n";
   //for(int i=0;i<3;i++)
     // cout<<i<<"- "<<hash[i]<<"\n";

   int ind =0;
   for(int j=0;j<3;j++){
   for(int i=0;i<hash[j];i++)
   {
      arr[ind]=j;
      ind++;
   }
   }
   
   //cout<<endl;
}