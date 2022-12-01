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
    return checkAndUpdateAlarm();
 } 
bool tick (int b){
    time = time +b;
    return checkAndUpdateAlarm();
 } 


bool checkAndUpdateAlarm(){
    if (alarmHasBeenSet && time >= alarm) {
        alarm = 0;
        alarmHasBeenSet = false;  
     return true;  
    } 

    return false;
}


void setAlarm(int t){
    assert(t > time);
    alarmHasBeenSet = true;
    alarm = t;
}

int getDuration();



};
