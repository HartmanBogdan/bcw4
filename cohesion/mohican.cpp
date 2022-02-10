#include <iostream>
#include <list>

class mohican
{
protected:
    int ID;
    static int last;
    static std::list<mohican*>lastMo;
public:
    mohican(){
        this->ID = 0;
        last += 1;
        this->ID = last;
        this->lastMo.push_back(this);
    }
    ~mohican(){
        this->last -= 1;
        this->lastMo.remove(this);
    }
    int getID(){
        return this->ID;
    }
    void print(){
        std::cout<<"ID: "<< this->ID<< " Last ID: "<< this->last<<std::endl;
    }
    static mohican getLast(){
        return *lastMo.back();
    }
};
int mohican::last = 0;
std::list<mohican*> mohican::lastMo;

int main()
{
    mohican* first = new mohican();
    mohican* second = new mohican();
    mohican* third = new mohican();
    mohican* fours = new mohican();
    mohican* fifth = new mohican();
    first->print();
    second->print();
    third->print();
    fours->print();
    fifth->print();

    std::cout << "last mohican: " << mohican::getLast().getID() << std::endl;
    delete (fifth);
    std::cout << "last mohican: " << mohican::getLast().getID() << std::endl;
    delete(fours);
    std::cout << "last mohican: " << mohican::getLast().getID() << std::endl;
    delete(third);
    std::cout << "last mohican: " << mohican::getLast().getID() << std::endl;
    delete(second);
    std::cout << "last mohican: " << mohican::getLast().getID() << std::endl;
    delete(first);
    std::cout << "last mohican: " << mohican::getLast().getID() << std::endl;

    return 0;
}