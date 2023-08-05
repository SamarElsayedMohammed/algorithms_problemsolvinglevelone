#include <iostream>
using namespace std;
int ReadNumber(){
    int Num=0;
    cout<<"Enter Number : ";
    cin>>Num;
    return Num;
}
void PrintNumbers(int Num){
    for(int i=Num;i>=1;i--){
        cout<<i<<endl;
    }
}
int main(){
    PrintNumbers(ReadNumber());
    return 0;
}