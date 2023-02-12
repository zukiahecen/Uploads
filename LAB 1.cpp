#include <iostream>
using namespace std;
#include <chrono>
#include <thread>
using namespace this_thread; 
using namespace chrono; 

int main() {
    int num;

    cout<<"Enter Number:";

    cin>>num;

    cout<<"Please wait...\n\n";

    sleep_until(system_clock::now() + seconds(1));
    
    for (int i=0; i++;){
        cout << "Hello World! " << "\n";
    }
    cout<<"Code has generated "<<num<<"x\n\n";
}