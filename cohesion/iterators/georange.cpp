#include <iostream>
#include <cmath>
class Georange
{
private:
    int base;
    int currentVal;
    int step;
    int lastIndex;
    int currentIndex;
    int bol;

public:
    Georange(int inBase, int inStep, int inLimit) {
        if(inStep < 0 ){
            inStep *= -1;
        }
        this->base = inBase;
        this->currentVal = this->base;
        this->step = inStep;
        this->lastIndex = inLimit;
        this->currentIndex = this->lastIndex;
        this->bol = 1;



    }
    ~Georange(){}
    int next(){
        if (this->lastIndex == 0 ) {
            std::cout<< "Number of iterations cant be 0" << std::endl;
            return 1;
        }
        if ( this->lastIndex == 1 ) {
            std::cout<< this->base<<std::endl;
            return 1;
        } else if(this->lastIndex != 1 && this->currentIndex > 1) {
            if (bol == 1){
                std::cout<< this->base<<std::endl;
                bol = 0;
            }
            this->currentVal = this->currentVal*this->step;
            std::cout<< this->currentVal << std::endl;
            this->currentIndex -=1;
            return 0;
            if ( this->currentIndex < 1 ) {
                return 1;
            }
        }
    }
    int end(){
        this->currentVal= this->base;
        this->currentIndex = lastIndex;
        for (;this->currentIndex > 1; this->currentIndex-=1){
            this->currentVal *= this->step;
        }
        std::cout<< this->currentVal<< std::endl;
    }

    void begin() {
        this->currentVal = this->base;
        this->currentIndex = this->lastIndex;
    }
    int current(){
        return this->currentVal;
    }
};

int main()
{
    Georange Georange1(-2,2,10);
    Georange Georange2(2,2,10);
    Georange Georange3(2,2,0);


    for (; Georange1.next() == 0; ){
        Georange1.next();
    }
        for (; Georange2.next() == 0; ){
        Georange2.next();
    }
        for (; Georange3.next() == 0; ){
        Georange3.next();
    }
}