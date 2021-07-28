// C++ code
//
#include <Servo.h>

int pos = 0;

int i = 0;

int j = 0;

Servo servo_9;

Servo servo_8;

Servo servo_10;

Servo servo_11;

Servo servo_12;

void setup()
{
  servo_9.attach(9, 500, 2500);

  servo_8.attach(8, 500, 2500);

  servo_10.attach(10, 500, 2500);

  servo_11.attach(11, 500, 2500);

  servo_12.attach(12, 500, 2500);

}

void loop()
{
  pos = 0;
  for (pos = 0; pos <= 90; pos += 1) {
    servo_9.write(pos);
    servo_8.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);
    servo_12.write(pos);
    delay(20); // Wait for 20 millisecond(s)
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    servo_9.write(pos);
    servo_8.write(pos);
    servo_10.write(pos);
    servo_11.write(pos);
    servo_12.write(pos);
  }
}
