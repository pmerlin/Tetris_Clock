// *********************************************************************
// Functions for drawing on the matrix
// *********************************************************************


uint16_t static image[] = {
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0010 (16) pixels
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0020 (32) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0030 (48) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0040 (64) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0050 (80) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0060 (96) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0070 (112) pixels
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0080 (128) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0090 (144) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x00A0 (160) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0,   // 0x00B0 (176) pixels
0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x00C0 (192) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0xF800, 0xF800, 0x0000, 0xFEC0,   // 0x00D0 (208) pixels
0xFEC0, 0x0000, 0xF800, 0xF800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x00E0 (224) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0xF800, 0xF800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0xF800, 0xF800, 0x0000, 0xFEC0,   // 0x00F0 (240) pixels
0xFEC0, 0x0000, 0xF800, 0xF800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0xF800, 0xF800, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0100 (256) pixels
0x07FF, 0x07FF, 0x0000, 0x0000, 0x0000, 0xF800, 0xF800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0,   // 0x0110 (272) pixels
0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0xF800, 0xF800, 0x0000, 0x0000, 0x0000, 0x07FF, 0x07FF,   // 0x0120 (288) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0xF800, 0xF800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0130 (304) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0xF800, 0xF800, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0140 (320) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0150 (336) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0160 (352) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0170 (368) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0180 (384) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0190 (400) pixels
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x01A0 (416) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x01B0 (432) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x01C0 (448) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x01D0 (464) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x01E0 (480) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x01F0 (496) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0200 (512) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x0210 (528) pixels
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0220 (544) pixels
0x07FF, 0x07FF, 0x07FF, 0x07FF, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0230 (560) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x07FF, 0x07FF, 0x07FF, 0x07FF,   // 0x0240 (576) pixels
0x07FF, 0x07FF, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0250 (592) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x07FF, 0x07FF,   // 0x0260 (608) pixels
0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0270 (624) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000,   // 0x0280 (640) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0290 (656) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x02A0 (672) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x02B0 (688) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x02C0 (704) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000,   // 0x02D0 (720) pixels
0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x02E0 (736) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800,   // 0x02F0 (752) pixels
0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x0300 (768) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800,   // 0x0310 (784) pixels
0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x0320 (800) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800,   // 0x0330 (816) pixels
0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x0340 (832) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800,   // 0x0350 (848) pixels
0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0x0000, 0x7800, 0x7800, 0x7800, 0x7800, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x0360 (864) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000,   // 0x0370 (880) pixels
0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x0380 (896) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x0390 (912) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x03A0 (928) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x03B0 (944) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x03C0 (960) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000,   // 0x03D0 (976) pixels
0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x03E0 (992) pixels
0x0000, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0,   // 0x03F0 (1008) pixels
0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0xFEC0, 0x0000,   // 0x0400 (1024) pixels
};


// *********************************************************************
// Helper function that draws a letter at a given position of the matric in a given color
// *********************************************************************
void drawChar(String letter, uint8_t x, uint8_t y, uint16_t color)
{
  display.setTextColor(color);
  display.setCursor(x, y);
  display.print(letter);
}

// *********************************************************************
// Draws the intro screen
// *********************************************************************
void drawIntro()
{
  drawChar("T", 0, 0, myCYAN);
  delay(200);
  drawChar("e", 5, 0, myMAGENTA);
  delay(200);
  drawChar("t", 11, 0, myYELLOW);
  delay(200);
  drawChar("r", 17, 0, myGREEN);
  delay(200);
  drawChar("i", 22, 0, myBLUE);
  delay(200);
  drawChar("s", 26, 0, myRED);
  delay(200);

  drawChar("T", 6, 9, myRED);
  delay(200);
  drawChar("i", 11, 9, myWHITE);
  delay(200);
  drawChar("m", 16, 9, myCYAN);
  delay(200);
  drawChar("e", 22, 9, myMAGENTA);
  delay(200);
}

// *********************************************************************
// Draws a brick shape at a given position
// *********************************************************************
void drawShape(int blocktype, uint16_t color, int x_pos, int y_pos, int num_rot)
{
  // Square
  if (blocktype == 0)
  {
    display.drawPixel(x_pos, y_pos, color);
    display.drawPixel(x_pos + 1, y_pos, color);
    display.drawPixel(x_pos, y_pos - 1, color);
    display.drawPixel(x_pos + 1, y_pos - 1, color);
  }

  // L-Shape
  if (blocktype == 1)
  {
    if (num_rot == 0)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos, y_pos - 2, color);
    }
    if (num_rot == 1)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 2, y_pos - 1, color);
    }
    if (num_rot == 2)
    {
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 2, color);
      display.drawPixel(x_pos, y_pos - 2, color);
    }
    if (num_rot == 3)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 2, y_pos, color);
      display.drawPixel(x_pos + 2, y_pos - 1, color);
    }
  }

  // L-Shape (reverse)
  if (blocktype == 2)
  {
    if (num_rot == 0)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 2, color);
    }
    if (num_rot == 1)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 2, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
    }
    if (num_rot == 2)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos, y_pos - 2, color);
      display.drawPixel(x_pos + 1, y_pos - 2, color);
    }
    if (num_rot == 3)
    {
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 2, y_pos - 1, color);
      display.drawPixel(x_pos + 2, y_pos, color);
    }
  }

  // I-Shape
  if (blocktype == 3)
  {
    if (num_rot == 0 || num_rot == 2)
    { // Horizontal
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 2, y_pos, color);
      display.drawPixel(x_pos + 3, y_pos, color);
    }
    if (num_rot == 1 || num_rot == 3)
    { // Vertical
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos, y_pos - 2, color);
      display.drawPixel(x_pos, y_pos - 3, color);
    }
  }

  // S-Shape
  if (blocktype == 4)
  {
    if (num_rot == 0 || num_rot == 2)
    {
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos, y_pos - 2, color);
    }
    if (num_rot == 1 || num_rot == 3)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 2, y_pos - 1, color);
    }
  }

  // S-Shape (reversed)
  if (blocktype == 5)
  {
    if (num_rot == 0 || num_rot == 2)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 2, color);
    }
    if (num_rot == 1 || num_rot == 3)
    {
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 2, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
    }
  }

  // Half cross
  if (blocktype == 6)
  {
    if (num_rot == 0)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos + 2, y_pos, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
    }
    if (num_rot == 1)
    {
      display.drawPixel(x_pos, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos, y_pos - 2, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
    }
    if (num_rot == 2)
    {
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 2, y_pos - 1, color);
    }
    if (num_rot == 3)
    {
      display.drawPixel(x_pos + 1, y_pos, color);
      display.drawPixel(x_pos, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 1, color);
      display.drawPixel(x_pos + 1, y_pos - 2, color);
    }
  }
}

