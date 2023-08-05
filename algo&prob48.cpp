#include<iostream>
using namespace std;
float ReadNumber(string Message){
    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;
}
float CalculateNumbersOfMonth(float LoanAmount,float monthlyPaymentAmount){
    return LoanAmount /monthlyPaymentAmount;
}
int main(){
     

   int  LoanAmount =ReadNumber("enter Loan Amount you need : "),
        monthlyPaymentAmount =ReadNumber("enter monthly Payment Amount you can pay : ");
   cout <<"numbers of months of paymentod loan is : "<<CalculateNumbersOfMonth( LoanAmount, monthlyPaymentAmount)<<" Months"<<endl;
    return 0;
}