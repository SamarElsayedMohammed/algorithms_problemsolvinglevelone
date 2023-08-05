#include <iostream>
using namespace std;
int ReadNumber(){
    int Num=0;
    cout<<"Enter Number : ";
    cin>>Num;
    return Num;
}
int SumEvenNumbers(int Num){
    int result =0;
    for(int i=0;i<=Num;i++){
        if( i%2 != 0)
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
    PrintNumbers(SumEvenNumbers(ReadNumber()));
    return 0;
}