#include <iostream>
class Factorial
{
private:
    long long int factNumb;
    long long int iterations;
    long long int first;
    long long int beginIterations;
    long long int beginNumber;
    bool bol;
    long long int lastValue;
public:
    Factorial(long long int fact){
        this->factNumb = 1;
        this->first = 1;
        this->iterations = fact;
        this->beginIterations = fact;
        this->beginNumber = 1;
        this->bol = 1;

    };
    ~Factorial(){};
    long long int next(){
        if(this->beginIterations == 0 && bol == 1) {
            std::cout<< this->beginNumber <<std::endl;
            bol = 0;
            return false;
        } else if (this->beginIterations > 0) {
            for ( ;this->first <= iterations ; this->first++){
                this->factNumb *=this->first;
                std::cout<< this->factNumb<< std::endl;
                continue;
            }
        }
    }
    long long int end(){
        for (;this->iterations>0;) {

            this->first *= this->factNumb;
            this->factNumb +=1;
            this->iterations -=1;
            this->bol = 0;
        }
        std::cout<< this->first<< std::endl;
    }
    long long int endVal(){
        for (;this->iterations>0;) {
            this->first *= this->factNumb;
            this->factNumb +=1;
            this->iterations -=1;
            this->bol = 0;
        }
        this->lastValue = this->first;
        return this->lastValue;
    }
    int begin(){
        this->iterations = this->beginIterations;
        this->first = 1;
        this->factNumb = 1;
    }
    long long int current(){
        return this->factNumb;
    }

};

int main(){
    Factorial factorial1(10);
    Factorial factorial2(5);
    Factorial factorial3(10);

    for (; factorial3.next() == true; ){
        factorial3.next();
    }

    factorial3.next();
    factorial3.next();
    factorial3.next();
    factorial3.next();
    factorial3.next();
    factorial3.next();
    factorial3.next();
    factorial3.next();

    // factorial3.next();
    // factorial2.next();
    // factorial2.next();
    // factorial2.next();
    // factorial2.next();
    // factorial2.next();
    // factorial2.next();
    // factorial2.next();

}
