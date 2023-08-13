#pragma once

class Person {
private:
    const char* name{};
    const char* last_name{};
public:
    Person(const char*, const char*);

    const char* get_name()

    const char* get_last_name();
};