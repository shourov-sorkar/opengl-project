#include<windows.h>
#include<stdio.h>
#include <GL/glut.h>

float i = 0.0;
float m = 0.0;

int c = 1;
int w = 0;

void draw_pixel(GLint cx, GLint cy)
{
 glBegin(GL_POINTS);
 glVertex2i(cx, cy);
 glEnd();
}
void drawTringle(int x, int y, int x1, int y1, int x2, int y2, float r, float g, float b) {
 glBegin(GL_TRIANGLES);
 glColor3f(r, g, b);
 glVertex2f(x, y);
 glVertex2f(x1, y1);
 glVertex2f(x2, y2);
 glEnd();
}
void drawBOX(int x, int x1, int y, int y1, float r, float g, float b) {
 glBegin(GL_POLYGON);
 glColor3f(r, g, b);
 glVertex2f(x, y);
 glVertex2f(x, y1);
 glVertex2f(x1, y1);
 glVertex2f(x1, y);
 glEnd();
}
void plotpixels(GLint h, GLint k, GLint x, GLint y)
{
 draw_pixel(x + h, y + k);
 draw_pixel(-x + h, y + k);
 draw_pixel(x + h, -y + k);
 draw_pixel(-x + h, -y + k);
 draw_pixel(y + h, x + k);
 draw_pixel(-y + h, x + k);
 draw_pixel(y + h, -x + k);
 draw_pixel(-y + h, -x + k);
}
void draw_circle(GLint h, GLint k, GLint r)
{
 GLint d = 1 - r, x = 0, y = r;
 while (y>x)
 {
  plotpixels(h, k, x, y);
  if (d<0) d += 2 * x + 3;
  else
  {
   d += 2 * (x - y) + 5;
   --y;
  }
  ++x;
 }
 plotpixels(h, k, x, y);
}