// *********************************************************************
// Helper function that that return the falling instruction for a given number
// *********************************************************************
fall_instr getFallinstrByNum(int num, int blockindex)
{
  if (num == 0)
  {
    return num_0[blockindex];
  }
  if (num == 1)
  {
    return num_1[blockindex];
  }
  if (num == 2)
  {
    return num_2[blockindex];
  }
  if (num == 3)
  {
    return num_3[blockindex];
  }
  if (num == 4)
  {
    return num_4[blockindex];
  }
  if (num == 5)
  {
    return num_5[blockindex];
  }
  if (num == 6)
  {
    return num_6[blockindex];
  }
  if (num == 7)
  {
    return num_7[blockindex];
  }
  if (num == 8)
  {
    return num_8[blockindex];
  }
  if (num == 9)
  {
    return num_9[blockindex];
  }
}

// *********************************************************************
// Helper function that return the number of bricks for a given number
// *********************************************************************
int getBocksizeByNum(int num)
{
  if (num == 0)
  {
    return SIZE_NUM_0;
  }
  if (num == 1)
  {
    return SIZE_NUM_1;
  }
  if (num == 2)
  {
    return SIZE_NUM_2;
  }
  if (num == 3)
  {
    return SIZE_NUM_3;
  }
  if (num == 4)
  {
    return SIZE_NUM_4;
  }
  if (num == 5)
  {
    return SIZE_NUM_5;
  }
  if (num == 6)
  {
    return SIZE_NUM_6;
  }
  if (num == 7)
  {
    return SIZE_NUM_7;
  }
  if (num == 8)
  {
    return SIZE_NUM_8;
  }
  if (num == 9)
  {
    return SIZE_NUM_9;
  }
}

// *********************************************************************
// Main function that handles the drawing of all numbers
// *********************************************************************
void drawNumbers()
{
  // For each number position
  for (int numpos = 0; numpos < SIZE_NUM_STATES; numpos++)
  {

    // Draw falling shape
    if (numstates[numpos].blockindex < getBocksizeByNum(numstates[numpos].num_to_draw))
    {
      fall_instr current_fall = getFallinstrByNum(numstates[numpos].num_to_draw, numstates[numpos].blockindex);

      // Handle variations of rotations
      uint8_t rotations = current_fall.num_rot;
      if (rotations == 1)
      {
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 2))
        {
          rotations = 0;
        }
      }
      if (rotations == 2)
      {
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 3))
        {
          rotations = 0;
        }
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 3 * 2))
        {
          rotations = 1;
        }
      }
      if (rotations == 3)
      {
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 4))
        {
          rotations = 0;
        }
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 4 * 2))
        {
          rotations = 1;
        }
        if (numstates[numpos].fallindex < (int)(current_fall.y_stop / 4 * 3))
        {
          rotations = 2;
        }
      }

      drawShape(current_fall.blocktype, current_fall.color, current_fall.x_pos + numstates[numpos].x_shift, numstates[numpos].fallindex - 1, rotations);
      numstates[numpos].fallindex++;

      if (numstates[numpos].fallindex > current_fall.y_stop)
      {
        numstates[numpos].fallindex = 0;
        numstates[numpos].blockindex++;
      }
    }

    // Draw already dropped shapes
    if (numstates[numpos].blockindex > 0)
    {
      for (int i = 0; i < numstates[numpos].blockindex; i++)
      {
        fall_instr fallen_block = getFallinstrByNum(numstates[numpos].num_to_draw, i);
        drawShape(fallen_block.blocktype, fallen_block.color, fallen_block.x_pos + numstates[numpos].x_shift, fallen_block.y_stop - 1, fallen_block.num_rot);
      }
    }
  }

  // Hour / minutes divider (blinking)
  if (seconds_odd)
  {
    display.fillRect(15, 12, 2, 2, myWHITE);
    display.fillRect(15, 8, 2, 2, myWHITE);
  }
}

// *********************************************************************
// Handler for the display refresh ticker
// *********************************************************************
void display_updater()
{
  // ISR for display refresh
  display.display(70);
}

// *********************************************************************
// Handler for the number refresh ticker
// *********************************************************************
void number_updater()
{
  display.clearDisplay();
  drawNumbers();
}