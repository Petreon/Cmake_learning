#ifndef DOG_H
#define DOG_H

#include <iostream>
#include <string>

class Dog {

public:
    explicit Dog(std::string name_param);
    Dog() = default;
    ~Dog();

    std::string get_name() const;

    void set_dog_name(const std::string &name);

    void print_info();

private:
    std::string dog_name {"Puffy"}; // default name if no one name is input in constructor, but you can alterate after witf set_dog_name
};



#endif