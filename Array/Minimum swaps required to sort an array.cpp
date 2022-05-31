#include<bits/stdc++.h>
using namespace std;
 
int helpfunc(int arr[], int n)
{
    pair<int,int>arrp[n];
    for(int i=0; i<n;i++)
    {
        arrp[i].first=arr[i];
        arrp[i].second=i;
    }
    
    sort(arrp,arrp+n);
    
    vector<bool>vis(n,false);
    
    int a=0;
    for(int i=0; i<n; i++)
    {
        if(vis[i]||arrp[i].second==i)
         continue;
         
         int cs=0;
         int j=i;
         while(!vis[j])
         {
             vis[j]=1;
             j=arrp[j].second;
             cs++;
         }
         
         if(cs>0)
         {
             a+=(cs-1);
             
         }
    }
    return a;
}
 
int main () {
   
   int arr[1000];
   int n;
   cin>>n;
   for(int k=0; k<n; k++)
   {
       cin>>arr[k];
   }
   
   cout<<helpfunc(arr,n);
   return 0;
 
   
}