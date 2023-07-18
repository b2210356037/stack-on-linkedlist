#pragma once
#include <iostream>
#ifndef stack_ll
#define stack_ll
using namespace std;

typedef struct n 
{
	int data;
	n* next;
}node;
int pop(node*);
node* push(node*, int);
#endif