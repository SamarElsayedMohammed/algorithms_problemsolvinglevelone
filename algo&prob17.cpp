#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(float &a,float &h){
    cout <<"enter first number a :";
    cin>>a;
    cout <<"enter second number h :";
    cin>>h;
}
float Area(float a,float h){
    float result = (a* h)/2;
    return result;
}
void PrintResult(float area){
    cout<<"area is : "<<area<<endl;
}
int main(){
    float a,h;
    ReadNumbers(a,h);
    PrintResult(Area(a,h));
    return 0;
}