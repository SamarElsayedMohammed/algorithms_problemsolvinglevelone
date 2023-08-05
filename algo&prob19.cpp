#include <iostream>
#include <cmath>
using namespace std;
void ReadNumbers(float &Diameter){
    cout <<"enter circle diameter d :";
    cin>>Diameter;

}
float Area(float Diameter){
    float PI=3.14,
     result = (PI * pow(Diameter,2))/4;
    return result;
}
void PrintResult(float area){
    cout<<"circle area is : "<<area<<endl;
}
int main(){
    float Diameter;
    ReadNumbers(Diameter);
    PrintResult(Area(Diameter));
    return 0;
}