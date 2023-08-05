#include<iostream>
using namespace std;

struct strData
{
    int days, hours, minutes,  seconds,EnterSeconds;
};

strData ReadData(strData seconds ){
    cout<<"Enter the number of Seconds: "; 
    cin >>seconds.EnterSeconds;
    return seconds;
}

strData TranslateSeconds(strData Data){
    int SecondsPerDay= 24 * 60 * 60,
        SecondsPerHour = 60 * 60,
        SecondsPerMinute= 60,
        reminder;

    Data.days = Data.EnterSeconds / SecondsPerDay;
    reminder =Data.EnterSeconds % SecondsPerDay;
    Data.hours = reminder/SecondsPerHour;
    reminder = reminder % SecondsPerHour;
    Data.minutes = reminder / SecondsPerMinute;
    reminder = reminder % SecondsPerMinute;
    Data.seconds = reminder;
    return Data;

}
void PrintData(strData data){
    cout<<"\n***************************************\n";
    cout <<"Days : "<<data.days<<endl;
    cout <<"Hours : "<<data.hours<<endl;
    cout <<"Minuts : "<<data.minutes<<endl;
    cout <<"Seconds : "<<data.seconds<<endl;
    cout<<"***************************************\n";


}

int main(){
    strData data1;
    PrintData(TranslateSeconds(ReadData(data1)));
    return 0;
}