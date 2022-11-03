#include <iostream>
using namespace std; 

#include "print_shapes.h"

void ReadNumbersFromArrayVoid(string textEnterLength, string txtEnterNumber, int numberArr[2], int& length){
 
        // step 1 : enter a length
        cout << textEnterLength << "\n";
        cin >> length;
        PrintShapes(30, '+');

        //  step 2: eneter a numbers (in array)
        for (int i = 0; i < length; i++)
        {
            cout << txtEnterNumber << "[" << i+1 << "] ";
            cin >> numberArr[i];
        }
    }

