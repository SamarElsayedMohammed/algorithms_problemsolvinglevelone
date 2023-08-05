#include <iostream>
using namespace std;
enum enNumberType{odd=1,even=2};
int ReadNumber(){

    int number = 0;
    cout<<"enter number plase : ";
    cin>>number;
    return number;
}
enNumberType CheckOddOrEvenn(int number){
    if (number % 2 == 0){
        return enNumberType::even;
    }else{
        return enNumberType::odd;
    }
}
void PrintNumberType(enNumberType numberType){
    if(numberType ==  enNumberType::even){
        cout<<"\n the number is even \n";
    }else{
        cout<<"\n the number is odd \n";

    }
}

int main(){
    PrintNumberType(CheckOddOrEvenn(ReadNumber()));
    return 0;
}