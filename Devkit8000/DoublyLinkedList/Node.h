#pragma once

using namespace std;
template <class A_Type>
class Node
{
public:
        Node(A_Type i = nullptr, Node* n = nullptr,Node* p = nullptr) : info(i), next(n), prev(p)
        {

        }

        A_Type info;
        Node* next;
        Node* prev;
};
