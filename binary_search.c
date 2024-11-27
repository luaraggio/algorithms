#include <stdio.h>

int binary_search(int *list, int item, int list_len)
{
    int high;
    int low;
    int middle;
    int guess;

    low = 0;
    high = list_len - 1;
    while (low <= high)
    {
        middle = (low + high) / 2;
        guess = list[middle];
        if (guess == item)
            return (middle);
        if (guess > item)
            high = middle - 1;
        else
            low = middle + 1;
    }
    return (-1); //not found
}

int main(void)
{
    int list_len;
    int my_list[] = {1, 3, 5, 7, 9};

    list_len = sizeof(my_list) / sizeof(my_list[0]);
    if (binary_search(my_list, 3, list_len) != -1)
        printf("my_list[%d]\n", binary_search(my_list, 3, list_len));
    else
        printf("Not found in my_list\n", binary_search(my_list, -1, list_len));
    if (binary_search(my_list, -1, list_len) != -1)
        printf("my_list[%d]\n", binary_search(my_list, -1, list_len));
    else
        printf("Not found in my_list\n", binary_search(my_list, -1, list_len));
    return (0);
}
