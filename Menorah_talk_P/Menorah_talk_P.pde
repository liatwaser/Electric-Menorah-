import ddf.minim.*;
AudioPlayer player;
Minim minim;//audio context
//load the serial library fot Processing 
import processing.serial.*;
// instance of a serial class
Serial port;

void setup() {
   minim = new Minim(this);
   player = minim.loadFile("Adam_Sandler-The_Chanukah_Song_Part_3_Movie_Version.mp3", 2048);
  size( 100, 100);
  // list all the available serial ports 
  println(Serial.list());
  //open the port that the Arduino is connected to
  port = new Serial(this, Serial.list() [9], 9600);
}

void draw()
{
  //start looking to see what is pressed, and send a value over the serial port
  if (keyPressed) {
    if (key == 'W') {
      port.write('W');
    }
    if (key == 'A') {
      port.write ('A');
    }
    if (key == 'S') {
      port.write ('S');
    }
    if (key == 'D') {
      port.write ('D');
    }
    if (key == 'F') {
      port.write ('F');
    }
    if (key == 'G') {
      port.write ('G');
    }
    if (key == '1') {
      port.write ('1');
    }
    if (key == '2') {
      port.write ('2');
    }
    if (key == '3') {
      port.write ('3');
    }
    if (key == '4') {
      port.write ('4');
    }
    if (key == '5') {
        player.play();
    }
  }
}

