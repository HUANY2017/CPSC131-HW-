#include <iostream>
#include "vector131.h"
#include <string>

using namespace std;

vector131::vector131()
{
	head = nullptr;
	tail = nullptr;
}


//Create "push_back" to inset new node at the end of the list
void vector131::push_back(int value) {
	Node* newNode;

	newNode = new Node;  //Creates new node
	newNode->data = value; //Stores value
	newNode->next = nullptr;
	newNode->prev = nullptr;


	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		tail->next = newNode; //Insert new node at the end of the list
		newNode->prev = tail;
		tail = newNode;
	}
}


//Create "push_front" to inset new node at the top of the list
void vector131::push_front(int value) {
	Node* newNode;

	newNode = new Node;  //Creates new node
	newNode->data = value; //Stores value
	newNode->next = nullptr;
	newNode->prev = nullptr;


	if (head == nullptr)
	{
		head = newNode;
		tail = newNode;
	}
	else
	{
		head->prev = newNode; //Insert new node at the top of the list
		newNode->next = head;
		head = newNode;
	}
}

    
//print out the list
void vector131::print() const{
    Node* current;

    current = head;

	while (current != nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}


void vector131::resize(){
	Node* current;
	current = head;
	if(current != nullptr){
		delete current;
	}
	head = nullptr;
	tail = nullptr;
}

vector131::~vector131(){
	resize();
}