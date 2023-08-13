#include "Person_age.h"

Person_age::Person_age(const char* name, const char* last_name, int age) : Person(name, last_name) {
	this->age = age;
}

//int Person_age::get_age() {
//	return age;
//}
