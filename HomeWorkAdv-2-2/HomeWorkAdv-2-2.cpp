#include <iostream>
#include "Person_age.h"

/*Синтаксические ошибки:
1) Пропущена точка с запятой в объявлении метода get_name в классе Person.
2) В определении метода get_last_name в классе Person неверно указан возвращаемый тип.

Семантическая ошибка:
1) Метод get_name возвращает значение поля last_name, а метод get_last_name значение поля name.

Ошибка линковки:
1) Отсутствует определения метода get_age в классе Person_age.*/

int main()
{
    Person p("Ivan", "Kos");
    Person_age p_a("Ivan", "Kos", 23);
    std::cout << p.get_name() << " " << p.get_last_name() << " " << p_a.get_age();
}
