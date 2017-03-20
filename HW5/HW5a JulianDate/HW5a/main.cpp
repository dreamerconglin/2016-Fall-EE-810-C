#include <iostream>
#include <Windows.h>
using namespace std;

class JulDate {
private:
    int year,month,day,hour,minute,second;
    const static int BASEYEAR; // turns into extern
    double jday;
    static bool test_Leapyear(int test_year){
        if (( test_year%100==0 && ((test_year/100)%4)==0) || ( test_year%100!=0 && test_year%4==0))
            return true;
        else return false;
    }
    static int day_Year(int test_year){
        int day_year;
        if(JulDate::test_Leapyear(test_year))
            day_year=366;
        else
            day_year=365;
        return day_year;
    }
    static int day_Month(int test_year,int test_month){
        int day_month;
        switch(test_month){
        case 1:day_month=31;
        case 2:
            if(JulDate::test_Leapyear(test_year))
                day_month=29;
            else
                day_month=28;
        case 3:day_month=31;
        case 4:day_month=30;
        case 5:day_month=31;
        case 6:day_month=30;
        case 7:day_month=31;
        case 8:day_month=31;
        case 9:day_month=30;
        case 10:day_month=31;
        case 11:day_month=30;
        case 12:day_month=31;
        }
        return day_month;
    }
    static int day_to_Jan1st(int test_year,int test_month,int test_day){
        int day_to_Jan1st=0;
        for(int m=test_month-1;m>0;m--)
            day_to_Jan1st+=JulDate::day_Month(test_year,test_month);
        day_to_Jan1st+=test_day;
        return day_to_Jan1st;
    }
public:
    JulDate(int year,int month=1,int day=1,int hour=0,int minute=0,int second=0):year(year),month(month),day(day),hour(hour),minute(minute),second(second){}
    friend JulDate operator +(JulDate old_day,int d){
        JulDate new_day=old_day;
        while(JulDate::day_to_Jan1st(new_day.year,new_day.month,new_day.day)+d>JulDate::day_Year(new_day.year)){
            ++new_day.year;
            new_day.month=1;
            new_day.day=0;
            d=d-JulDate::day_Year(new_day.year)+JulDate::day_to_Jan1st(new_day.year,new_day.month,new_day.day);
        }
        while(new_day.day+d>JulDate::day_Month(new_day.year,new_day.month)){
            ++new_day.month;
            new_day.day=0;
            d=d-JulDate::day_Month(new_day.year,new_day.month)+new_day.day;
        }
        new_day.day+=d;
        return new_day;
    }
    friend double operator -(JulDate left,JulDate right){
        double del=0;
        for(int y=left.year;y>right.year;--y)
            del+=JulDate::day_Year(y-1);
        del+=JulDate::day_to_Jan1st(left.year,left.month,left.day)-JulDate::day_to_Jan1st(right.year,right.month,right.day);
        del+=(left.hour-right.hour)/24.0+(left.minute-right.minute)/(24.0*60.0)+(left.second-right.second)/(24.0*60.0*60.0);
        return del;
    }
    int getYear() const{
        return year;
    }
    int getMonth() const{
        return month;
    }
    int getDay() const{
        return day;
    }
    int getHour() const{
        return hour;
    }
    int getMinute() const{
        return minute;
    }
    int getSecond() const{
        return second;
    }
    static JulDate now(){
        SYSTEMTIME sys;
        GetLocalTime(&sys);
        JulDate now(sys.wYear,sys.wMonth,sys.wDay,sys.wHour,sys.wMinute,sys.wSecond);
        return now;
    }

};

const int JulDate::BASEYEAR = 2000;

int main() {
    JulDate d1 = JulDate::now();
    //cout << d1.getYear() << ":" << d1.getMonth() << ":" << d1.getDay() << ":" << d1.getHour() << ":" << d1.getMinute() << ":" << d1.getSecond() <<'\n';
    JulDate d(2005, 1, 5); // Jan 15, 2005
    //	cout << d1 + d2; // makes no sense!!!

    JulDate d2 = d1 + 1; // tomorrow
    //cout << d2.getYear() << ":" << d2.getMonth() << ":" << d2.getDay() << '\n';
    JulDate d3(2052, 1, 1, 12, 00, 00);
    JulDate d4(2061, 2, 28, 11, 00, 00);
    double del = d4 - d3;
    cout << del  << "\n";
    cout << d4.getYear() << ":" << d4.getMonth() << ":" << d4.getDay() << '\n';
    JulDate d5(2004, 2,29);
    // extra 5 points if you get the following right!
    cout << d5.getYear() << ":" << d5.getMonth() << ":" << d5.getDay() << '\n';
}
