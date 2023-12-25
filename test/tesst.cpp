#include <bits/stdc++.h>
using namespace std;
class Node{
	public:
	int data;
	Node * next;
}
void push(Node ** head_ref ,int x){
	Node * new_node = new Node();
	new_node->data = x;
	new_node->next = *head_ref;
	*head_ref = new_node;
}
int main()
{
	Node * head = NULL;
	int x = 21;

	return 0;
}
