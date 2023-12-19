#User function Template for python3

class Solution:
    def findWinner(self, n, A):
        xx = 0
        mp = {}
        
        for i in range(n):
            mp[A[i]] = mp.get(A[i], 0) + 1
            xx ^= A[i]
        
        if not xx:
            return 1
        
        flag = False
        even = 0
        for _, freq in mp.items():
            if freq % 2 == 0:
                even += 1
        
        if even % 2 == 1:
            flag = not flag
        
        if flag:
            if len(mp) % 2 == 1:
                return 1
            else:
                return 2
        else:
            if len(mp) % 2 == 1:
                return 2
            else:
                return 1
