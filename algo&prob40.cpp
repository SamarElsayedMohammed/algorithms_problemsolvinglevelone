#include<iostream>
using namespace std;
float ReadNumber(string Message){
    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;
}
float TotalBillValue(float BillValue){

    float totalBillValue = BillValue*1.1;
     totalBillValue = totalBillValue*1.16;
     return totalBillValue;
}
void PrintResult(float totalBillValue){
    cout <<"total bill value is : "<<totalBillValue<<endl;
}
int main(){
    float billValue = ReadNumber("enter bill value please");
    PrintResult(TotalBillValue(billValue));
    
     
    return 0;
}