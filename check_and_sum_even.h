#include <ostream>
using namespace std;

int CheckAndSumEven(int numbersFromArrayToCheck[20], int& lengthOfArrInMain){

    int sumEven = 0;
    for (int i = 0; i < lengthOfArrInMain; i++)
    {
        if (numbersFromArrayToCheck[i] % 2 == 0)
        {
            cout << numbersFromArrayToCheck[i] <<" is Even!\n";
            sumEven = sumEven + numbersFromArrayToCheck[i] ;
        }else
            cout << numbersFromArrayToCheck[i] <<" is not even! \n";  
        
    }
    
    return sumEven;
}