#include <iostream>
using namespace std;
enum enOddOrEven{Odd=1,Even=2};

int ReadNumber(){
    int Num=0;
    cout<<"Enter Number : ";
    cin>>Num;
    return Num;
}
enOddOrEven CheckOddOrEven(int Number){
    if(Number % 2 == 0)
        return enOddOrEven::Even;
    else 
        return enOddOrEven::Odd;
}
int SumOddNumbers(int Num){
    int result =0;
    for(int i=0;i<=Num;i++){
        if(CheckOddOrEven(i) == enOddOrEven::Odd)
            result+=i;
    }
    return result;
}
int SumOddNumbers2(int Num){
    int result =0;
    for(int i=0;i<=Num;i++){
        if( i%2 == 0)
            continue;
        else
        result+=i;
    }
    return result;

}
void PrintNumbers(int Num){

    cout<<"result is : "<<Num<<endl;
}
int main(){
    PrintNumbers(SumOddNumbers(ReadNumber()));
    return 0;
}