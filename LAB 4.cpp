#include <iostream>
using namespace std;
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
int average(int a[], int n) 
{
    int total,i,max,sum=0,cannot=9999999;
    for (int i=0; i<n; i++){
    sum += a[i];
    total = sum/n;
    if (a[i]==cannot){
        return cannot;
    }
    }
return total;
}
//=========================================================================
int list(int a[], int n, int maxnum)
{
    int i;
    cout<<"You've entered "<<n<<" times"<<endl<<"Here are the entered numbers: "<<endl;
    for (int i=0; i<n; i++){
        cout<<"Number ("<<i+1<<") : "<<a[i]<<endl;
    }
}
//=========================================================================
int main()
{
    int Number, max , output, cannot2=9999999;
    int* request; //Array pointer int*

    // Goes to the function inputrequest()
    cout << "How many times would you like to enter? ";
    cin >> Number;
    request = inputrequest(Number); 

    // Goes to functions FindMax() & FindMin()
    max = average(request, Number);
    if (max==cannot2)
        cout<<"Process Terminated"<<endl<<"Number cannot be "<<max;
    else 
    {
        output = list(request, Number, max);
        cout<<"Your average is: "<<max;
    }
    return 0;
} 