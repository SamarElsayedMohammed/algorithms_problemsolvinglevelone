#include<iostream>
using namespace std;

enum enOperations {sum='+',sub='-',multiply='*',divide = '/'};

float ReadNumber(string Message){

    float Number = 0;
    cout<<Message<<endl;
    cin >>Number;
    return Number;

}
enOperations ReadOpType(){
    char OT='+';
    cout<<"please enter  operation Type ( +, - , * , /)?\n";
    cin>>OT;
    return (enOperations)OT;
}

float CalculateValue(float Number1 ,float Number2 ,enOperations opType){
   switch (opType)
   {
   case enOperations::sum:
        return Number1 + Number2;
   case enOperations::sub:
        return Number1 - Number2;
    case enOperations::multiply:
        return Number1 * Number2;
    case enOperations::divide:
        return Number1 / Number2;
   default:
    return Number1 + Number2;
   }
}
int main(){
    
    float Number1 = ReadNumber("Please enter the first number ?");
    float Number2 = ReadNumber("Please enter the second number ?");

    enOperations opType = ReadOpType();
    cout << "Result : "<<CalculateValue(Number1,Number2,opType)<<endl;
    return 0;
}