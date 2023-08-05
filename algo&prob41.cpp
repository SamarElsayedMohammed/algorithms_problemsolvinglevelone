#include <iostream>
using namespace std;
float ReadNumber(string Message){
    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;
}
float CalculateDays(int Hours){
    return  Hours / 24;
}
float CalculateWeeks(int Hours){
    return  CalculateDays(Hours) / 7;
}
int main(){
    int Hours = ReadNumber("Enter Number of hours :");
    cout <<CalculateDays(Hours)<<" Days"<<endl;
    cout <<CalculateDays(Hours)/7<<" Weeks"<<endl;
    return 0;
}