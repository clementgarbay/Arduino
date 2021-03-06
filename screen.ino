#include "U8glib.h"
 
U8GLIB_NHD_C12864 u8g(13, 11, 10, 9, 8);    // SPI Com: SCK = 13, MOSI = 11, CS = 10, CD = 9, RST = 8
 
 int y = 20;
 
void draw(void) {
  u8g.setFont(u8g_font_unifont);
  u8g.drawStr(0, y++ % 64, "Coucou Nanou <3");
}
 
void setup(void) {
  u8g.setContrast(0); // Config the contrast to the best effect
  u8g.setRot180();// rotate screen, if required
  
  // assign default color value
  if ( u8g.getMode() == U8G_MODE_R3G3B2 ) {
    u8g.setColorIndex(255);     // white
  }
  else if ( u8g.getMode() == U8G_MODE_GRAY2BIT ) {
    u8g.setColorIndex(3);         // max intensity
  }
  else if ( u8g.getMode() == U8G_MODE_BW ) {
    u8g.setColorIndex(1);         // pixel on
  }
  else if ( u8g.getMode() == U8G_MODE_HICOLOR ) {
    u8g.setHiColorByRGB(255,255,255);
  }
}
 
void loop(void) {
  // picture loop
  u8g.firstPage();  
  do {
    draw();
  } 
  while( u8g.nextPage() );
 
  // rebuild the picture after some delay
  delay(500);
}
