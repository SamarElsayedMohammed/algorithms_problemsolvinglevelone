#include <iostream>
#include <cmath>
using namespace std;
void ReadRadius(float &reduis){
    cout <<"enter circle redius r :";
    cin>>reduis;

}
float Area(float reduis){
    float PI=3.14,
     result = PI * pow(reduis,2);
    return result;
}
void PrintResult(float area){
    cout<<"circle area is : "<<area<<endl;
}
int main(){
    float reduis;
    ReadRadius(reduis);
    PrintResult(Area(reduis));
    return 0;
}