#include <iostream>
#include <queue>
#include <vector>
using namespace std;
static int idx = -1;
class Node {
 public:
  int data;
  Node* left;
  Node* right;
  Node(int val) {
    data = val;
    left = right = NULL;
  }
};
Node* buildTree(vector<int> Pre) {
  idx++;
  if (Pre[idx] == -1) return NULL;
  Node* root = new Node(Pre[idx]);
  root->left = buildTree(Pre);
  root->right = buildTree(Pre);
  return root;
}
void PreOrder(Node* root) {
  if (root == NULL) return;
  cout << root->data << " ";
  PreOrder(root->left);
  PreOrder(root->right);
}
void InOrder(Node* root) {
  if (root == NULL) return;
  InOrder(root->left);
  cout << root->data << " ";
  InOrder(root->right);
}
void PostOrder(Node* root) {
  if (root == NULL) return;
  PostOrder(root->left);
  PostOrder(root->right);
  cout << root->data << " ";
}
void LevelOrder(Node* root) {
  queue<Node*> q;
  q.push(root);
  while (q.size() > 0) {
    Node* curr = q.front();
    q.pop();
    cout << curr->data << " ";
    if (curr->left != NULL) q.push(curr->left);
    if (curr->right != NULL) q.push(curr->right);
  }
}
void LevelOrderLineByLine(Node* root) {
  queue<Node*> q;
  q.push(root);
  q.push(NULL);
  while (q.size() > 0) {
    Node* curr = q.front();
    q.pop();
    if (curr == NULL) {
      if (!q.empty()) {
        cout << endl;
        q.push(NULL);
        continue;
      } else
        break;
    }
    cout << curr->data << " ";
    if (curr->left != NULL) q.push(curr->left);
    if (curr->right != NULL) q.push(curr->right);
  }
}
int main() {
  vector<int> Pre = {1, 2, 4, -1, -1, 5, -1, -1, 3, -1, 6, -1, -1};
  Node* root = buildTree(Pre);
  cout << "PreOrder Traversal: ";
  PreOrder(root);
  cout << "\nInOrder Traversal: ";
  InOrder(root);
  cout << "\nPostOrder Traversal: ";
  PostOrder(root);
  cout << "\nLevelOrder Traversal: ";
  LevelOrder(root);
  cout << "\nLevelOrder Line By Line Traversal: ";
  LevelOrderLineByLine(root);
  return 0;
}