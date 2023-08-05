#include <iostream>
using namespace std;
void ReadNumbers(int &Num1,int &Num2){
    cout <<"enter first number :";
    cin>>Num1;
    cout <<"enter second number :";
    cin>>Num2;
}
void SwapNumbers(int &Num1,int &Num2){
    int Temp;
    Temp = Num1;
    Num1 = Num2;
    Num2 =Temp;
}
void PrintNumbers(int Num1,int Num2){
    cout << Num1 <<" "<<Num2<<endl;
}
void PrintNumbersAll(int Num1,int Num2){
    cout <<"number before swapping \n";
    PrintNumbers(Num1 ,Num2);
    
    SwapNumbers(Num1 ,Num2);

    cout <<"number after swapping \n";
    PrintNumbers(Num1 ,Num2);
}
int main(){
    int Num1 ,Num2;
    ReadNumbers(Num1,Num2);
    PrintNumbersAll(Num1,Num2);
    return 0;
}