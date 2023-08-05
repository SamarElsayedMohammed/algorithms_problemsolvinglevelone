#include <iostream>
using namespace std;

float ReadNumber(string Message){
    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;
}
void Seconds(int days,int hours ,int minutes ,int seconds){
    int durationInSeconds = seconds + minutes*60 + hours*60*60 + days*24*60*60;
    cout<<"total seconds is : "<<durationInSeconds<<endl;
}
int main(){
   //convert to struct datatype
   int  days= ReadNumber("Enter Days"),
        hours= ReadNumber("Enter Hours"),
        minutes= ReadNumber("Enter minutes"),
        seconds =ReadNumber("Enter seconds");

     Seconds(days, hours, minutes,  seconds);
    return 0;
}