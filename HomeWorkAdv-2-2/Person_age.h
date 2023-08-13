#pragma once
#include "Person.h"

class Person_age : Person {
private:
	int age{};
public:
	Person_age(const char*, const char*, int);
	int get_age();
};
