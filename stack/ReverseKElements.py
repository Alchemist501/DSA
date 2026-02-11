Q = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]
k = 5
stack = []
stack2 = []
for i in range(k):
	stack.append(Q.pop(0))
while not len(stack) == 0:
	Q.append(stack.pop())
for i in range(len(Q) - k ):
	Q.append(Q.pop(0))

print(Q)  # Output: [50, 60, 70, 80, 90, 100, 5, 4, 3, 2, 1]