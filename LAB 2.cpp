#include <iostream>
using namespace std;

int main()
{
 float MyArray[5]; //Array’s size must be declared
 int Number;
 cout << "How many times would you like to enter? ";
 cin >> Number;
 
 for (int i=0; i<Number; i++)
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

 int input2;
 cout<<"Enter 0 to display the minimum number"<<endl<<"Enter 9 to display the maximum number"<<endl<<"Please enter here: ";
 cin>>input2;
 
 if (input2==0){
    cout << "The minimum number is " << min << endl; 
 }
 else if (input2==9){
    cout << "The maximum number is " << max << endl;
 }
 else {
    cout<<"Not valid input";
 }

return 0;
}