#include <iostream>

class Fibonacci {
    private:
        int number;
        int count;
        int checkCount;

    public:
        Fibonacci(int inFibo) {
            this->checkCount = inFibo;
            if(this->checkCount < 0 ){
                this->checkCount *= -1;
            }
            this->number = inFibo;
            this->count = 0;
        }

        ~Fibonacci() {}

        int begin() {
            this->count = 0;
        }

        int next() {
            int a = 0;
            int b = 1;
            int key = 1;
            int n = this->count;
            if(n > this->checkCount && ){
                std::cout<< "out of input value" << std::endl;
                return 0;
            }


            if ( n < 0 ) {
                key = 0;
                n *= -1;
            }

            for ( int i = 0; i < n; i++ ) {
                a = a + b;
                b = a - b;
            }
            if ( key == 0 && n % 2 == 0 ) {
                a *= -1;
            }
            this->count += 1;

            return a;

        }

        int end() {
            int n = this->number;
            int a = 0;
            int b = 1;
            int key = 1;

            if ( n < 0 ) {
                key = 0;
                n *= -1;
            }

            for ( int i = 0; i < n; i++ ) {
                a = a + b;
                b = a - b;
            }
            if ( key == 0 && n % 2 == 0 ) {
                a *= -1;
            }
            this->count = this->number;
            return a;
        }
        int getFib() {
            int n = this->count;
            if(n > this->checkCount ){
                std::cout<< "out of input value" << std::endl;
                return 0;
            }
            int a = 0;
            int b = 1;
            int key = 1;

            if ( n < 0 ) {
                key = 0;
                n *= -1;
            }

            for ( int i = 0; i < n; i++ ) {
                a = a + b;
                b = a - b;
            }
            if ( key == 0 && n % 2 == 0 ) {
                a *= -1;
            }
            return a;
        }
};

int main() {
    Fibonacci fibo(-5);

    std::cout << fibo.next() << std::endl;
    ;
    std::cout << fibo.next() << std::endl;
    fibo.();
    std::cout << fibo.next() << std::endl;
    fibo.next();
    std::cout << fibo.next() << std::endl;

    return 0;
}
