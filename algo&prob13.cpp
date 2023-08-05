#include <iostream>
using namespace std;
void ReadNumbers(int &number1 ,int &number2, int &number3){
    cout<<"enter first number : ";
    cin>>number1;
    cout<<"enter second number : ";
    cin>>number2;
    cout<<"enter third number : ";
    cin>>number3;
}
int MaxNumber(int number1 ,int number2 ,int number3){
    if(number1 > number2 )
        if(number1 > number3)
            return number1;
        else 
            return number3;
    else 
        if(number2 > number3)
            return number2;
        else
            return number3;
}
void PrintResult(int number){
    cout <<" maxmum number is : "<<number<<endl;

}
int main(){
    int number1=0 ,number2 =0 ,number3 =0;
    ReadNumbers(number1,number2,number3);
    PrintResult(MaxNumber(number1,number2,number3));
    return 0;
}