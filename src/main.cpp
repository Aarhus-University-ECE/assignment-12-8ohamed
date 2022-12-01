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

    d.setAlarm(10);

    assert(d.tick() == true); // 10 should fire alarm
    assert(d.tick() == false); // 11 should NOT alarm

    Duration d2(6);

    d2.setAlarm(10);

    assert(d2.tick(4) == true);
    assert(d2.tick(2) == false);








    return 0;
}
