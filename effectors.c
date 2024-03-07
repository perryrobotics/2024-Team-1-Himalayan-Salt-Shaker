#include <kipr/wombat.h>
#include "movement.h"
#include "constants.h"
#include "sensors.h"

void FUNNEL_CLOSED()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(FUNNEL,F_CLOSED);
    msleep(750);
}


void FUNNEL_OPEN()
{
    printf("FUNNEL_IS_OPEN!!!\n");
    set_servo_position(FUNNEL,F_OPEN);
    msleep(750);
}

void ARM_DOWN()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(ARM,A_DOWN);
    msleep(750);
}


void ARM_START()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(ARM,A_START);
    msleep(750);
}


void ARM_TUBE_UP()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(ARM,A_TUBE_UP);
    msleep(750);
}


void ARM_TUBE_DOWN()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(ARM,A_TUBE_DOWN);
    msleep(750);
}

void FORK_DOWN()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(FORK, FO_DOWN);
    msleep(750);
}


void FORK_UP()
{
    printf("FUNNEL_IS_CLOSED!!!\n");
    set_servo_position(FORK, FO_UP);
    msleep(750);
}


void SHAKE_ARM(int port, int reps)
{
    int start_pos;
    int count;

    start_pos = get_servo_position(port);

    for (count = 0; count < reps; count++)
    {

        set_servo_position(port, start_pos -60);
        msleep(50);
        set_servo_position(port, start_pos +60);
        msleep(50);
    }

    set_servo_position(port,start_pos);
}


void ARM_SLOWLY(int port, int end_pos)
{
    int current_pos;
    current_pos = get_servo_position(ARM);

    if(current_pos < end_pos)
    {
        while(current_pos < end_pos)
        {
            current_pos += 30;
            set_servo_position(port, current_pos);
            msleep(100);
        }
    }
    else
    {
        while(current_pos > end_pos)
        {
            current_pos -= 30;
            set_servo_position(port, current_pos);
            msleep(100);
        }
    }
    set_servo_position(port, end_pos);
    msleep(100);
}

void FUNNEL_SLOWLY(int port, int end_pos)
{
    int current_pos;
    current_pos = get_servo_position(FUNNEL);

    if(current_pos < end_pos)
    {
        while(current_pos < end_pos)
        {
            current_pos += 30;
            set_servo_position(port, current_pos);
            msleep(100);
        }
    }
    else
    {
        while(current_pos > end_pos)
        {
            current_pos -= 30;
            set_servo_position(port, current_pos);
            msleep(100);
        }
    }
    set_servo_position(port, end_pos);
}

void FORK_SLOWLY(int port, int end_pos)
{
    int current_pos;
    current_pos = get_servo_position(port);

    if(current_pos < end_pos)
    {
        while(current_pos < end_pos)
        {
            current_pos += 30;
            set_servo_position(port, current_pos);
            msleep(100);
        }
    }
    else
    {
        while(current_pos > end_pos)
        {
            current_pos -= 30;
            set_servo_position(port, current_pos);
            msleep(100);
        }
    }
    set_servo_position(port, end_pos);
    msleep(100);
}