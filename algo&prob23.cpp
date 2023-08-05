#include <iostream>
#include <cmath>
using namespace std;
void ReadTriangleSides(float &A,float &B,float &C){
    cout <<"enter Triangle side A :";
    cin>>A;
    cout <<"enter Triangle side B :";
    cin>>B;
    cout <<"enter Triangle side C :";
    cin>>C;

}
float Area(float A,float B,float C){
    float PI=3.14159265359,
    p = (A + B + C)/2,
    P2= ((A*B*C)/(4*sqrt(p*(p-A)*(p-B)*(p-C)))),
     result =  PI * pow(P2,2);
    return result;
}
void PrintResult(float area){
    cout<<"circle area is : "<<area<<endl;
}
int main(){
    float A, B, C;
    ReadTriangleSides(A, B, C);
    PrintResult(Area(A, B, C));
    return 0;
}