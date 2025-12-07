#include <iostream>
#include <queue>
#include <stack>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;
void DepthFirstSearch(unordered_map<string, vector<string>>& graph,
                      string start) {
  stack<string> toVisit;
  toVisit.push(start);
  while (!toVisit.empty()) {
    string curr = toVisit.top();
    cout << curr << " ";
    toVisit.pop();
    for (auto ele : graph[curr]) {
      toVisit.push(ele);
    }
  }
  cout << endl;
}
void DepthFirstSearchRecursive(unordered_map<string, vector<string>>& graph,
                               string start) {
  cout << start << " ";
  for (auto ele : graph[start]) {
    DepthFirstSearchRecursive(graph, ele);
  }
}
void breadthFirstSearch(unordered_map<string, vector<string>>& graph,
                        string start) {
  queue<string> toVisit;
  toVisit.push(start);
  while (!toVisit.empty()) {
    string curr = toVisit.front();
    cout << curr << " ";
    toVisit.pop();
    for (auto el : graph[curr]) {
      toVisit.push(el);
    }
  }
  cout << endl;
}
int main() {
  unordered_map<string, vector<string>> graph{{"a", {"b", "c"}}, {"b", {"d"}},
                                              {"c", {"e"}},      {"d", {"f"}},
                                              {"e", {}},         {"f", {}}};
  cout << "Breadth First Search: ";
  breadthFirstSearch(graph, "a");
  cout << "Depth First Search (Iterative): ";
  DepthFirstSearch(graph, "a");
  cout << "Depth First Search (Recursive): ";
  DepthFirstSearchRecursive(graph, "a");
  return 0;
}