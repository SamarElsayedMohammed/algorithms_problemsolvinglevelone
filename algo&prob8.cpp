#include <iostream>
using namespace std;
enum enPassFail{Pass=1,Fail=2};

short int ReadGrade(){
    short int grade=0;
    cout<<"Enter Grade please: ";
    cin>>grade;
    return grade;
}

enPassFail CheckGrade(short int grade){
    if(grade >= 50 ){
        return enPassFail::Pass;
    }else{
        return enPassFail::Fail;
    }
}

void PrintResult(short int grade){
    if(grade == enPassFail::Pass )
        cout<<"\n you are Passed\n";
    else
        cout<<"\n you are Failed\n";
}

int main(){
    PrintResult(CheckGrade(ReadGrade()));
    // short int grade=0;
    // ReadGrade(grade);
    // cout<<"your result is : "<<CheckGrade(grade)<<endl;
    
    return 0;
}