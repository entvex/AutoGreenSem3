//============================================================================
// Name        : DoublyLinkedList.cpp
// Author      : Dje
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#pragma once

#include "Node.h"

template<class A_Type>
class DoublyLinkedList {
protected:
	Node<A_Type> *headPtr = nullptr;
	Node<A_Type> *tailPtr = nullptr;
	int itemsInList = 0;

public:

	DoublyLinkedList() {

	}
	virtual ~DoublyLinkedList() {
		Node<A_Type> *cond = tailPtr;
		while (cond != nullptr) {
			Node<A_Type> *cond2 = cond;
			cond = cond->prev;
			delete cond2;
		}
		headPtr = NULL;
		tailPtr = NULL;
	}

	// Precondition: headPtr points to the head of a list
	// Postcondition: Info has been inserted at the head of the list, and headPtr is updated
	virtual void headInsert(A_Type info) {
		Node<A_Type> *NewNode = new Node<A_Type>(info);
		if (headPtr == nullptr) //Hvis ikke er nogen list.
		{
			headPtr = NewNode;
			tailPtr = NewNode;
		} else //Hvis der er en headptr altså der er noget.
		{
			headPtr->prev = NewNode;
			NewNode->next = headPtr;

			headPtr = NewNode;
		}
		++this->itemsInList;
	}

	// Precondition: tailPtr points to the end of a list
	// Postcondition: Info has been inserted at the end of the list, and tailPtr is updated
	virtual void tailInsert(A_Type info) {
		Node<A_Type> *NewNode = new Node<A_Type>(info);
		if (tailPtr == nullptr) {
			headPtr = NewNode;
			tailPtr = NewNode;
		} else {
			tailPtr->next = NewNode;
			NewNode->prev = tailPtr;
			tailPtr = NewNode;
		}
		++this->itemsInList;
	}

	virtual void headDelete() {
		if (headPtr == nullptr)
			return; //Tjekker om der er en liste.
		{
			Node<A_Type>* cond = headPtr;    //Tager head og sætterden til cond.
			headPtr = headPtr->next; //Flytter head engang tilbage og gemmer.
			headPtr->prev = nullptr;
			delete cond;             //sletter cond.
		}
		--this->itemsInList;
	}

	virtual void tailDelete() {
		if (tailPtr == nullptr)
			return; //Tjekker om der er en liste.
		{
			Node<A_Type>* cond = tailPtr;    //Tager tail og sætterden til cond.
			tailPtr = tailPtr->prev; //Flytter tail engang frem og gemmer.
			tailPtr->next = nullptr; // Gør så tail's ikke peger frem, da det er den sidste.
			delete cond;             //sletter cond.
		}
		--this->itemsInList;
	}

	virtual void forwardTraversing() {
		for (Node<A_Type>* cursor = headPtr; cursor != nullptr; cursor = cursor->next)
		{
			cout << cursor->info << endl;
		}
	}

	virtual void backTraversing() {
		for (Node<A_Type>* cursor = tailPtr; cursor != nullptr; cursor = cursor->prev)
		{
			cout << cursor->info << endl;
		}
	}

	virtual int Find(A_Type valueToFind) {
		int place = 1;
		for (Node<A_Type>* cursor = headPtr; cursor != nullptr;
				cursor = cursor->next) {
			if (cursor->info == valueToFind) {
				return place;
			}
			++place;
		}
		return -1;
	}

	//TODO skal skrives når der er tid...
//	virtual A_Type* GetAll( )
//	{
//		int i = 0;
//		A_Type list[itemsInList];
//		for (Node<A_Type>* cursor = headPtr; cursor != nullptr;cursor = cursor->next)
//		{
//			list[i] = cursor->info;
//		}
//
//		return list;
//	}

		virtual int PeekTail(A_Type &PeekTail )
		{
			if (tailPtr != nullptr) {
				PeekTail = tailPtr->info;
				return 1;
			}
			return -1;
		}

		virtual int PeekHead(A_Type &PeekHead )
		{
			if (headPtr != nullptr) {
				PeekHead = headPtr->info;
				return 1;
			}
			return -1;
		}

	virtual void deleteAt(int place) {
		Node<A_Type>* cursor = headPtr;

		for (int i = 1; i <= this->itemsInList; ++i) {

			if (i == place) {
				if (cursor == headPtr) {
					headDelete();
					return;
				} else if (cursor == tailPtr) {
					tailDelete();
					return;
				} else {

					Node<A_Type>* cond = cursor; //pointer til den cond node.
					Node<A_Type>* prevPtr = cursor->prev; //pointer til den lige før con node.

					prevPtr->next = cond->next; //prevPtr next sættes til conds next.
					cond->prev = prevPtr->prev; //prevPtr next sættes til conds next.
					delete cond; //Sletter cond.
					--this->itemsInList;
					return;
				}
			}

			cursor = cursor->next;
		}
	}

	virtual void findAndDelete(A_Type valueToFind)
	{
		int found = Find(valueToFind);
		if (found != -1) {
			deleteAt(found);
		}
	}

	virtual int GetItemsInList()
	{
		return this->itemsInList;
	}

};

