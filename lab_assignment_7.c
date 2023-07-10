/*frantzy j.
lab_7*/

#include <stdio.h>

int main() {
    
    int array[] = {97, 16, 45, 63, 13, 22, 7, 58, 72}; //provided indexes
    int n = sizeof(array) / sizeof(int); // Determine the array's number of elements
    int i;
    int j;
    int temp;
    int swap;
    int zeros = 0;

    // for loop to loop through our array
    for (i = 0; i < n + 1 - 1; i++) { // for loop indexes the swaps till 3 0s are met 
        swap = 0;
        // inner for loop
        for (j = 0; j < n - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                
                swap++;  // increment the swaps using "++"
            }
        }
        // print out the swap
        printf("Swap #");
        printf("%d: %d\n", i+1, swap);
        
        
        if (swap == 0){
            zeros++;

            if (zeros > 4){
                break;
            }
        } 
    }

    return 0;
}
