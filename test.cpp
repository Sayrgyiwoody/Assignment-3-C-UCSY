#include <iostream>
#include <iomanip>

struct time {
    int hours;
    int minutes;
    int seconds;
};

long times_to_seconds(time t1, time t2) {
    return t1.hours * 3600 + t1.minutes * 60 + t1.seconds + t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
}

time seconds_to_time(long total_seconds) {
    time t;
    t.hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    t.minutes = total_seconds / 60;
    t.seconds = total_seconds % 60;
    return t;
};

int main() {
    time t1, t2, t_result;
    long total_seconds;

    std::cout << "Enter the first time in hours, minutes, and seconds: ";
    std::cin >> t1.hours >> t1.minutes >> t1.seconds;
    std::cout << "Enter the second time in hours, minutes, and seconds: ";
    std::cin >> t2.hours >> t2.minutes >> t2.seconds;

    total_seconds = times_to_seconds(t1, t2);
    t_result = seconds_to_time(total_seconds);

    std::cout << "The total time is: " << std::setfill('0') << std::setw(2) << t_result.hours << ":" << std::setfill('0') << std::setw(2) << t_result.minutes << ":" << std::setfill('0') << std::setw(2) << t_result.seconds << std::endl;

    return 0;
}