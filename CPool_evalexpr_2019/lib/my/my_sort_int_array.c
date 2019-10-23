/*
** EPITECH PROJECT, 2019
** CPool_Day04_2019
** File description:
** my_sort_int_array
*/

void my_sort_int_array(int *array, int size)
{
    int temp = 0;
    int i = 0;

    while (i <= (size - 1)){
        if (array[i] > array[i + 1]){
            temp = array[i + 1];
            array[i + 1] = array[i];
            array[i] = temp;
            i = 0;
        }
        i++;
    }
}