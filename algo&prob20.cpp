#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(float &A){
    cout <<"enter circle side A :";
    cin>>A;

}
float Area(float A){
    float PI=3.14,
     result = (PI * pow(A,2))/4;
    return result;
}
void PrintResult(float area){
    cout<<"circle area is : "<<area<<endl;
}
int main(){
    float A;
    ReadNumbers(A);
    PrintResult(Area(A));
    return 0;
}