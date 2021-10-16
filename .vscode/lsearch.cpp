/* Given an integer and an array of integers, write a function named linear_search that
returns the number of comparisons performed doing a linear search. The function should 
take 3 arguments: 

The number searched for
The array of integers
The number of elements in the array

If the number searched for is not in the array then the function should return the 
maximum number of searches to determine the element is not in the array.

 */

#include <iostream>

using namespace std;

int linear_search(int search_value, int lst[], int elements);

int main() {
    int lst[] = {19, 2, 20, 1, 0, 18};
    cout << linear_search(20, lst, 6);
    return 0;
}

int linear_search(int search_value, int lst[], int elements) {
    int i = 0;
    while (i < elements) {
        if (lst[i] == search_value)
            return i+1;
        i++;        
    }
}