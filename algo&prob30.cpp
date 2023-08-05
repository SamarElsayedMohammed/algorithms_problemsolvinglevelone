#include <iostream>
using namespace std;
int ReadNumber(){
    int Num=0;
    cout<<"Enter Number : ";
    cin>>Num;
    return Num;
}
int ReadPositivienumber(string Message){
    int Number;
    do{
        cout<<Message<<endl;
        cin>>Number;
    }while (Number < 0);
    return Number;
    
}
int Factorial(int Num){
    int result=1;
    for(int i=1;i<=Num;i++){
        result*=i;
    }
    return result;
}
void PrintNumbers(int Num){
    cout <<"the factorial result : "<<Num<<endl;
}
int main(){
    PrintNumbers(Factorial(ReadPositivienumber("Enter positive number")));
    return 0;
}