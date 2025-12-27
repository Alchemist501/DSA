stack = [1,2,3,4,5,6,7,8,9,10]
def sort_stack(stack):
    if not stack:
        return []
    temp_stack = []
    while stack:
        num = stack.pop()
        while temp_stack and num < temp_stack[-1]:
	        stack.append(temp_stack.pop())
        temp_stack.append(num)
        print(temp_stack)
    return temp_stack   
sorted_stack = sort_stack(stack)
print("Sorted Stack:", sorted_stack)