#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(float &a,float &d){
    cout <<"enter first number a :";
    cin>>a;
    cout <<"enter second number d :";
    cin>>d;
}
float Area(float a,float d){
    float result = a* (sqrt(pow(d,2) - pow(a,2)));
    return result;
}
void PrintResult(float area){
    cout<<"area is : "<<area<<endl;
}
int main(){
    float a,d;
    ReadNumbers(a,d);
    PrintResult(Area(a,d));
    return 0;
}