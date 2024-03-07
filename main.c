#include <kipr/wombat.h>
#include "movement.h"
#include "constants.h"
#include "sensors.h"
#include "effectors.h"

int main()
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
    forward(1500, 500);
    left_to_black(800, RIGHT_LINE);
    //GRABBED 1ST POM PILE
    
    line_follow_both_ticks(1000 ,LEFT_LINE , RIGHT_LINE, 4000);
    forward(1500, 2000);
    FORK_UP();
    //DROP OFF POMS + ROCK
    
    backward(1000, 1900);
    right(1300, 1075);
    forward(1500, 1000);
    FORK_DOWN();
    left(1000,1500);  //MOVE ROCK OUT OF WAY
    forward(1000,1500);
    FORK_UP();
    backward(1000,1400);
    right(1000,1375); // TURN BACK TO PIPE
    backward(1000, 600);
    ARM_SLOWLY(ARM, A_DOWN);
    forward(200,200);
    backward(1000, 50);
    msleep(4000);
    SHAKE_ARM(ARM, 10);
    //PURPLE POOL NOODLE AQUIRED
    //WAIT ON BIG ROBOT
    //msleep(30000);
    
    backward(1500, 300);
    left(1200,630);
    forward(1000, 500);
    forward_to_black(1200, LEFT_LINE);
    FORK_SLOWLY(FORK, FO_DOWN);
    ARM_SLOWLY(ARM, A_TUBE);
    //align on pipe
    
    forward(1000, 700);
    left(1000, 1300);
    forward(1000, 100);
    FORK_UP();
    backward(1000, 800);
    
    //get over tube
    forward(500, 300);
    right(1000, 950);
    forward(1000, 3500); // HIT LAVA TUBE AREA
    backward(1000,500);
    left(1000, DEG_90-100);
    msleep(500);
    backward(1000,1000);
    forward(500, 200);
    right(1000,DEG_90);
    forward(1000,1500);
    // over the lava tubes
    
    backward(1000,50);
    right(700,60);
    msleep(500);
    //DROP PURPLE POOL NOODLE
    FUNNEL_OPEN();
    msleep(1000);
    SHAKE_ARM(ARM, 10);
    msleep(2000);
    
    //ALIGN FRISBEE
    FUNNEL_CLOSED();
    //ARM_SLOWLY(ARM, A_TUBE_UP);
    msleep(100);
    //forward(50, 100);
    //left(50,20);  // position over lava tube
    ARM_SLOWLY(ARM, A_TUBE_DOWN);
    backward(200, 570);
    ARM_SLOWLY(ARM, 1000);
    forward(1500, 1000);
    printf("DID_IT_WOOOOOOORK????\n");
    msleep(1000);
    backward_to_black(1500, RIGHT_LINE);
    backward(1500, 200);
    left(1500, DEG_90-100);
    backward(1500, 1000); //ALIGN ON PIPE
    ARM_SLOWLY(ARM, A_HIGH);
    forward(1500, 100);
    //align to tape
    forward_to_black(1000, LEFT_LINE);
    left_to_black(1000, RIGHT_LINE);
    right(1000,30);
    forward(1000,500);
    //left(1500, 50);
    //forward(1500, 4900);
    right(1500, 500);
    //forward(1500, 500);
    //HIT CUBE
    
    /*backward(1000, 2000);
    left(1000, 375);
    forward(1000, 300);
    left(1000, 600);
    backward(1500, 300);
    //ALIGN TO SCCOP
    
    forward(1000, 200);
    left(1500, 100);
    FORK_DOWN();
    forward(1000, 1000);
    forward_to_black(1000, LEFT_LINE);
    forward(1000, 700);
    backward_to_black(1500, LEFT_LINE);
    //DROP OFF PILE
    
    backward(1000, 750);
    left(1000, 900);
    forward_2_black(1000, LEFT_LINE, RIGHT_LINE);
    line_follow_both_ticks(1000 ,LEFT_LINE , RIGHT_LINE, 2000);
    *///GO TO AIR LOCK
    
    /*
//  SCORED THE FRISBEE
    //Almost finished, code to get from tubes to airlock 
    forward(1000,850);
    ARM_SLOWLY(ARM, A_DOWN);
    backward_to_black(1500, LEFT_LINE);
    backward(1000, 1500);
    backward_to_black(1500, RIGHT_LINE);
	backward(1300,4000);    
    
    // HIT PIPE IN BACK OF START BOX
    forward_to_black(1300, RIGHT_LINE);
    forward(1300,3000);
    left(1300,DEG_90-200);
    
    backward(750, 850);
    forward_to_black(1300, RIGHT_LINE);
    forward(1000, 2600);
    left(1000, 1300);
    backward(200,2000); 
    //COMMMENT OUT THIS CODE AFTER IT IS BACK
    left_to_black(1000, LEFT_LINE);
    left(1000,370);
    forward(1000, 500);
    forward_to_black(1000, LEFT_LINE);
    forward(1000, 1800);
    right(1000,1300); 
    //Open Airlock 
    backward_to_black(1000, LEFT_LINE);
    right_to_black(1000, RIGHT_LINE);
    left(1000, 10);
    backward(1000, 1740);
    msleep(1000);
    right(600,250);
    msleep(1000);
    backward(500,130);
    msleep(1000);
    right(600,500);
    msleep(1000);
    forward(1000, 300);
    right(1000, 200);
    forward(1000, 800);

    //FUNNEL_CLOSED();
    */return 0;
}
