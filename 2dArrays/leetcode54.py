class Solution:
    def spiralOrder(self, matrix: List[List[int]]) -> List[int]:
        L = []
        m = len(matrix)
        n = len(matrix[0])
        m1 = 0
        m2 = m - 1
        n1 = 0
        n2 = n - 1
        while len(L) != m * n:
            if n1 <= n2:
                for i in range(n1, n2 + 1):
                    L.append(matrix[m1][i])
            else:
                break
            m1 += 1
            if m1 <= m2:
                for i in range(m1, m2 + 1):
                    L.append(matrix[i][n2])
                    print(matrix[i][n2])
            else:
                break
            n2-=1
            if n2 >= n1:
                for i in range(n2,n1-1,-1):
                    L.append(matrix[m2][i])
            else:
                break
            m2 -= 1
            if m2 >= m1:
                for i in range(m2,m1-1,-1):
                    L.append(matrix[i][n1])
            else:
                break
            n1 += 1
        return L