void draw_object()
{
 glClear(GL_COLOR_BUFFER_BIT);

 glColor3f((1.0f / 255) * 30, (1.0f / 255) * 144, (1.0f / 255) * 255);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(0, 820);
 glVertex2i(0, 80);
 glVertex2i(1180, 170);
 glVertex2i(1180, 620);
 glEnd();
 glColor3f(1.0f, 0.99f, 0.0f);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(0, 290);
 glVertex2i(0, 80);
 glVertex2i(1180, 170);
 glVertex2i(1180, 290);
 glEnd();

 glBegin(GL_TRIANGLES);
 glColor3f(0.0, 1.0, 0.0);
 glVertex2i(150, 220);
 glVertex2i(60, 220);
 glVertex2i(110, 290);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.0, 0.5);
 glVertex2i(100, 180);
 glVertex2i(100, 220);
 glVertex2i(110, 220);
 glVertex2i(110, 180);

 glEnd();

 glBegin(GL_POLYGON);
 glColor3f(0.0, 0.0, 0.5);
 glVertex2i(260, 280);
 glVertex2i(220, 320);
 glVertex2i(230, 335);
 glVertex2i(340, 340);
 glVertex2i(375, 300);

 glEnd();

 glBegin(GL_QUADS);
 glColor3f(0.0, 0.0, 0.5);
 glVertex2i(250, 390);
 glVertex2i(250, 400);
 glVertex2i(320, 400);
 glVertex2i(320, 390);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(250, 385);
 glVertex2i(250, 395);
 glVertex2i(320, 395);
 glVertex2i(320, 385);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.4, 0.4, 0.4);
 glVertex2i(250, 380);
 glVertex2i(250, 390);
 glVertex2i(320, 390);
 glVertex2i(320, 380);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(250, 375);
 glVertex2i(250, 385);
 glVertex2i(320, 385);
 glVertex2i(320, 375);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.4, 0.4, 0.4);
 glVertex2i(250, 370);
 glVertex2i(250, 380);
 glVertex2i(320, 380);
 glVertex2i(320, 370);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(250, 365);
 glVertex2i(250, 375);
 glVertex2i(320, 375);
 glVertex2i(320, 365);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.4, 0.4, 0.4);
 glVertex2i(250, 360);
 glVertex2i(250, 370);
 glVertex2i(320, 370);
 glVertex2i(320, 360);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(250, 355);
 glVertex2i(250, 365);
 glVertex2i(320, 365);
 glVertex2i(320, 355);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.4, 0.4, 0.4);
 glVertex2i(250, 350);
 glVertex2i(250, 360);
 glVertex2i(320, 360);
 glVertex2i(320, 350);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(250, 345);
 glVertex2i(250, 355);
 glVertex2i(320, 355);
 glVertex2i(320, 345);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.4, 0.4, 0.4);
 glVertex2i(250, 340);
 glVertex2i(250, 350);
 glVertex2i(320, 350);
 glVertex2i(320, 340);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(250, 335);
 glVertex2i(250, 345);
 glVertex2i(320, 345);
 glVertex2i(320, 335);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 1.0, 1.0);
 glVertex2i(250, 330);
 glVertex2i(250, 340);
 glVertex2i(320, 340);
 glVertex2i(320, 330);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.0, 0.0);
 glVertex2i(270, 325);
 glVertex2i(270, 330);
 glVertex2i(300, 330);
 glVertex2i(300, 325);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 275);
 glVertex2i(260, 280);
 glVertex2i(375, 300);
 glVertex2i(375, 295);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 270);
 glVertex2i(260, 275);
 glVertex2i(375, 295);
 glVertex2i(375, 290);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 265);
 glVertex2i(260, 270);
 glVertex2i(375, 290);
 glVertex2i(375, 285);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(260, 260);
 glVertex2i(260, 265);
 glVertex2i(375, 285);
 glVertex2i(375, 280);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 255);
 glVertex2i(260, 260);
 glVertex2i(375, 280);
 glVertex2i(375, 275);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 250);
 glVertex2i(260, 255);
 glVertex2i(375, 275);
 glVertex2i(375, 270);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 245);
 glVertex2i(260, 250);
 glVertex2i(375, 270);
 glVertex2i(375, 265);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(260, 240);
 glVertex2i(260, 245);
 glVertex2i(375, 265);
 glVertex2i(375, 260);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 235);
 glVertex2i(260, 240);
 glVertex2i(375, 260);
 glVertex2i(375, 255);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 230);
 glVertex2i(260, 235);
 glVertex2i(375, 255);
 glVertex2i(375, 250);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 0.5, 0.5);
 glVertex2i(260, 225);
 glVertex2i(260, 230);
 glVertex2i(375, 250);
 glVertex2i(375, 245);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(260, 220);
 glVertex2i(260, 225);
 glVertex2i(375, 245);
 glVertex2i(375, 240);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.0, 0.5);
 glVertex2i(260, 215);
 glVertex2i(260, 220);
 glVertex2i(375, 240);
 glVertex2i(375, 235);
 glEnd();

 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 315);
 glVertex2i(220, 320);
 glVertex2i(260, 280);
 glVertex2i(260, 275);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 310);
 glVertex2i(220, 315);
 glVertex2i(260, 275);
 glVertex2i(260, 270);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 305);
 glVertex2i(220, 310);
 glVertex2i(260, 270);
 glVertex2i(260, 265);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(220, 300);
 glVertex2i(220, 305);
 glVertex2i(260, 265);
 glVertex2i(260, 260);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 295);
 glVertex2i(220, 300);
 glVertex2i(260, 260);
 glVertex2i(260, 255);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 290);
 glVertex2i(220, 295);
 glVertex2i(260, 255);
 glVertex2i(260, 250);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 285);
 glVertex2i(220, 290);
 glVertex2i(260, 250);
 glVertex2i(260, 245);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(220, 280);
 glVertex2i(220, 285);
 glVertex2i(260, 245);
 glVertex2i(260, 240);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 275);
 glVertex2i(220, 280);
 glVertex2i(260, 240);
 glVertex2i(260, 235);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 270);
 glVertex2i(220, 275);
 glVertex2i(260, 235);
 glVertex2i(260, 230);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5f, 0.0f, 1.0f);
 glVertex2i(220, 265);
 glVertex2i(220, 270);
 glVertex2i(260, 230);
 glVertex2i(260, 225);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 240, (1.0f / 255) * 255, (1.0f / 255) * 255);
 glVertex2i(220, 260);
 glVertex2i(220, 265);
 glVertex2i(260, 225);
 glVertex2i(260, 220);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.5, 0.0, 0.5);
 glVertex2i(220, 255);
 glVertex2i(220, 260);
 glVertex2i(260, 220);
 glVertex2i(260, 215);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 1.0, 0.0);
 glVertex2i(420, 245);
 glVertex2i(420, 250);
 glVertex2i(550, 200);
 glVertex2i(550, 195);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f(0.0, 1.0, 0.0);
 glVertex2i(420, 240);
 glVertex2i(420, 245);
 glVertex2i(550, 195);
 glVertex2i(550, 190);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 255, (1.0f / 255) * 228, (1.0f / 255) * 225);
 glVertex2i(420, 235);
 glVertex2i(420, 240);
 glVertex2i(550, 190);
 glVertex2i(550, 185);
 glEnd();

 glBegin(GL_QUADS);
 glColor3f(0.0, 1.0, 0.0);
 glVertex2i(375, 255);
 glVertex2i(375, 265);
 glVertex2i(420, 250);
 glVertex2i(420, 240);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 148, (1.0f / 255) * 244, (1.0f / 255) * 192);
 glVertex2i(375, 250);
 glVertex2i(375, 260);
 glVertex2i(420, 245);
 glVertex2i(420, 235);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 255, (1.0f / 255) * 255, (1.0f / 255) * 240);
 glVertex2i(155, 200);
 glVertex2i(165, 220);
 glVertex2i(220, 265);
 glVertex2i(220, 255);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 148, (1.0f / 255) * 244, (1.0f / 255) * 192);
 glVertex2i(155, 195);
 glVertex2i(165, 215);
 glVertex2i(220, 260);
 glVertex2i(220, 250);
 glEnd();
 glBegin(GL_QUADS);
 glColor3f((1.0f / 255) * 255, (1.0f / 255) * 255, (1.0f / 255) * 240);
 glVertex2i(285, 150);
 glVertex2i(285, 180);
 glVertex2i(300, 275);
 glVertex2i(300, 245);
 glEnd();
 glColor3ub(0, 0, 0);
 glBegin(GL_POLYGON);
 glVertex2f(370 - i, 160);
 glVertex2f(370 - i, 130);
 glVertex2f(385 - i, 130);
 glVertex2f(385 - i, 160);
 glEnd();

 for (int l = 0; l <= 5; l++)
 {
  glColor3ub(153, 102, 0);
  draw_circle(378 - i, 160, l);
 }
 glColor3ub(0, 0, 0);
 glBegin(GL_POLYGON);
 glVertex2f(490 - i, 160);
 glVertex2f(490 - i, 130);
 glVertex2f(500 - i, 130);
 glVertex2f(500 - i, 160);
 glEnd();

 for (int l = 0; l <= 5; l++)
 {
  glColor3ub(153, 102, 0);
  draw_circle(495 - i, 160, l);
 }
 glColor3f(0.1, 0.1, 0.1);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(0, 80);
 glVertex2i(650, 80);
 glVertex2i(650, 130);
 glVertex2i(0, 130);
 glEnd();

 glColor3f(1.0, 1.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(50, 103);
 glVertex2i(100, 103);
 glVertex2i(100, 106);
 glVertex2i(50, 106);
 glEnd();

 glColor3f(1.0, 1.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(150, 103);
 glVertex2i(200, 103);
 glVertex2i(200, 106);
 glVertex2i(150, 106);
 glEnd();

 glColor3f(1.0, 1.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(250, 103);
 glVertex2i(300, 103);
 glVertex2i(300, 106);
 glVertex2i(250, 106);
 glEnd();

 glColor3f(1.0, 1.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(350, 103);
 glVertex2i(400, 103);
 glVertex2i(400, 106);
 glVertex2i(350, 106);
 glEnd();

 glColor3f(1.0, 1.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(450, 103);
 glVertex2i(500, 103);
 glVertex2i(500, 106);
 glVertex2i(450, 106);
 glEnd();

 glColor3f(1.0, 1.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(550, 103);
 glVertex2i(600, 103);
 glVertex2i(600, 106);
 glVertex2i(550, 106);
 glEnd();

 glColor3f(0.0, 0.0, 0.3);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(550 + i, 120);
 glVertex2i(635 + i, 120);
 glVertex2i(635 + i, 140);
 glVertex2i(550 + i, 140);
 glEnd();

 glColor3f(0.0, 0.0, 1.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(565 + i, 140);
 glVertex2i(625 + i, 140);
 glVertex2i(615 + i, 155);
 glVertex2i(575 + i, 155);
 glEnd();

 glColor3f(0.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(569 + i, 143);
 glVertex2i(621 + i, 143);
 glVertex2i(611 + i, 152);
 glVertex2i(579 + i, 152);
 glEnd();

 glColor3f(1.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(597 + i, 140);
 glVertex2i(593 + i, 140);
 glVertex2i(593 + i, 155);
 glVertex2i(597 + i, 155);
 glEnd();

 glColor3f(0.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(570 + i, 125);
 glVertex2i(580 + i, 125);
 glVertex2i(580 + i, 115);
 glVertex2i(570 + i, 115);
 glEnd();

 glColor3f(0.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(610 + i, 125);
 glVertex2i(620 + i, 125);
 glVertex2i(620 + i, 115);
 glVertex2i(610 + i, 115);
 glEnd();

 glColor3f(0.0, 0.0, 0.3);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(95 + i, 120);
 glVertex2i(180 + i, 120);
 glVertex2i(180 + i, 140);
 glVertex2i(95 + i, 140);
 glEnd();
 glColor3f(1.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(110 + i, 140);
 glVertex2i(170 + i, 140);
 glVertex2i(160 + i, 155);
 glVertex2i(120 + i, 155);
 glEnd();
 glColor3f(0.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(114 + i, 143);
 glVertex2i(166 + i, 143);
 glVertex2i(156 + i, 152);
 glVertex2i(124 + i, 152);
 glEnd();

 glColor3f(1.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(138 + i, 140);
 glVertex2i(142 + i, 140);
 glVertex2i(142 + i, 155);
 glVertex2i(138 + i, 155);
 glEnd();

 //chaka..1
 glColor3f(0.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(115 + i, 125);
 glVertex2i(125 + i, 125);
 glVertex2i(125 + i, 115);
 glVertex2i(115 + i, 115);
 glEnd();

 //chaka..2
 glColor3f(0.0, 0.0, 0.0);
 glPointSize(4.0);
 glBegin(GL_QUADS);
 glVertex2i(155 + i, 125);
 glVertex2i(165 + i, 125);
 glVertex2i(165 + i, 115);
 glVertex2i(155 + i, 115);
 glEnd();
 //--------------------------- tree
 glColor3f(0.9, 0.2, 0.0);
 glBegin(GL_POLYGON);
 glVertex2f(400, 260);
 glVertex2f(400, 330);
 glVertex2f(415, 330);
 glVertex2f(415, 260);
 glEnd();

 for (int l = 0; l <= 25; l++)
 {
  glColor3f(0.0, 0.5, 0.0);
  draw_circle(400, 330, l);
  draw_circle(420, 330, l);
 }

 for (int l = 0; l <= 20; l++)
 {
  glColor3f(0.0, 0.5, 0.0);
  draw_circle(410, 365, l);
 }
 //---------------------------- tree 2
 glColor3f(0.9, 0.2, 0.0);
 glBegin(GL_POLYGON);
 glVertex2f(170, 260);
 glVertex2f(170, 330);
 glVertex2f(185, 330);
 glVertex2f(185, 260);
 glEnd();

 for (int l = 0; l <= 25; l++)
 {
  glColor3f(0.0, 0.5, 0.0);
  draw_circle(170, 330, l);
  draw_circle(190, 330, l);
 }

 for (int l = 0; l <= 20; l++)
 {
  glColor3f(0.0, 0.5, 0.0);
  draw_circle(180, 365, l);
 }
 drawBOX(150 + w, 170 + w, 180, 200, 1.000, 0.627, 0.478);
 drawBOX(158 + w, 162 + w, 170, 180, 0.804, 0.361, 0.361);
 drawBOX(140 + w, 180 + w, 110, 170, 0.545, 0.000, 0.000);
 if (w % 2 == 0) {
  drawTringle(150 + w, 140, 150 + w, 160, 200 + w, 130, 1.000, 0.000, 0.000);
  drawTringle(140 + w, 140, 140 + w, 160, 110 + w, 120, 0.698, 0.133, 0.133);
  drawTringle(140 + w, 110, 130 + w, 50, 180 + w, 110, 0.184, 0.310, 0.310);
  drawTringle(180 + w, 110, 180 + w, 50, 160 + w, 86, 0.412, 0.412, 0.412);

 }
 else {
  drawTringle(150 + w, 140, 150 + w, 160, 100 + w, 130, 1.000, 0.000, 0.000);
  drawTringle(180 + w, 140, 180 + w, 160, 210 + w, 120, 0.698, 0.133, 0.133);
  drawTringle(140 + w, 110, 190 + w, 50, 178 + w, 110, 0.184, 0.310, 0.310);
  drawTringle(140 + w, 110, 138 + w, 50, 160 + w, 86, 0.412, 0.412, 0.412);

 }
 glFlush();

}
void idle()
{
 glClearColor(1.0, 1.0, 1.0, 1.0);
 if (c == 0)
 {

  i += .3;
  m += 2;
 }
 if (c == 3) {
  i -= .2;
  m -= 2;

 }


 if (c == 2) {
  i -= i;
  m -= m;

 }
 else
 {

  i += .4;
  m += 1;

 }
 if (i>680)
  i = 0.0;
 m = 0.0;
 glutPostRedisplay();

}

void keyboardFunc(unsigned char key, int x, int y)
{
 switch (key)
 {

 case 'S':
 case 's':
  i = 0.0;

  c = 1;
  break;

 case 'w':
 case 'W':
  c = 2;
  break;
 case 'a':
 case 'A':
  c = 1;
  break;

 case 'D':
 case 'd':
  c = 0;
  break;

 case 'q':
 case 'Q':
  c = 3;
  break;
 case 'X':
 case 'x':
  if (w + 150 > 650) {
   w = 0;
   w -= 150;
  }
  w += 5;
  break;
 };
}
void myinit()
{
 glClearColor(0.0, 0.0, 0.0, 0.0);
 glColor3f(0.0, 0.0, 1.0);
 glPointSize(4.0);
 glMatrixMode(GL_PROJECTION);
 glLoadIdentity();
 gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

void display()
{

 glClear(GL_COLOR_BUFFER_BIT);
 draw_object();

 glFlush();
}

int main(int argc, char** argv)
{
 glutInit(&argc, argv);
 glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
 glutInitWindowSize(1180, 780);
 glutInitWindowPosition(0, 0);
 glutCreateWindow("Create City");
 glutDisplayFunc(display);
 glutIdleFunc(idle);
 glutKeyboardFunc(keyboardFunc);
 myinit();
 glutMainLoop();
 return 0;
}
