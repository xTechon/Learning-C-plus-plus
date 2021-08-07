#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void bubbleSort(int *bub, int size);
void swap (int *arr, int i);

main () {
    int i, j;
    int bubble [10];
    double k;
    //set random seed
    srand ((unsigned) time(NULL));


    for (i = 0; i < 10; i++){ //test a for loop, works exactly the same as C
        //random number
        j = (rand() % 100) + 1; //want numbers 1-100
        bubble[i] = j;
        cout << "Random Number: " << j << endl;
    }

    bubbleSort(bubble, 10); //sort array
    cout << "Random Numbers sorted is:" << endl;

    for (i = 0; i < 10; i++){ //display results
        cout << bubble[i] << endl;
    }
    
    k = sqrt((double)j); //test a math op
    cout << "sqrt of " << j << " is " << k << endl;

    

    return 0;
}

void bubbleSort(int *bub, int size){
    int j = 0;
    bool swapped = true;

    while(swapped){ //if no swaps occured, then sorting is done
        swapped = false;
        for (int i = 0; i < (size-j); i++){
            if ((bub[i] > bub[i+1]) && (i != 9)) {
                swap(bub,i);
                swapped = true;
            }
        }
        j++; //decrease amount of array traversed per travel
    }
    return;
}

void swap (int *arr, int i){
    int temp = arr[i];
    arr[i] = arr[i+1];
    arr[i+1] = temp;
    return;
}