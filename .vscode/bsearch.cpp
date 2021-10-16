/* Given an integer and a sorted array of integers, write a function named 
binary_search that prints the number of comparisons performed doing a binary search. 
The function should take 3 arguments: 

The number searched for
The array of integers
The number of elements in the array

If the number searched for is not in the array then the function should return the
maximum number of searches to determine the element is not in the array. */

#include <iostream> 

using namespace std;

int binary_search(int search_value, int lst[], int elements);

int main() {
    int lst[] = {0, 1, 2, 18, 19, 20, 25};
    cout << binary_search(19, lst, 7);
    return 0;
}

int binary_search(int search_value, int lst[], int elements) {
    int start = 0, end = elements-1;
    int i = 0;
    bool found = false;
    while (found==false && (start <= end)) {
        int mid = (start+end)/2;
        i++;
        if (lst[mid] == search_value) {
            found = true;
            return i;
        }
        else if (lst[mid] < search_value) {
                start = mid + 1;
            }
            else end = mid - 1;
        }        
    if (found == false)
        return i;
}

