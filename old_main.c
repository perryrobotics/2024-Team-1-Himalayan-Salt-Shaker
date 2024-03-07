#include <kipr/wombat.h>
#include "movement.h"
#include "constants.h"
#include "sensors.h"
#include "effectors.h"

int old_main()
{
    printf("Hello World\n");
    enable_servos();
    FUNNEL_SLOWLY(FUNNEL, F_CLOSED);
    ARM_SLOWLY(ARM, A_START);
    FORK_SLOWLY(FORK, FO_UP);
    //IN START POSITION
    
    forward_to_black(1250, RIGHT_LINE);
    forward(1500,1850);
    right(1500, 780);
    FORK_DOWN();
    //TURN TO BLACK
    
    forward_to_black(1500, LEFT_LINE);
    forward(1500, 700);
    FORK_UP();
    left_to_black(1500, RIGHT_LINE);
    //GRABBED 1ST POM PILE
    
    FORK_DOWN();
    line_follow_both_ticks(800 ,LEFT_LINE , RIGHT_LINE, 1300);
    left(900, 950);
    forward(1300, 400);
    FORK_UP();
    backward(1300, 400);
    right(900, 950);
    //DROPPED OFF POMS
   
    FORK_DOWN();
    //ON BLACK TAPE
    line_follow_both_ticks(1500 ,LEFT_LINE , RIGHT_LINE, 1000);
    forward(1500, 3500);
    FORK_UP();
    
    //BACK TO BLACK
    backward(1000, 1900);
    right(1300, 1000);
    forward(1000, 1000);
    backward(1300, 600);
    FORK_DOWN();
    ARM_SLOWLY(ARM, A_DOWN);
    forward(200,400);
    msleep(4000);
    SHAKE_ARM(ARM, 10);
    //PURPLE POOL NOODLE AQUIRED
    //WAIT ON BIG ROBOT
    //msleep(30000);
    
    backward(1500, 200);
    left(1200,700);
    forward(1000, 600);
    right(1500, 200);
    forward_to_black(1200, LEFT_LINE);
   
    //align on pipe
    forward(1000, 700);
    left(1000, 1300);
    backward(1000, 650);
    
    //get over tube
    forward(500, 200);
    right(1000, 1100);
    forward(1000, 3025);
    
    backward(1000,50);
    right(1000,35);
    
    //DROP PURPLE POOL NOODLE
    FUNNEL_OPEN();
    msleep(1000);
    SHAKE_ARM(ARM, 30);
    msleep(2000);
    
    //ALIGN FRISBEE
    FUNNEL_CLOSED();
    //ARM_SLOWLY(ARM, A_TUBE_UP);
    msleep(100);
    //forward(50, 100);
    left(50,25);  // position over lava tube
    ARM_SLOWLY(ARM, A_TUBE_DOWN);
    backward(50, 570);
    ARM_SLOWLY(ARM, 1000);
    printf("DID_IT_WOOOOOOORK????\n");
    msleep(1000);
    
//  SCORED THE FRISBEE 
    forward(1000,850);
    ARM_SLOWLY(ARM, A_DOWN);
    return 0;
}

