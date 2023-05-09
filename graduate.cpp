#include <iostream>
class Degree {
public:
    void get_degree() {
        std::cout << "I got a degree." << std::endl;
    }
};
class Undergraduate : public Degree {
public:
    void get_degree() {
        std::cout << "I'm an undergraduate." << std::endl;
    }
};
class Postgraduate : public Degree {
public:
    void get_degree() {
        std::cout << "I'm a postgraduate." << std::endl;
    }
};
int main() 
{
    Degree deg;
    deg.get_degree();
    
    Undergraduate ug;
    ug.get_degree();
    
    Postgraduate pg;
    pg.get_degree();  
    
    return 0;
}
