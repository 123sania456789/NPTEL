def checkSubsequenceSum(nums, k):
    n = len(nums)
    
    def dfsss(index, current_sum, memo):
        if current_sum == k:
            return True
        if index == n or current_sum > k:
            return False
        if (index, current_sum) in memo:
            return memo[(index, current_sum)]
        
        memo[(index, current_sum)] = dfsss(index + 1, current_sum + nums[index], memo) or dfsss(index + 1, current_sum, memo)
        return memo[(index, current_sum)]
    
    return dfsss(0, 0, {})
