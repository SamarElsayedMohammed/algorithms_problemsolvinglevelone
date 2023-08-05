#include <iostream>
using namespace std;
void ReadNumbers(float &Num1,float &Num2){
    cout <<"enter first number :";
    cin>>Num1;
    cout <<"enter second number :";
    cin>>Num2;
}
float Area(float Num1,float Num2){
    return (Num1 * Num2);
}
void PrintResult(float area){
    cout<<"area is : "<<area<<endl;
}
int main(){
    float num1,num2;
    ReadNumbers(num1,num2);
    PrintResult(Area(num1,num2));
    PrintResult(Area(num1,num2));
    return 0;
}