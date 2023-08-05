#include <iostream>
#include <cmath>
using namespace std;
void ReadNumberL(float &L){
    cout <<"enter circle side L :";
    cin>>L;

}
float Area(float L){
    float PI=3.14,
     result =  pow(L,2)/(4*PI);
    return result;
}
void PrintResult(float area){
    cout<<"circle area is : "<<area<<endl;
}
int main(){
    float L;
    ReadNumberL(L);
    PrintResult(Area(L));
    return 0;
}