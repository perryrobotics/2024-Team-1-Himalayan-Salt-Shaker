#include <kipr/wombat.h>
#include "constants.h"

void forward_to_black(int speed, int port)
{  
    mav(RM, speed);
    mav(LM, speed);

    while(analog(port) < BLACK)
    {
    }

    mav(RM, 0);
    mav(LM, 0);

}

void forward_2_black(int speed, int left_port, int right_port)
{  
    mav(RM, speed);
    mav(LM, speed);

    while(analog(left_port) < BLACK || analog(right_port) < BLACK)
    {
    }

    mav(RM, 0);
    mav(LM, 0);

}


void backward_to_black(int speed, int port)
{

    mav(RM, -speed);
    mav(LM, -speed);

    while(analog(port) < BLACK)
    {
    }

    mav(RM, 0);
    mav(LM, 0);

}




void right_to_black(int speed, int port)
{

    mav(RM, -speed);
    mav(LM, speed);

    while(analog(port) < BLACK)
    {
    }

    mav(RM, 0);
    mav(LM, 0);

}




void left_to_black(int speed, int port)
{

    mav(RM, speed);
    mav(LM, -speed);

    while(analog(port) < BLACK)
    {
    }

    mav(RM, 0);
    mav(LM, 0);

}




void line_follow_to_black(int speed, int port, int watch_port)
{

    while( analog(port) < BLACK)
    {
        if (analog(port) < BLACK)
        {
            //OVER WHITE
            printf("I SEE WHITE!!!\n");
            mav(LM, speed+200);
            mav(RM,speed);
        }
        else
        {
            printf("I SEE BLACK!!!\n");
            mav(LM, speed);
            mav(RM, speed+150);
        }
    }
    //end while
    mav(LM, 0);
    mav(RM, 0);
}




void line_follow_ticks(int speed, int port, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);

    while( gmpc(LM) < ticks)
    {
        if (analog(port) < BLACK)
        {
            //OVER WHITE
            printf("I SEE WHITE!!!\n");
            mav(LM, speed+200);
            mav(RM,speed);
        }
        else
        {
            printf("I SEE BLACK!!!\n");
            mav(LM, speed);
            mav(RM, speed+300);
        }
    }
    mav(LM, 0);
    mav(RM, 0);
}





void line_follow_2_black(int speed, int port, int watch_port)
{

    while(analog(watch_port) < BLACK)
    {
        if (analog(watch_port) < BLACK)
        {
            if (analog(port) < BLACK)
            {
                //OVER WHITE
                printf("I SEE WHITE!!!\n");
                mav(LM, speed+200);
                mav(RM,speed);
            }
            else
            {
                printf("I SEE BLACK!!!\n");
                mav(LM, speed);
                mav(RM, speed+100);
            }
        }
        else
        {
            printf("I SEE BLACK!!!\n");
            mav(LM,0);
            mav(RM,0);
        }
    }
}    



void line_follow_both_ticks(int speed, int left_port, int right_port, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);

    while( gmpc(LM) < ticks)
    {
        if (analog(right_port) > BLACK)
        {
            mav(LM, speed+200);
            mav(RM,speed);
        }
        else if (analog(left_port) > BLACK)
        {
            //OVER BLACK
            mav(RM, speed+200);
            mav(LM,speed);
        }            
        else
        {
            mav(LM, speed);
            mav(RM, speed);
        }
    }
    mav(LM, 0);
    mav(RM, 0);
}

void line_follow_backward_both_ticks(int speed, int left_port, int right_port, int ticks)
{
    msleep(100);
    cmpc(LM);
    cmpc(RM);
    msleep(100);

    while( gmpc(LM) < ticks)
    {
        if (analog(right_port) > BLACK)
        {
            mav(LM, -speed-200);
            mav(RM, -speed);
        }
        else if (analog(left_port) > BLACK)
        {
            //OVER BLACK
            mav(RM, -speed-200);
            mav(LM, -speed);
        }            
        else
        {
            mav(LM, -speed);
            mav(RM, -speed);
        }
    }
    mav(LM, 0);
    mav(RM, 0);
}


void align_to_black(int speed)
{
    
    
    mav(LM, speed);
    mav(RM, speed);
    
    while( analog(LEFT_LINE) < BLACK || analog(RIGHT_LINE) < BLACK)
    {
    }
    mav(LM, 0);
    mav(RM, 0);
}
    

    
    
    
    
    
    
