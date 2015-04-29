/*
 * DataLog_list.hpp
 *
 *  Created on: Apr 13, 2015
 *      Author: stud
 */

#ifndef DATALOG_LIST_HPP_
#define DATALOG_LIST_HPP_

#include "SensorData.hpp"


//============================================================================
// Name        : DataLog_list.cpp
// Author      : Dje
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#pragma once

#include "Node.h"

class DataLog_list {
protected:
	Node<SensorData> *headPtr = nullptr;
	Node<SensorData> *tailPtr = nullptr;
	int itemsInList = 0;

public:

	DataLog_list() {}

	virtual ~DataLog_list() {
		Node<SensorData> *cond = tailPtr;
		while (cond != nullptr) {
			Node<SensorData> *cond2 = cond;
			cond = cond->prev;
			delete cond2;
		}
		headPtr = NULL;
		tailPtr = NULL;
	}

	// Precondition: headPtr points to the head of a list
	// Postcondition: Info has been inserted at the head of the list, and headPtr is updated
	virtual void headInsert(SensorData info) {
		Node<SensorData> *NewNode = new Node<SensorData>(info);
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
	virtual void tailInsert(SensorData info) {
		Node<SensorData> *NewNode = new Node<SensorData>(info);
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
			Node<SensorData>* cond = headPtr;    //Tager head og sætterden til cond.
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
			Node<SensorData>* cond = tailPtr;    //Tager tail og sætterden til cond.
			tailPtr = tailPtr->prev; //Flytter tail engang frem og gemmer.
			tailPtr->next = nullptr; // Gør så tail's ikke peger frem, da det er den sidste.
			delete cond;             //sletter cond.
		}
		--this->itemsInList;
	}

	virtual void forwardTraversing() {
		for (Node<SensorData>* cursor = headPtr; cursor != nullptr; cursor = cursor->next)
		{
			cout << cursor->info.temp << endl;
		}
	}

	virtual void backTraversing() {
		for (Node<SensorData>* cursor = tailPtr; cursor != nullptr; cursor = cursor->prev)
		{
			cout << cursor->info.temp << endl;
		}
	}

//	virtual int Find(SensorData valueToFind) {
//		int place = 1;
//		for (Node<SensorData>* cursor = headPtr; cursor != nullptr;
//				cursor = cursor->next) {
//			if (cursor->info == valueToFind) {
//				return place;
//			}
//			++place;
//		}
//		return -1;
//	}

	virtual int PeekTail(SensorData &PeekTail )
	{
		if (tailPtr != nullptr) {
			PeekTail = tailPtr->info;
			return 1;
		}
		return -1;
	}

	virtual int PeekHead(SensorData &PeekHead )
	{
		if (headPtr != nullptr) {
			PeekHead = headPtr->info;
			return 1;
		}
		return -1;
	}

	virtual void deleteAt(int place) {
		Node<SensorData>* cursor = headPtr;

		for (int i = 1; i <= this->itemsInList; ++i) {

			if (i == place) {
				if (cursor == headPtr) {
					headDelete();
					return;
				} else if (cursor == tailPtr) {
					tailDelete();
					return;
				} else {

					Node<SensorData>* cond = cursor; //pointer til den cond node.
					Node<SensorData>* prevPtr = cursor->prev; //pointer til den lige før con node.

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

//	virtual void findAndDelete(SensorData valueToFind)
//	{
//		int found = Find(valueToFind);
//		if (found != -1) {
//			deleteAt(found);
//		}
//	}

	virtual int GetItemsInList()
	{
		return this->itemsInList;
	}
};

#endif /* DATALOG_LIST_HPP_ */
