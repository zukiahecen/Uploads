#include <iostream>
using namespace std;
int main()
{
 float MyArray[5]; //Array’s size must be declared
 int Number;
 cout << "How many times would you like to enter? ";
 cin >> Number;
 
 for (int i=0; i<Number; i++)// iteration must match the array’s size
 { 
    cout << "Enter the number for " << i + 1 << endl;
    cin >> MyArray[i]; // Receive input numbers one by one
 }
 
 int max = MyArray[0];
 int min = MyArray[0];

 for (int i = 1; i < Number; i++) 
 { 
    if (MyArray[i] > max)
    {
        max = MyArray[i];
    }

    if (MyArray[i] < min)
    {
        min = MyArray[i];
    }
 }
 
 cout << "The min element is " << min << endl;
 cout << "The max element is " << max << endl;
}