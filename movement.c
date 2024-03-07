#include <kipr/wombat.h>
#include "constants.h"

void forward(int speed, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);
    mav(LM, speed);
    mav(RM, speed);
    while(gmpc(LM) <= ticks)
    {
    }
    mav(LM,0);
    mav(RM,0);
    msleep(100);
}



void backward(int speed, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);
    mav(LM, -speed);
    mav(RM, -speed);
    while(gmpc(LM) >= -ticks)
    {
    }
    mav(LM,0);
    mav(RM,0);
    msleep(100);
}



void right(int speed, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);
    mav(LM, speed);
    mav(RM, -speed);
    while(gmpc(LM) <= ticks)
    {
    }
    mav(LM,0);
    mav(RM,0);
    msleep(100);
}



void left(int speed, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);
    mav(LM, -speed);
    mav(RM, speed);
    while(gmpc(LM) >= -ticks)
    {
    }
    mav(LM,0);
    mav(RM,0);
    msleep(100);
}

void waggle_back(int reps)
{
    int count;
    
    for(count = 0;count < reps; count++)
    {
        motor(LM, -60);
        motor(RM,-30);
        msleep(100);
        
        motor(LM, -30);
        motor(RM,-60);
        msleep(100);
    }
    
    motor(LM, 0);
    motor(RM, 0);
}
        
void waggle(int reps)
{
    int count;
    
    for(count = 0;count < reps; count++)
    {
        motor(LM, -25);
        motor(RM,25);
        msleep(150);
        
        motor(LM, 25);
        motor(RM, -25);
        msleep(150);
    }
    
    motor(LM, 0);
    motor(RM, 0);
}




