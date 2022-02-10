#include <iostream>
class Rangeiter
{
private:
    int start;
    int step;
    int limit;
    int currentIndex;
    int currentVal;
public:
    Rangeiter(int inStart, int inStep, int inLimit) {
        this->start = inStart;
        this->step = inStep;
        this->limit = inLimit;
        this->currentIndex = 0;
        this->currentVal = inStart;
    }
    ~Rangeiter(){}
    int next(){
        this->currentIndex+=1;
        this->currentVal += this->step;
        return this->currentVal;
    }
    int end(){
        if(this->limit % step == 0 ){
            return this->limit;
        } else if(this->limit % step != 0){
            return this->limit -= this->limit % this->step;
        }
    }
    void begin() {
        this->currentIndex = 0;
        this->currentVal = this->start;
    }
    int current(){
        return currentVal;
    }
};

int main()
{
    Rangeiter Rangeiter(0,3,12);

    for (; Rangeiter.current() <= Rangeiter.end(); Rangeiter.next())
    {
        std::cout<< Rangeiter.current()<< std::endl;
    }
}