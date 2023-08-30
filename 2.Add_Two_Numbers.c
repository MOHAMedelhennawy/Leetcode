/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

/**
 * create_node_at_end - to insert node at the end of list
 * @head: pointer to head pointer
 * @sum: sum of two nodes to store in third list
 * Return: address of first node in head
 */
 struct ListNode* Creat_node_at_end(struct ListNode **head, int sum){
	struct ListNode *new, *ptr;

	ptr = *head;
	new = malloc(sizeof(struct ListNode));
	if (!new)
		return (NULL);

	new->val = sum;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (*head);
}
/**
 * addTwoNumbers - two sum two nodes
 * @l1: first linked list
 * @l2: second linked list
 * Return: head of third list
 */
ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
	struct ListNode *head1 = l1, *head2 = l2, *head3;
	head3 = NULL;
	int sum, carry = 0;
	while (l1 && l2)
	{
		sum = (l1->val + l2->val) + carry;
		carry = sum / 10;
		Creat_node_at_end(&head3, sum % 10);
		l1 = l1->next;
		l2 = l2->next;
	}
	while (l1)
	{
		sum = l1->val + carry;
		carry = sum / 10;
		Creat_node_at_end(&head3, sum % 10);
		l1 = l1->next;
	}
	while (l2)
	{
		sum = l2->val + carry;
		carry = sum / 10;
		Creat_node_at_end(&head3, sum % 10);
		l2 = l2->next;
	}
	if (carry)
		Creat_node_at_end(&head3, carry);
    
return (head3);
}
