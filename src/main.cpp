#include <iostream>
#include "../include/app.hpp"


using namespace std;

int main()
{
    App app;
    try
    {
        return app.exec();
    }
    catch (...)
    {
        return EXIT_FAILURE;
    }

    return 0;
}