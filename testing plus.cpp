/*====================== 
Student: Zu Jia He Cen.
Class: EMT 2410 (HD77) 
========================*/
#include <iostream>
using namespace std; 

class LED //Class named LED
{
private:
//private attributes (member variables)
    int PinNum;
    int TimeDuration;
    float Brightness;
public:
    LED (int pinnum) //Constructor
    {
        PinNum=pinnum; //PiNum now holds pinum from int main
    }

    void turnon(float brightness=100.00, int timeduration=0) //Method definition (member function) with 2 parameters
    {
        Brightness=brightness; //Private variables will be updated by current parameters or user's provided arguments.
        TimeDuration=timeduration;
        cout <<"LED-On is connected to pin: "<< PinNum <<endl;
        if (Brightness>0 && Brightness<=100 && TimeDuration>0 ) //if user entered a brightness between 0-100 and above 0 seconds.
        {
            cout <<"Brightness Level is: "<< Brightness << "%" <<endl;
            cout <<"Duration: "<< TimeDuration << "s" <<endl;
        } 
        else if (Brightness==0)
        {
            cout <<"LED is off" <<endl;
        }
        else if (Brightness>100 && TimeDuration>=0) //If user enters above 100% brightness and at least a 0 seconds.
        {
            Brightness=100;
            cout <<"Brightness Level is: "<< Brightness << "%" <<endl;
            if (TimeDuration==0)
            {
                cout <<"Duration: ∞ (Always on)"<<endl;
            }
            else 
            {
                cout <<"Duration: "<< TimeDuration << "s" <<endl;
            }
        }
        else //If user types a negative duration or anything else.
        {
            Brightness=100;
            cout <<"Brightness Level is: "<< Brightness << "%" <<endl;
            cout <<"Duration: ∞ (Always on)"<<endl;
        }
    }
};

int main()
{
    int brightness, duration;
    string answer;
    cout<<"Enter \"CUSTOM\" for custom settings."<<endl<<"Enter any keys for default settings"<<endl<<"Enter here: ";
    cin>>answer;
    cout<<"==========================================================="<<endl;
    LED GreenLED(5); 
    if (answer=="CUSTOM")
    {
        cout <<"Enter brightness: ";
        cin >> brightness;
        cout <<"Enter time duration: ";
        cin >> duration;
        cout<<endl;
        GreenLED.turnon(brightness, duration);
    }
    else //Default method calling (Public member function)
    {
        GreenLED.turnon();
    }
    return 0;
}