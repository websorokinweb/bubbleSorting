#include <iostream>
using namespace std;

void bubbleSort(int arrayToSort [], int arraySize){
    for (int i = 1; i < arraySize; ++i){
        for (int g = 1; g < arraySize; ++g){
            if(arrayToSort[g] < arrayToSort[g - 1]){
                int temp = arrayToSort[g];
                arrayToSort[g] = arrayToSort[g - 1];
                arrayToSort[g - 1] = temp;
            }
        }
    }
}

void displayArray(int arrayToSort [], int arraySize){
    for (int i = 0; i < arraySize; ++i){
        cout << arrayToSort[i] << " ";
    }
}

int main() {
    int arrayToSort [] = {3,34,6,91,36,12, 78, 2};
    int arraySize = sizeof(arrayToSort) / sizeof(arrayToSort[0]);

    cout << "Input\n";
    displayArray(arrayToSort, arraySize);
    bubbleSort(arrayToSort, arraySize);
    cout << "\nOutput\n";
    displayArray(arrayToSort, arraySize);

    return 0;
}
