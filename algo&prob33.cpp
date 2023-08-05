#include <iostream>
using namespace std;
int ReadGrade(){
    int Grade=0;
    cout<<"Enter Grade : ";
    cin>>Grade;
    return Grade;
}
int ReadNumberInRange(int from,int to){
    int grade;
    do
    {
       grade= ReadGrade();
    } while (grade > from || grade <to);
    
    return grade;
}
char GradeResult(int grade){
    if(grade <=100 && grade >=90){
        return 'A';
    }else if(grade <90 && grade >=80){
        return 'B';
    }else if(grade <80 && grade >=70){
        return 'c';
    }else if(grade <70 && grade >=60){
        return 'D';
    }else if(grade <60 && grade >=50){
        return 'e';
    }else {
        return 'F';
    }
}
int main(){
    cout <<GradeResult(ReadNumberInRange(100,0))<<endl;
    return 0;
}