#include "print_utils.hpp"

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

std::string time_in_seconds_to_formatted_minutes_seconds(double time) {
    int minutes = static_cast<int>(time) / 60;
    int seconds = static_cast<int>(time) % 60;

    std::ostringstream time_string;
    time_string << std::setw(2) << std::setfill('0') << minutes << ":" << std::setw(2) << std::setfill('0') << seconds;
    return time_string.str();
}
