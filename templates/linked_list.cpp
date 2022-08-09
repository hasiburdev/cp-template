class Node {
public:
  string val;
  Node *next;

  Node(string initialValue) {
    val = initialValue;
    next = nullptr;
  }
};

// Iterative Method
void printList(Node *head) {
  Node *current = head;
  while (current != nullptr) {
    cout << current->val << endl;
    current = current->next;
  }
}

// Recursive Method
void printListRecursive(Node *head) {
  if (head == nullptr)
    return;
  cout << head->val << endl;
  printListRecursive(head->next);
}
