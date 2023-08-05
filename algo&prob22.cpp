#include <iostream>
#include <cmath>
using namespace std;
void ReadNumberL(float &A ,float &B){
    cout <<"enter Triangle side A :";
    cin>>A;
    cout <<"enter Triangle side B :";
    cin>>B;

}
float CircleAreaInscribedInAnIsoscelesTriangle(float A ,float B){
    float PI=3.14,
     result = PI* (pow(B,2)/4)*(2*A -B)/(2*A + B);
    return result;
}
void PrintResult(float area){
    cout<<"circle area is : "<<area<<endl;
}
int main(){
    float A ,B;
    ReadNumberL(A ,B);
    PrintResult(CircleAreaInscribedInAnIsoscelesTriangle(A ,B));
    return 0;
}