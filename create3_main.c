#include <kipr/wombat.h>

int main()
{
    create3_connect();
    
    create3_drive_straight(0.9, 0.90);  //get two rocks
    
   
    
    create3_drive_straight(0.4, 0.90);
    
    create3_rotate_degrees(20, 45);
    
    create3_rotate_degrees(28, 45);
    
    create3_drive_straight(0.7, 0.90);
    
   create3_drive_straight(-0.2, 0.90);
    
    create3_rotate_degrees(120, 45);
    
    create3_drive_straight(0.3, 0.20);
    
    create3_rotate_degrees(-20, 45);
    
    create3_drive_straight(-0.3, 90);
    
    create3_rotate_degrees(110, 45);
    
    create3_drive_straight(0.2, 90);
    
    
    
   
    
    
    create3_wait();
    
    return 0;
}
