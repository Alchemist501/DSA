class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit = 0
        minPrice = prices[0]
        for i in prices:
            if minPrice > i:
                minPrice = i
            elif i-minPrice > profit:
                profit = i - minPrice
        return profit