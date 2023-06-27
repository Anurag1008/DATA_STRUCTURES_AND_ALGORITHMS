#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int hash[MAX] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
void insert(int key)
{
    //not allow negative value.
    if (key < 0)
    {
        printf("\n this value is not able to insert \n");
        return;
    }
    int count = 0;
    int pos = key % 10;
    if (hash[pos] == -1)
        hash[pos] = key;
    else
    {
        while (hash[pos] != -1 && pos < MAX)
        {
            pos++;
            pos %= MAX;
            count++;
            if (count == MAX - 1)
            {
                printf("\n hashtable is completely filled \n");
                break;
            }
        }
        if (pos == MAX)
            printf("\nhash table is filled\n");
        else
            hash[pos] = key;
    }
}

void display()
{
    for (int i = 0; i < MAX; i++)
    {
        printf("%d ", hash[i]);
    }
}

void search(int element)
{
    int check = 0;
    for (int i = 0; i < MAX; i++)
    {
        if (hash[i] == element)
        {
            printf("\nthe value of element is at position : \n");
            printf("%d ", i);
            check = 1;
            break;
        }
    }
    if (check == 0)
        printf("\nthe value is absent in hashtable\n");
}

int main()
{
    insert(88);
    insert(99);
    insert(-90);
    insert(10);
    insert(59);
    insert(49);
    insert(39);
    insert(19);
    display();
    return 0;
}
