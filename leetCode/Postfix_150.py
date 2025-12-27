class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for x in tokens:
            if x not in ["*","/","+","-"]:
                stack.append(int(x))
            else:
                b = stack.pop()
                a = stack.pop()
                print(a,b)
                if x == "*":
                    stack.append(a*b)
                elif x == "/":
                    stack.append(int(a/b))
                elif x == "+":
                    stack.append(a+b)
                else:
                    stack.append(a-b)
        return stack[0]
