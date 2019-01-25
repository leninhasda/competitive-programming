class Solution:
    def numJewelsInStones(self, J, S):
        """
        :type J: str
        :type S: str
        :rtype: int
        """
        d = dict()
        for ele in J:
            d[ele] = True
        count = 0
        for ele in S:
            if ele in d:
                count+=1
        return count
          
        
