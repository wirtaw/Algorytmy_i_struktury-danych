#include <stdio.h>
#include "singlyLinkedList.h"
#include "naiveSearch.h" 
#include "eratosthenes.h"

int main()
{
	char txt[] = "TEST TEXT TEST TESTING TESTOWANIE TEXTING TEST TESTINGTEXTINGTEXT";
	char pat[] = "TEXT";
	
	search(pat, txt);

  SieveOfEratosthenes(30);

  struct Node *head = NULL;

  insert(&head, 3.9);
  insert(&head, 2.3);
  insert(&head, 3.0);
  insert(&head, 4.9);
  insert(&head, 6.0);

  printf("Original list: ");
  printList(head);

  printf(isEmpty(head) != 1 ? "\nThe list is not empty.\n"
                            : "\n The list is empty\n");

  printf(find(head, 3.0) != 0 ? "\nFound\n" : "\nNot Found\n");

  struct Node *pointer = locate(head, 2.3);

  printf(locate(head, 3.0) != NULL ? "\nValue of the pointer is: %f\n"
                                   : "\nNot found\n",
         retrieve(head, locate(head, 2.3)));

  deleteNode(&head, pointer);
  printf("\nList after deletion: ");
  printList(head);

  printf("\nMax value: %f\n", findMax(head));
  printf("Min value: %f\n", findMin(head));
  printf("List size: %d\n", size(head));

  makeNull(&head);
  printf("\nList after makeNull:\n");
  printList(head);

  printf(isEmpty(head) != 1 ? "\nThe list is not empty.\n"
                            : "\nThe list is empty\n");
  
	return 0;
}
