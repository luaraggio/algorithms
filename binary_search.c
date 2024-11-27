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
        if (guess == item) return (middle);
        if (guess > item)
            high = middle - 1;
        else
            low = middle + 1;
    }
    return (-1);  // not found
}

int main(void)
{
    int list_len;
    int my_list[] = {1, 3, 5, 7, 9};
    int item_to_find;
    int result;

    list_len = sizeof(my_list) / sizeof(my_list[0]);
    printf("Enter the number you want to search for: ");
    scanf("%d", &item_to_find);
    result = binary_search(my_list, item_to_find, list_len);
    if (result != -1)
        printf("Number found at my_list[%d]\n", result);
    else
        printf("Number not found in the list.\n");
    return (0);
}
