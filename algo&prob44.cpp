#include<iostream>
using namespace std;
enum enWeekDays {sunday = 1,monday =2,Tuesday = 3,Wednesday =4,Thursday = 5,Friday =6 ,Saturday =7};
void WeekDaysMenu(){
    cout<<"**********************\n";
    cout<<"1 : sunday \n";
    cout<<"2 : monday \n";
    cout<<"3 : Tuesday \n";
    cout<<"4 : Wednesday \n";
    cout<<"5 : Thursday \n";
    cout<<"6 : Friday \n";
    cout<<"7 : Saturday \n";
    cout<<"**********************\n";
}
int ReadDayOfWeek(int from,int to){
    int day;
    do
    {
     WeekDaysMenu();
     cin>>day;
    } while (!(day >= from && day <=to));
    return day;
}

string PrintDayOfWeek(int day){
    switch (day)
    {
    case enWeekDays::sunday:
        return "sunday";
        break;
    case enWeekDays::monday:
        return "monday";
        break;
    case enWeekDays::Tuesday:
        return "Tuesday";
        break;
    case enWeekDays::Wednesday:
        return "Wednesday";
        break;
    case enWeekDays::Thursday:
        return "Thursday";
        break;
    case enWeekDays::Friday:
        return "Friday";
        break;
    case enWeekDays::Saturday:
        return "Friday";
        break;
    default:
    return "wrong day";
        break;
    }
    
}
int main(){
    int day;
    cout << PrintDayOfWeek(ReadDayOfWeek(1,7))<<endl;
    return 0;
}