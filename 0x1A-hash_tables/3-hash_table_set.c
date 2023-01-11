#include "hash_tables.h"


int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	if (value == NULL || *key == "\0" || key == NULL || ht == NULL)
		return (0);
	
	hash_node_t* node = malloc(sizeof(hash_node_t));
	node->key = strdup(key);
	node->value = strdup(value);
	node->next = NULL;

	unsigned long int index = hash_djb2(node->key);

	hash_node_t* cur_item = ht->array[index];

	if (cur_item == NULL)
	{
		cur_item = node;
		return (1);
	}
	else if (strcmp(cur_item->key, key) == 0)
	{
		strcpy(cur_item->value, value);
		return (1);
	}
	else
	{
		if (cur_item->next == NULL)
			cur_item->next = node;

		else
		{
			hash_node_t *head;
			head = cur_item;

			while(head->next != NULL)
			{
				head = head->next;
			}

			head->next = node;
		}
	}
}
