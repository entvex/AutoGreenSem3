/*
 * DoublyLinkedListTests.hpp
 *
 *  Created on: Apr 13, 2015
 *      Author: stud
 */

#ifndef DOUBLYLINKEDLISTTESTS_HPP_
#define DOUBLYLINKEDLISTTESTS_HPP_
#include <iostream>
using namespace std;

void testHeadInsert();
void testTailInsert();
void testHeadDelete();
void testTailDelete();
void testFind();
void testFindandDelete();


void testTailInsert()
{
	DoublyLinkedList<int> list;

	list.tailInsert(100);
	list.tailInsert(200);
	list.tailInsert(300);

	cout << "---- Forward ----" << endl;
    list.forwardTraversing();
    cout << "---- Backwards ----" << endl;
	list.backTraversing();

}

void testHeadInsert()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	//cout << "Next info: Value: " << list.headPtr->info << endl;
	//cout << "Next info: Value: " << list.tailPtr->info << endl;

	//cout << "-- Insert 100 and 200 and 300 then display them ---" << endl;
    //cout << "Head info: Value: " << list.headPtr->info << " Next: " <<  list.headPtr->next << " Prev: " << list.headPtr->prev << endl;
    //cout << "Next info: Value: " << list.headPtr->next->info << " Next: " <<  list.headPtr->next->next << " Prev: " << list.headPtr->next->prev << endl;
    //cout << "Next info: Value: " << list.headPtr->next->next->info << " Next: " <<  list.headPtr->next->next->next << " Prev: " << list.headPtr->next->next->prev << endl;

	cout << "---- Forward ----" << endl;
    list.forwardTraversing();
    cout << "---- Backwards ----" << endl;
	list.backTraversing();

}

void testHeadDelete()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	//cout << "Next info: Value: " << list.headPtr->info << endl;
	//cout << "Next info: Value: " << list.tailPtr->info << endl;

	//cout << "-- Insert 100 and 200 and 300 then display them ---" << endl;
    //cout << "Head info: Value: " << list.headPtr->info << " Next: " <<  list.headPtr->next << " Prev: " << list.headPtr->prev << endl;
    //cout << "Next info: Value: " << list.headPtr->next->info << " Next: " <<  list.headPtr->next->next << " Prev: " << list.headPtr->next->prev << endl;
    //cout << "Next info: Value: " << list.headPtr->next->next->info << " Next: " <<  list.headPtr->next->next->next << " Prev: " << list.headPtr->next->next->prev << endl;

	cout << "---- Forward ----" << endl;
    list.forwardTraversing();
    cout << "Head delete" << endl;
    list.headDelete();
    cout << "---- Forward after delete----" << endl;
    list.forwardTraversing();
}

void testTailDelete()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	cout << "---- Forward ----" << endl;
    list.forwardTraversing();
    cout << "Tail delete" << endl;
    list.tailDelete();
    cout << "---- Forward after delete----" << endl;
    list.forwardTraversing();
}

void testFind()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	cout << "200 found at: " << list.Find(200) << endl;
}

void testFindandDelete()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	list.deleteAt(list.Find(200));

	list.forwardTraversing();

}

void testPeakHeadAndTail()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	int head;
	int tail;
	list.PeekHead(head);
	list.PeekTail(tail);

	cout << "Peak Head: " << head << endl;
    cout << "Peak Tail: " << tail << endl;

}

void testGetItemsInList()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	cout << "The linked list have: " << list.GetItemsInList() << " items" << endl;

}

void testttGetall()
{
	DoublyLinkedList<int> list;

	list.headInsert(100);
	list.headInsert(200);
	list.headInsert(300);

	//int const &array = list.GetAll();

	cout << "---- Forward ----" << endl;
    list.forwardTraversing();
    cout << "---- Backwards ----" << endl;
	list.backTraversing();

}

#endif /* DOUBLYLINKEDLISTTESTS_HPP_ */
