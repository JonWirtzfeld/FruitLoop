//
// Fruit.hpp
//

#include <iostream>

using namespace std;

class Fruit {
    public:
        Fruit() : type("fruit") {}
        Fruit(string typeInput) : type(typeInput) {}

        void Identify() 
        {
            printf("I am a %s.\n", type.c_str());
        }

        string type;
};


class Banana : public Fruit {
    public:
        Banana()
        : Fruit("bannana")    
        {
        }
};

class Tangerine : public Fruit {
    public:
        Tangerine()
        : Fruit("tangerine")    
        {
        }
};

class Pear : public Fruit {
    public:
        Pear()
        : Fruit("pear")    
        {
        }
};