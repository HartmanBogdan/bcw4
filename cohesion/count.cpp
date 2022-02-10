#include <iostream>
#include <list>

class count
{
protected:
    static std::list<count*>lastMo;
public:
    static int last;

    count(){
        this->last += 1;
        this->lastMo.push_back(this);
    }
    ~count(){
        this->last -= 1;
        this->lastMo.remove(this);
    }

};
std::list<count*> count::lastMo;
int count::last = 0;


int main(){
    count* first = new count();
    std::cout << "count: " << count::last << std::endl;

    count* second = new count();
    std::cout << "count: " << count::last << std::endl;

    count* third = new count();
    std::cout << "count: " << count::last << std::endl;

    delete (first);
    std::cout << "count: " << count::last << std::endl;

    delete(second);
    std::cout << "count: " << count::last << std::endl;

    delete(third);
    std::cout << "count: " << count::last << std::endl;
    count* firstnew = new count();
    std::cout << "count: " << count::last << std::endl;
    return 0;
}