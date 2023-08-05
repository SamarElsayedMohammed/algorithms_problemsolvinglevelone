#include <iostream>
using namespace std;

float ReadNumber(string Message){
    float Num=0;
    do
    {
        cout<<Message<<endl;
        cin>>Num;
    } while (Num <= 0);
    return Num;
}
float ReminderCash(float CashPaid,float TotalBill ){
    return TotalBill - CashPaid;
}
void PrintResult(float CashPaid,float TotalBill){
    cout <<"the remender cash : "<<ReminderCash( CashPaid, TotalBill )<<endl;
}
int main(){
    float CashPaid =ReadNumber("Enter cash paid"), 
    TotalBill = ReadNumber("enter total bill");
    PrintResult(CashPaid, TotalBill);
    return 0;
}