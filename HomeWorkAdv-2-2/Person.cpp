#include "Person.h"

Person::Person(const char* name, const char* last_name) {
    this->name = name;
    this->last_name = last_name;
}

const char* Person::get_name() {
    return last_name;
}

char* Person::get_last_name() {
    return name;
}