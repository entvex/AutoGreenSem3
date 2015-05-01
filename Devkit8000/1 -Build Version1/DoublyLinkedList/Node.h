#include <iostream>

using namespace std;

template <class A_Type>
class Node
{
 public:
 Node(A_Type i = NULL, Node* n = NULL, Node* p = NULL) : info(i), next(n), prev(p)
  {

  }

  A_Type info;
  Node* next;
  Node* prev;
};
