/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
/*Step 1:Complete the linearSearch() function.  
  Step 2:Do a binary search on the second array which is already sorted.
*/

#include <iostream>

using namespace std;

int linearSearch(int [], int, int);
int main()
{
    int const SIZE = 10;
    int target = -1;
    int arr[SIZE] = {5, 6, 2, 9, 0, 1, 8, 7, 3, 4};
    target = 7;
    int pos = linearSearch(arr, SIZE, target);
    
    if ( pos >= 0) 
        cout << "The target " << target << " is at position " << pos << "." << endl;
    else
        cout << "The target " << target << " cannot be found. " << endl;

/*target = 17;
pos = linearSearch(arr, SIZE, target);
if ( pos >= 0)
    cout << "The target " << target << " is at position " << pos << "." << endl;
else
    cout << "The target " << target << " cannot be found. " << endl;
    int arr2[SIZE] = {10, 11, 12, 29, 30, 41, 78, 97, 103, 154};
    target = 97;   
    pos = binarySearch(arr2, SIZE, target);
    
if ( pos >= 0)
    cout << "The target " << target << " is at position " << pos << "." << endl;
else
    cout << "The target " << target << " cannot be found. " << endl;

target = 27;
pos = binarySearch(arr2, SIZE, target);
if ( pos >= 0)
    cout << "The target " << target << " is at position " << pos << "." << endl;
else
    cout << "The target " << target << " cannot be found. " << endl;
*/
return 0;
    
}

int linearSearch(int arr[], int SIZE, int target){int index = -1;

/// TO DO: Add your code here/// If target is found, return the index, otherwise, return -1;

return index;
}
