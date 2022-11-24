#include "duration.h"
#include <iostream>
#include <cassert>

// File for sandboxing and trying out code
int main(int argc, char **argv)
{

    Duration dur;
    
    std::cout << dur.getDuration() << "\n";


    Duration d(5);

    assert(d.getDuration() == 5);

    d.tick();

    assert(d.getDuration() == 6);

    d.tick(3);

    assert(d.getDuration() == 9);




    return 0;
}