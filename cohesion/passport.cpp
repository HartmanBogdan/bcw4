#include <iostream>
#include <list>

class Passport {
    private:
        static std::list<Passport*> lastPass;
        unsigned long long int number;
        char seria[2];
        static unsigned long long int s_number;
        static char s_seria[2];
        std::string name;
        std::string secondName;
        int day;
        int month;
        int year;
    public:
        Passport(const std::string& name, const std::string& secondName, int day, int month, int year) {
                this->name = name;
                this->secondName = secondName;
                this->day = day;
                this->month = month;
                this->year = year;
                if ( s_number < 999999 ) {
                    s_number += 1;
                    number = s_number;
                    seria[0] = s_seria[0];
                    seria[1] = s_seria[1];
                } else if ( s_seria[0] == 'Z' && s_seria[1] == 'Z' && s_number == 999999 ) {
                    std::cout << "Run out of passport seria" << std::endl;
                } else if ( s_seria[1] == 'Z' ) {
                    s_seria[0] += 1;
                    s_seria[1] = 'A';
                    s_number = 100000;
                    number = s_number;
                    seria[0] = s_seria[0];
                    seria[1] = s_seria[1];
                } else {
                    s_seria[0] = 'A';
                    s_seria[1] += 1;
                    s_number = 100000;
                    number = s_number;
                    seria[0] = s_seria[0];
                    seria[1] = s_seria[1];
                }

            lastPass.push_back(this);
        }

        ~Passport() {
            lastPass.remove(this);
        }

        static void setSeria(char ser) {
            s_seria[1] = ser;
            s_number = 100000;
        }

        static void setSeria(char ser1, char ser2, unsigned long long int num) {
            s_seria[0] = ser1;
            s_seria[1] = ser2;
            s_number = num;
        }


        char* getSeria() {
            return this->seria;
        }

        static char* getS_seria() {
            return s_seria;
        }

        unsigned long long int getNumber() const {
            return number;
        }

        static unsigned long long int getS_number() {
            return s_number;
        }

        const std::string& getName() const {
            return this->name;
        }

        const std::string& getSecondName() const {
            return this->secondName;
        }

        int getDay() const {
            return this->day;
        }

        int getMonth() const {
            return this->month;
        }

        int getYear() const {
            return this->year;
        }

        void PrintData() {
            std::cout << "Seria : " << getS_seria() << "  Number : " << getS_number() << std::endl;
            std::cout << "First name : " << getName() << "  Second name : " << getSecondName() << std::endl;
            std::cout << "Birth Day : " << getDay() << '/' << getMonth() << '/' << getYear() << std::endl;
            std::cout << "================================================" << std::endl;
        }

};

unsigned long long int Passport::s_number = 100000;
char Passport::s_seria[2] = {'A', 'A'};
std::list<Passport*> Passport::lastPass;



int main() {

    Passport* him = new Passport("Rengoku", "Kyujuro", 19, 12, 1897);
    him->PrintData();
    him->setSeria('A', 'B', 999999);
    him->PrintData();



    Passport* your = new Passport("Inouske", "Hashibiru", 3, 6, 1988);
    your->PrintData();


    Passport* me = new Passport("Zenitsu", "Agatsuma", 21, 05, 1993);
    me->PrintData();
    me->setSeria('A', 'D', 100000);
    me->PrintData();

     Passport* her = new Passport("Tandzhiro", "Kamado", 10, 11, 2001);
    her->PrintData();

    delete(me);
    delete(him);
    delete(her);
    delete(your);

    return 0;
}
