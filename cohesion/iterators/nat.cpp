#include <iostream>

class Natural {
    private:
        int n;
        int current;
    public:
        Natural(int n) {
                this->n = n;
                this->current = 1;
        }

        ~Natural() {}

        int begin() {
            if ( this->n < 1 ) {
                std::cout << "this number isn`t natural" << std::endl;
                return 1;
            } else {
                return this->current;
            }
        }

        void next() {
            if ( this->current <= this->n ) {
                this->current += 1;
            } else {
                return;
            }
        }

        int getthisnumber() {
            return this->current;
        }

        int end() {
            return this->n;
        }
};

int main() {
    Natural natural(99);

    for ( ; natural.begin() <= natural.end(); natural.next() ) {
        std::cout << natural.getthisnumber() << std::endl;
    }
}