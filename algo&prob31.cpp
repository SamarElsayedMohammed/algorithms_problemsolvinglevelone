#include <iostream>
using namespace std;

int ReadNumber(){
    int Num=0;
    cout<<"Enter Number : ";
    cin>>Num;
    return Num;
}
void Power2_3_4(int Num){
    int a,b,c;
    a= Num*Num;
    b= Num*Num*Num;
    c= Num*Num*Num*Num;
    cout << a <<" "<< b <<" "<< c <<endl;
}
int main(){
    Power2_3_4(ReadNumber());
    return 0;
}