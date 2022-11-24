#include <cassert>

class Duration {
private:
int time = 0;
int alarm = 0; 
bool alarmHasBeenSet = false;



public:
 
 Duration(){
    time = 0;
 }
Duration(int t){
    assert (t>=0);
    time = t;
 } 
 bool tick(){
    time ++;
    if (time >= alarm){
        return 1;
    }
    else
    return 0;
 } 
bool tick (int b){
    time = time +b;
    if (time >= alarm){
        return 1;
    }
    else
    return 0;
 } 
bool checkAndUpdateAlarm();
void setAlarm(int t){
    assert(t > time);
    alarmHasBeenSet = true;
    alarm = t;
}

int getDuration();



};