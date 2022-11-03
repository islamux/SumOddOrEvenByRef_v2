#include <ostream>
using namespace std;

int CheckAndSumOdd(int numbersFromArrayToCheck[20], int &lengthOfArrInMain){

    int sumOdd = 0;
    for (int i = 0; i < lengthOfArrInMain; i++)
    {
        if (numbersFromArrayToCheck[i] % 2 != 0)
        {
            cout << numbersFromArrayToCheck[i] <<" is Odd !\n";
             sumOdd = sumOdd + numbersFromArrayToCheck[i];

        }else
            cout << numbersFromArrayToCheck[i] << " is not Odd  \n";    
        
    }
    return sumOdd;
}