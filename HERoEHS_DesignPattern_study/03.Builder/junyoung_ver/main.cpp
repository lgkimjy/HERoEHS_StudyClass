#include <iostream>
#include <vector>
#include <cstring>
using namespace std;



class Product1
{
    public:
        vector<string> parts_;

        void ListParts() const{
            cout << "Product parts: ";
            for (size_t i=0; i<parts_.size(); i++){
                if(parts_[i] == parts_.back()){
                    cout << parts_[i];
                }else{
                    cout << parts_[i] << ", ";
                }
            }cout << endl; 
        }
};

// virtual class for inheritance
class HouseBuilder
{
    public :
        virtual ~HouseBuilder(){};
        virtual void build_Door() const = 0;   // why do i have to write const = 0;
        virtual void build_Window() const  = 0;
        virtual void build_Wall() const = 0;
};

// inherited class
class ConcreateBuilder1 : public HouseBuilder
{
    private :
        Product1* product;
    public :
        ConcreateBuilder1(){   // Constructor
            this->product = new Product1();
            // product = new Product1();
        }
        ~ConcreateBuilder1(){  // Destructor
            delete product;
        }
        void build_Door() const {}  // idk why do i have to write this const or const override
        void build_Window() const {}
        void build_Wall() const {}
};


HouseBuilder* a = new ConcreateBuilder1();

class Director
{
    private :
        HouseBuilder* builder;
    public :
        void set_Builder(HouseBuilder* builder){
            this->builder = builder;
        }
};

void Client(Director& director)
{
    ConcreateBuilder1* builder = new ConcreateBuilder1();
    builder->build_Door();
    delete builder;
}

int main()
{
    Director* director = new Director();
    Client(*director);
    return 0;
}
