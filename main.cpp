#include <iostream>
using namespace std;

// Reading 
#include "read_number_from_array_void.h"

// Printing
//#include "print_shapes.h"  //Decoration   => included in No 1 called function (ReadNumber)
#include "print_number_int_with_double_msg.h"
#include "check_and_sum_even.h"
#include "check_and_sum_odd.h"

/*      ToDo
 1-  Read => 8 space integres from user.
 2-  sum odd places.
 3-  sum even places.*/

int main(){
    // Variables for reading Numbers of Array (by default by ref)
    int numberArrMain[20];
    int lengthMain;  // readed by ref in functions (read, check_sum, check_odd,) 

    // Decoration
    PrintShapes(30, '+');

     //Reading 8 places
    ReadNumbersFromArrayVoid("Enter length of Arry: ", "Enter numbers of array : ", numberArrMain, lengthMain);
    PrintShapes(30, '+');
    
    // SumOdd
    int sum_even = CheckAndSumEven(numberArrMain,lengthMain);
    PrintShapes(30, '+');
    
    // SummEven
    int sum_odd  = CheckAndSumOdd(numberArrMain, lengthMain);
    PrintShapes(30, '+');
    
    // Printing 
    PrintNumberIntWithDoubleMsg("Sum of Even = ", sum_even, ".");
    PrintShapes(30, '+'); // Decoration
    PrintNumberIntWithDoubleMsg("Sum of Odd Numbers = ", sum_odd, ".");

    return 0;
}
