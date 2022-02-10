#include <iostream>
#include <list>

class ident
{
protected:
    int id;
    static std::list<ident*>lastMo;
public:
    static int last;

    ident(){
        this->last += 1;
        this->id = this->last;
        this->lastMo.push_back(this);
    }
    ~ident(){
        // this->last -= 1;
        this->lastMo.remove(this);
    }
    int getID(){
        return this->id;
    }
};
std::list<ident*> ident::lastMo;
int ident::last = 0;


int main(){
    ident* first = new ident();
    std::cout<< "ID: "<< first->getID()<<std::endl;

    ident* second = new ident();
    std::cout<< "ID: "<< second->getID()<<std::endl;

    ident* third = new ident();
    std::cout<< "ID: "<< third->getID()<<std::endl;

    delete (first);

    delete(second);

    delete(third);
    ident* firstnew = new ident();
    std::cout<< "ID: "<< firstnew->getID()<<std::endl;

    delete (first);
    return 0;
}