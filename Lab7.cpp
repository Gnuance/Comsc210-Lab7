#include <iostream>
#include <iomanip>
using namespace std;

void Reverse(string *&, int); // Reverse strings in array

int main()
{
    // Initialize variables
    int ARRAY_SIZE = 5;
    string *sArrayPtr = new string[ARRAY_SIZE]; // Allocate array of 5 ints

    Reverse(sArrayPtr, ARRAY_SIZE);                                                    // Call function to populate array
    
    cout << "Sum = " << fixed << setprecision(2) << SumArray(dArrayPtr, ARRAY_SIZE) << endl; // Output sum formatted

    // Deallocate heap elements and nullify pointers
    delete[] dArrayPtr;
    dArrayPtr = nullptr;

    return 0;
}

// Populate array with user input
void Reverse(double *& arrPtr, int arrSize)
{
    // For array size, loop with cin to get double values
    cout << "Data entry to populate array:" << endl;
    for (size_t i = 0; i < arrSize; i++)
    {
        cout << "\t> Please enter a double for index #" << i << ": ";
        cin >> *(arrPtr + i);
    }
    cout << "Data entry complete." << endl;
}