#include <kipr/wombat.h>

int main()
{
    printf("Hello World\n");
    
    enable_servos();
    
    set_servo_position (2,1377);
    msleep(100);
    
    set_servo_position (3,1300);
    
    
    motor(0,100); // 1st move out
    motor(3,100);
    msleep(3500); 
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,100);
    motor(3,0);
    msleep(750); //turn
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,100);
    motor(3,100);
    msleep(810); //slight move forward to airlock
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,-100);
    motor(3,100);
    msleep(400); //turn to hook airlock
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,-100);
    motor(3,-100);
    msleep(650);  //back up from airlock
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,100);
    motor(3,-100);
    msleep(200); //turn to unhook airlock
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,-100);
    motor(3,-100);
    msleep(300); //backwards
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,-100);
    motor(3,100);
    msleep(550); //turn
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,100);
    motor(3,100);
    msleep(2000); //forward towards cubes
    
    motor(0,-0);
    motor(3,-0);
    msleep(100); //stop
    
    motor(0,100);
    motor(3,-100);
    msleep(900); //turn
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    motor(0,100);
    motor(3,100);
    msleep(465); //forward
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    set_servo_position (2,1020);
    msleep(200);
    
    set_servo_position (3,800);
    msleep(100);
    
    motor(0,0);
    motor(3,0);
    msleep(100); //stop
    
    
    return 0;
}
