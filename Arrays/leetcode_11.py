class Solution:
    def maxArea(self, height: List[int]) -> int:
        area, maxArea = 0, 0
        start, end = 0, len(height) - 1
        while start < end:
            if height[start] < height[end]:
                area = height[start] * (end - start)
                start += 1
            else:
                area = height[end] * (end - start)
                end -= 1
            maxArea = max(maxArea, area)
        return maxArea
