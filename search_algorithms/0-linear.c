/*  
 * linear_search - Function that performs a linear search on an array 
 * @array: Pointer to the array to be searched 
 * @size: Size of the array 
 * @value: Value to be searched for 
 * 
 * Return: Index of the found element, or -1 if not found 
 */
int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {	
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }

    return (-1);
}