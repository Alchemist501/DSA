class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        dic = {}
        stack = []
        for x in nums2:
            while stack and x > stack[-1]:
                dic[stack.pop()] = x
            stack.append(x)
        return [dic.get(x, -1) for x in nums1]
