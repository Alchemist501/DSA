def depth_first_search(graph, start):
  stack = [start]
  while len(stack) > 0:
    curr = stack.pop()
    for n in graph[curr]:
      stack.append(n)
    print(curr, end = "\t")
  print()
    
def depth_first_search_recursive(graph, start):
  print(start,end = "\t")
  for n in graph[start]:
    depth_first_search_recursive(graph,n)

def breadth_first_search(graph, start):
  queue = [start]
  while queue:
    curr = queue.pop(0)
    print(curr, end = "\t")
    for n in graph[curr]:
      queue.append(n)
  print()

graph = {
  "a": ["b", "c"],
  "b": ["d"],
  "c": ["e"],
  "d": ["f"],
  "e": [],
  "f": []
}
print("DFS Iterative : ",end="")
depth_first_search(graph,"a")
print("----------------------------------------------")
print("DFS Recursive : ", end= "")
depth_first_search_recursive(graph,"a")
print("\n---------------------------------------------")
print("BFS Iterative : ",end="")
breadth_first_search(graph,"a")
print("----------------------------------------------")
