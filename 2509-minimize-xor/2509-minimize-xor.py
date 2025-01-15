class Solution(object):
    def set_bit(self, num):
        count=0
        while num>0:
            count += num&1
            num>>=1
        return count
    
    def minimizeXor(self, num1, num2):
        """
        :type num1: int
        :type num2: int
        :rtype: int
        """
        ans=0
        n2_bits = self.set_bit(num2)
        for i in range(31, -1, -1):
            if n2_bits==0:  break
            if num1 & (1 << i):
                ans |= (1 << i)
                n2_bits-=1
        
        for j in range(32):
            if n2_bits==0: break
            if not(ans & (1 << j)):
                ans |= (1 << j)
                n2_bits-=1
        
        return ans

        