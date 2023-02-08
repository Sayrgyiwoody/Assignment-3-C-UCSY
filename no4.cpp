//Finish
#include <iostream>
using namespace std;

struct Time {
    int hours;
    int minutes;
    int seconds;
};

long times_to_seconds(Time d1,Time d2) {
    return (d1.hours * 3600 + d1.minutes * 60 + d1.seconds ) + (d2.hours * 3600 + d2.minutes * 60 + d2.seconds ); 
}

Time seconds_to_time(long s) {
    Time t;
    t.hours = s/3600;
    t.minutes = (s%3600)/60;
    t.seconds = s%60;
    return t;
}


int main() {
    Time t1,t2;
    char timeChar;
    cout << "Enter 1st time value : ";
    cin >> t1.hours >> timeChar >> t1.minutes >> timeChar >> t1.seconds;
    cout << "Enter 2nd time value : ";
    cin >> t2.hours >> timeChar >> t2.minutes >> timeChar >> t2.seconds;
    long timesToSecond = times_to_seconds(t1,t2);
    cout << "Equivalent Time in Second : " <<timesToSecond << endl;
    Time secondToTime = seconds_to_time(timesToSecond);
    cout << "Seconds to time : \n" << secondToTime.hours << " : " << secondToTime.minutes << " : " << secondToTime.seconds;
    return 0;
}