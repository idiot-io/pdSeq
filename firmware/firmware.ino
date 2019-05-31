

#include <OSCBundle.h>

#include <OSCBoards.h>
#include <SLIPEncodedSerial.h>
SLIPEncodedSerial SLIPSerial(Serial);


#include "oscFuncs.h"

void setup()
{
  SLIPSerial.begin(115200);
  
}



void loop()
{
  //declare OSC bundle comming include
  OSCBundle bundleIN;

  int size;

  while (!SLIPSerial.endofPacket())
    if ((size = SLIPSerial.available()) > 0)
    {
      while (size--)
        bundleIN.fill(SLIPSerial.read());
    }

  bundleIN.route("/ch1", ch1);
  bundleIN.route("/ch2", ch2);
  bundleIN.route("/ch3", ch3);
  bundleIN.route("/ch4", ch4);
  bundleIN.route("/ch5", ch5);
  bundleIN.route("/ch6", ch6);
  bundleIN.route("/ch7", ch7);
  bundleIN.route("/ch8", ch8);
  bundleIN.route("/ch9", ch9);
  bundleIN.route("/ch10", ch10);
}
