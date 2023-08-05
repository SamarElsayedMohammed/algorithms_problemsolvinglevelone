#include<iostream>
using namespace std;
float ReadNumber(string Message){

    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;

}
int MonthlyInstallment(int LoanAmount,int numberOfMonths ){
    return LoanAmount /numberOfMonths;
}
int main(){

   int LoanAmount= ReadNumber("enter Loan Amount you need : "),
    numberOfMonths = ReadNumber("enter number of month to pay your loan : ");
   cout <<"amout per month is : "<<MonthlyInstallment(LoanAmount,numberOfMonths)<<endl;
    return 0;
}