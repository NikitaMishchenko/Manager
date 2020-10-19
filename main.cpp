#include <iostream>

#include "manager.h"

int main()
{
    manager m;
    m.create_load_from_file_fishfile("name");
    manager M2;
    M2.Load_manager("manager_test1");
    M2.manage_commands();
    M2.info();
}
