#include <iostream>
using namespace std;
#include "stack_ll.h"

//void print(node* root) {
//	while (root != NULL) {
//		printf("root data: %d\n", root->data);
//		root = root->next;
//	 }
//}

int pop(node* root) {
	if (root == NULL) {
		printf("Stack is empty");
		return -1;
	}
	node* iter = root;
	if (root->next == NULL) {
		int rval = root->data;
		free(root);
		return rval;
	}
	while (root->next ->next != NULL)
	{
		iter = iter->next;
	}
	node* temp;
	temp = (node*)malloc(sizeof(node));
	temp = iter->next;
	int rval = temp->data;
	iter->next = NULL;
	free(temp);
	return rval;

}

node* push(node* root, int a) {
	if (root == NULL) {
		root = (node*)malloc(sizeof(node));
		root->data = a;
		root->next = NULL;
		return root;
	}
	node* iter = root;
	while (root -> next != NULL)
	{
		iter = iter->next;
	}
	node* temp;
	temp = (node*)malloc(sizeof(node));
	temp->next = NULL;
	iter->next = temp;
	temp->data = a;
	return root;
}


