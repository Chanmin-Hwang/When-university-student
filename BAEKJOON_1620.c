#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100000

typedef struct _element {
	char string[21];
	int order;
}element;

typedef struct _Node* NodePointer;
typedef struct _Node {
	element data;
	NodePointer next;
}Node;
NodePointer hashtable[SIZE];

unsigned int StringToInt(char* string) {
	int sum = 0;
	while (*string) {
		sum = sum * 65599 + *string;
		string++;
	}
	return sum;
}

int hashing(unsigned int key) {
	return key % SIZE;
}

int main(void) 
{
	int N, M; 
	scanf("%d %d", &N, &M);

	element* arr = malloc(sizeof(element) * N);
	for (int i = 0; i < N; i++) 
	{
		scanf("%s", arr[i].string); arr[i].order = i + 1;
		NodePointer newNode = malloc(sizeof(Node));
		newNode->data = arr[i];
		newNode->next = NULL;

		int index = hashing(StringToInt(newNode->data.string));
		if (hashtable[index] == NULL) 
			hashtable[index] = newNode;
		else 
		{
			newNode->next = hashtable[index];
			hashtable[index] = newNode;
		}
	}

	for (int i = 0; i < M; i++) 
	{
		char find[21]; scanf("%s", find);
		if (find[0] < 60) 
		{
			int num = atoi(find);
			printf("%s\n", arr[num - 1].string);
		}
		else 
		{
			NodePointer cur = hashtable[hashing(StringToInt(find))];
			while (cur) 
			{
				if (strcmp(cur->data.string, find) == 0) 
					printf("%d\n", cur->data.order);
				cur = cur->next;
			}
		}		
	}
	return 0;
}
