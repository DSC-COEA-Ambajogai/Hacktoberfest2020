nums=[1,2]
def rob(self, nums):
        if not nums: return 0
        if len(nums) <= 2: return max(nums)
        return max(self.houses(nums[1:]), self.houses(nums[:-1]))        
        
def houses(self, nums):        
        money = [0]*len(nums)
        money[0] = nums[0]
        money[1] = max(nums[0], nums[1])
        for i in range(2, len(nums)):
            money[i] = max(money[i-1], money[i-2] + nums[i])
        return money[-1]
