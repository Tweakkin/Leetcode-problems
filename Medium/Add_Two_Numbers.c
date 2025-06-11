#include <stdio.h>
#include <stdlib.h>

/*struct ListNode {
    int val;
    struct ListNode *next;
 };*/
 
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2)
{
	struct ListNode *head = NULL;
	int carry = 0;

	while (l1 != NULL || l2 != NULL || carry != 0)
	{
		int sum = carry;

		if (l1 != NULL)
		{
			sum += l1->val;
			l1 = l1->next;
		}
		if (l2 != NULL)
		{
			sum += l2->val;
			l2 = l2->next;
		}
		carry = sum / 10;
		if (sum > 9)
			sum = sum%10;
		
		add_node_back2(&head, sum);
	}
	return head;
}

void add_node_back2(struct ListNode **start, int content)
{
  struct ListNode *new_profile = malloc(sizeof(struct ListNode));
  struct ListNode *temp = *start;
  new_profile->val = content;
  new_profile->next = NULL;
  if (*start == NULL)
    *start = new_profile;
  else
  {
    while (temp->next != NULL)
    {
      temp = temp->next;
    }
    temp->next = new_profile;
  }
} 
