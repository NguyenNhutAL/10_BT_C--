#include <stdio.h>
#include <stdint.h>
#include <time.h>
class Date {
    private:
        uint8_t day;
        uint8_t month;
        uint16_t year;
    public:
        Date(uint8_t day, uint8_t month, uint16_t year);
        uint8_t calculateAge() const;
        // bool isHoliday() const;
};

Date::Date(uint8_t day, uint8_t month, uint16_t year) {
    Date::day = day;
    Date::month = month;
    Date::year = year;
}

uint8_t Date::calculateAge() const {
    // Lấy ngày hiện tại
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);
    uint16_t currentYear = localTime->tm_year + 1900;
    uint8_t currentMonth = localTime->tm_mon + 1;
    uint8_t currentDay = localTime->tm_mday;

    // Tính tuổi
    int age = currentYear - year;
    if (currentMonth < month || (currentMonth == month && currentDay < day)) {
        age--;
    }

    return age;
}

int main() {
    Date birthday(20, 5, 1990);
    printf("Tuoi la: %d", birthday.calculateAge());

    return 0;
}