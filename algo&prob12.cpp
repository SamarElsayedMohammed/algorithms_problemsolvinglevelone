#include <iostream>
using namespace std;
void ReadNumbers(int &number1 ,int &number2){
    cout<<"enter first number : ";
    cin>>number1;
    cout<<"enter second number : ";
    cin>>number2;
}
int MaxNumber(int number1 ,int number2){
    if(number1 > number2)
        return number1;
    else
        return number2;
}
void PrintResult(int number){
    cout <<" maxmum number is : "<<number<<endl;

}
int main(){
    int number1=0 ,number2 =0;
    ReadNumbers(number1,number2);
    PrintResult(MaxNumber(number1,number2));
    return 0;
}