#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <time.h>

class Person{
    private:
        const char *Name;
        uint16_t BirthYear;
        const char *address;
    public:
        Person(const char *Name, uint16_t BirthYear, const char *address);
        void output();
        uint16_t Age();
};
Person::Person(const char *Name, uint16_t BirthYear, const char *address){
    Person::Name=Name;
    Person::BirthYear= BirthYear;
    Person::address= address;
 }

void Person::output(){
    printf(" Ten: %s\n",Name);
    printf(" Nam sinh: %d\n", BirthYear);
    printf("Dia chi: %s\n ",address);
}
uint16_t Person::Age(){
    time_t t = time(0);
    struct tm *Now = localtime(&t);
    uint16_t currentYear = Now ->tm_year + 1900;
    uint16_t age = currentYear - BirthYear;
    return age;

}
int main(){
    Person p("Nguyen Minh Nhut",2000,"Thu Duc");
    p.output();
    printf("Tuoi:",p.Age());
}