class Solution:
    def canPartition(self, nums: List[int]) -> bool:
        sum = 0
        for i in nums:
            sum += i
        if(sum % 2 != 0):
            return False
        if sum/2 in nums:
            return True
        PossibleSums = {0}
        for num in nums:
            if(sum/2 in PossibleSums):
                return True
            newSums = {num}
            for n in PossibleSums:
                if n+num == sum/2:
                    return True
                newSums.add(n+num)
            PossibleSums.update(newSums)
        return False

        