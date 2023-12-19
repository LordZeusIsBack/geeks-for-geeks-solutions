// User function Template for C++
class Solution{
    public:
    int findWinner(int n, int A[]){
        
        int xx=0;
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[A[i]]++;
            xx^=A[i];
        }
        
        if(!xx)
        return 1;
        
        bool flag=0;
        int even=0;
        for(auto it:mp)
        {
            if(it.second%2==0)
            even++;
        }
        
        if(even&1)
        flag=(!flag);
        
        if(flag)
        {
            if(mp.size()&1)
            return 1;
            else
            return 2;
        }
        else
        {
            if(mp.size()&1)
            return 2;
            else
            return 1;
        }
        
        return 0;
    }
};
