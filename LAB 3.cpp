//Lab 3 - Functions
//Author: Zu Jia He Cen 
// Last modiefied: 3/6/23


#include <iostream>
using namespace std;
#include <chrono>
#include <thread>
using namespace chrono;
using namespace this_thread;
//=========================================================================

int* inputrequest(int var) //return type- address of integer array
{
    static int a[5]; //array declared as static
    for(int i = 0; i<var; i++)
    {
        a[i]=i;
        cout << "Enter the number for " << i + 1 << endl;
        cin>>a[i];//array initialisation
    }
    return a; //address of a returned
}

//=========================================================================

//This two functions replaces one 'for' loop for max&min
int FindMax(int a[], int n) // function to find largest element
{
    int max = a[0]; // assume that first element is max
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max) // if current element is greater than max
            max = a[i]; // assign that number as max now
    }
    return max; // returns the largest number to main function
}


int FindMin(int a[], int n) // function to find smallest element
{
    int min = a[0]; // assuming first element as minimum
    for (int i = 1; i < n; i++)
    {
        if (a[i] < min) // If current element is smaller than min
            min = a[i]; // assigning the smaller number to min
    }
    return min; // returns the smallest number to main function
}

//=========================================================================

// This function is to store the maximum and minimum number. It awaits the user's input to return back a value //
int outputrequest(int bignum, int smallnum, int userinput)
{
    if (userinput==0){
        return smallnum;
    }
    else if (userinput==9){
        return bignum;
    }
}

//=========================================================================
//=========================================================================

int main()
{
    int Number, max, min, request2;
    int* request; //Array pointer int*

    // Goes to the function inputrequest()
    cout << "How many times would you like to enter? ";
    cin >> Number;
    request = inputrequest(Number); 



    // Goes to functions FindMax() & FindMin()
    max = FindMax(request, Number); // calls the max function
    min = FindMin(request, Number); // calls the min function


    // Asks the user to display the maximum or the minimum number //
    int input;
    cout<<"Enter 0 to display the minimum number"<<endl<<"Enter 9 to display the maximum number"<<endl<<"Please enter here: ";
    cin>>input;
    cout<<"Please wait..."<<endl;
    sleep_for(nanoseconds(10));
    sleep_until(system_clock::now() + seconds(1)); 
    request2 = outputrequest(max,min,input); /* Variable uses max's, min's, and input's outputs to outputrequest() function */  
    cout<<request2;

    return 0;
}
//=========================================================================
//=========================================================================

