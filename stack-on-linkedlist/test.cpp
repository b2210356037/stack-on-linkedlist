#include <iostream>
using namespace std;
#include "stack_ll.h"

int main()
{
	node* s = NULL;
	s = push(s, 10);
	s = push(s, 20);
	//print(s);
	printf("popped : %d\n", pop(s));
	//print(s);
	printf("popped : %d\n", pop(s));
	printf("popped : %d\n", pop(s));
}