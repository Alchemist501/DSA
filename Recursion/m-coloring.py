class Solution:
    def graphColoring(self, v, edges, m):
        # Build adjacency list
        adj = {i: [] for i in range(v)}
        for u, vtx in edges:
            adj[u].append(vtx)
            adj[vtx].append(u)

        colors = [0] * v  # color of each vertex (0 = uncolored)

        def isSafe(vertex, color):
            for neighbor in adj[vertex]:
                if colors[neighbor] == color:
                    return False
            return True

        def solve(vertex):
            if vertex == v:
                return True  # all vertices colored

            for color in range(1, m + 1):
                if isSafe(vertex, color):
                    colors[vertex] = color
                    if solve(vertex + 1):
                        return True
                    colors[vertex] = 0  # backtrack

            return False

        return solve(0)
