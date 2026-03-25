#include <iostream>
#include <string>

class GeneratorCore233 {
private:
    std::string name;
    int value;
    
public:
    GeneratorCore233(std::string n, int v) : name(n), value(v) {}
    
    void display() {
        std::cout << "Name: " << name << ", Value: " << value << std::endl;
    }
};

int main() {
    GeneratorCore233 obj("Test", 42);
    obj.display();
    return 0;
}