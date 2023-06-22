
#include<GL/glut.h>
#include<GL/gl.h>
#include<math.h>
# define PI 3.14159265358979323846
float c,x,y,z,g;
int slide=0;
void circle(float a, float b, float r){

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a; GLfloat y=b; GLfloat radius =r;
       glBegin(GL_TRIANGLE_FAN);
       glVertex2f(x, y);
for(i = 0; i <= triangleAmount;i++) {
glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
   y + (radius * sin(i * twicePi / triangleAmount))
);
}glEnd();}

void triangle(float a, float b, float c, float d, float e, float f){
glBegin(GL_TRIANGLES);
    glVertex2f(a,b);
    glVertex2f(c,d);
    glVertex2f(e,f);
    glEnd();}
    
    

GLfloat snowP=300;//3.0f
        GLfloat snowS=0.03;
         void snowUp(int value){

    if(snowP < -50)//1.50
        snowP = 200;//1.0f;
    snowP -= snowS;
    glutPostRedisplay();
glutTimerFunc(100, snowUp, 0);
}

void snowball(){
	    circle(-150,95,1);
        circle(-95,75,1);
        circle(-65,55,01);
        circle(-35,46,01);
        circle(-5,64.8,1);
        circle(25,83,01);
        circle(55,80,01);
        circle(75,35,01);
         circle(100,26,1);
        circle(-45,14.8,1);
}

void quad(float a, float b, float c, float d, float e, float f, float g, float h){
glBegin(GL_QUADS);
    glVertex2f(a,b);
    glVertex2f(c,d);
    glVertex2f(e,f);
    glVertex2f(g,h);
    glEnd();}

        GLfloat wSpeed=0;//0.0f
        void windmill(){
		//pillar
 		glColor3ub(230, 162, 80);
		quad(-1,0,-3,-35,3,-35,1,0);

		glPushMatrix();
		glRotatef(wSpeed,0.0,0.0,0.1);
 		//glColor3ub(247, 5, 5);
  		glColor3ub(247, 203, 5);
  		quad(0,0,0,20,-10,20,0,0);
  		quad(0,0,0,-20,10,-20,0,0);
   		quad(0,0,20,0,20,10,0,0);
    	quad(0,0,-20,0,-20,-10,0,0);

		glPopMatrix();
		wSpeed-=0.5;//-0.15f;-10
		//center
		glColor3ub(252, 252, 252);
		circle(0.0,0.0,1.5);
		}
		
void line(float a, float b, float c, float d){
     glBegin(GL_LINES);
     glVertex2f(a,b);
     glVertex2f(c,d);
     glEnd();}

 	GLfloat rainP=250;//2.50f;250
    GLfloat rainSpeed=5;//0.0f;5
    void rainUp(int value){

    if(rainP < -1)//-1.0;100
        rainP = 50;//.50f;50
    rainP -= rainSpeed;
	glutPostRedisplay();
    glutTimerFunc(100, rainUp, 0);
	}

 		GLfloat RcloudP = 350;//3.5f
        GLfloat RcloudS = 0.02;//0.02f
        void RcloudUp(int value) {
        if(RcloudP < -0.0)
        	RcloudP = 100;//1.0f
    	RcloudP -= RcloudS;
		glutPostRedisplay();
		glutTimerFunc(100, RcloudUp, 0);
	}


void fifth(){
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
char str5[]="THANK YOU";
//glPushMatrix();
int k;
glRasterPos3f(-10,0,0.0);
for(k=0;k<strlen(str5);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[k]);
//glPopMatrix();
glFlush();

	glColor3f(1.0,1.0,1.0);
char str[]="PRESS 'A' FOR FIRST SLIDE";
//glPushMatrix();

glRasterPos3f(-15,-50,0.0);
for(k=0;k<strlen(str);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[k]);
//glPopMatrix();
glFlush();
glutSwapBuffers();
	
}
void fourth(){
	glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.53,0.80,0.92);
//sky
glBegin(GL_QUADS);
    glVertex2f(-100,0);
    glVertex2f(100,0);
    glVertex2f(100,100);
    glVertex2f(-100,100);
    glEnd();
   
    //sun    
glColor3ub(255,0,0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(60,15+g,0);
//glRotatef(x,1,1,0);
glutWireSphere(10,200,100);
glPopMatrix();
glFlush();
  glEnd();

//mountain    
    glBegin(GL_QUADS);
 glColor3ub(75, 152, 173);
    glVertex2f(-35.0,0.0);
    glVertex2f(75.0,0.0);
    glVertex2f(25.0,45.0);
    glVertex2f(10.0,43.0);
     glEnd();
     
     
      glBegin(GL_POLYGON);
 //glColor3ub(176, 191, 57);
    glColor3ub(159, 173, 50);
    //glColor3ub(138, 163, 54);
    glVertex2f(25.0,45);
    glVertex2f(10,43);
    glVertex2f(-3.9,30);
    glVertex2f(8,35);
    glVertex2f(6,25);
    glVertex2f(17,35.5);
    glVertex2f(25,27);
    glVertex2f(25,38);
glVertex2f(42,30);
glEnd();


glBegin(GL_TRIANGLES);
     glColor3ub(61, 119, 135);
//left 1
    glVertex2f(-110,0);
    glVertex2f(-75,0);
    glVertex2f(-90,12);
    glColor3ub(29, 78, 92);
    glVertex2f(-110,0);
    glVertex2f(-98,0);
    glVertex2f(-90,12);

//left2

glColor3ub(61, 119, 135);
     glVertex2f(-80,0);
    glVertex2f(-30,0);
    glVertex2f(-55,15);
    glColor3ub(29, 78, 92);
     glVertex2f(-80,0);
    glVertex2f(-70,0);
    glVertex2f(-55,15);


//left big

glColor3ub(61, 119, 135);
     glVertex2f(-45,0);
    glVertex2f(10,0);
    glVertex2f(-20,23);
glColor3ub(29, 78, 92);
    glVertex2f(-45,0);
    glVertex2f(-35,0);
    glVertex2f(-20,23);

    ////mid

    glColor3ub(61, 119, 135);
     glVertex2f(-10,0);
    glVertex2f(30,0);
    glVertex2f(10,12);
    glColor3ub(29, 78, 92);
    glVertex2f(-10,0);
    glVertex2f(0,0);
    glVertex2f(10,12);

glColor3ub(61, 119, 135);
     glVertex2f(50,0);
    glVertex2f(100,0);
    glVertex2f(80,25);
    glColor3ub(29, 78, 92);
    glVertex2f(50,0);
    glVertex2f(60,0);
    glVertex2f(80,25);
    glEnd();


     //grass
      glColor3ub(68, 173, 47);
     glBegin(GL_QUADS);
    glVertex2f(-100,-100);
    glVertex2f(100,-100);
    glVertex2f(100,0);
    glVertex2f(-100,0);
    glEnd();
   
    //hut
  // glScalef(1.2,1.2,0);
    //glTranslated(0.05,0.0,0);
     glBegin(GL_QUADS);
    glColor3ub(212, 205, 205);
    glVertex2f(40,-10);
    glVertex2f(40,-30);
    glVertex2f(70,-30);
    glVertex2f(70,-10);
    glEnd();
//door
    glBegin(GL_QUADS);
    glColor3ub(242, 133, 31);
    glVertex2f(52,-20);
    glVertex2f(52,-30);
    glVertex2f(58,-30);
    glVertex2f(58,-20);

    glVertex2f(43,-21);
    glVertex2f(43,-26);
    glVertex2f(49,-26);
    glVertex2f(49,-21);

    glVertex2f(61,-21);
    glVertex2f(61,-26);
    glVertex2f(67,-26);
    glVertex2f(67,-21);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(245, 43, 32);
    glVertex2f(39,-5);
    glVertex2f(37,-18);
    glVertex2f(73,-18);
    glVertex2f(71,-5);
    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(204, 51, 0);
    glVertex2f(39,-29);
    glVertex2f(39,-31);
    glVertex2f(71,-31);
    glVertex2f(71,-29);
    glEnd();
   
    //rain-cloud
   	 glColor3ub(175, 182, 186);
       glPushMatrix();
       glTranslatef(RcloudP, 0.0f,0.0f);
       
       circle(-203,95,10);
		circle(-184,93,15);
		circle(-154,93,18);
		circle(-128,93,15);
		circle(-100,93,17);
		circle(-93,95,10);
		circle(-72,93,15);
		circle(-50,93,18);
		circle(-28,93,15);
		circle(0.0,95,17);
		circle(20,93,15);
		circle(43,93,20);
		circle(65,93,13);
		circle(80,95,15);
		circle(95,95,8);
       glPopMatrix();
       glLoadIdentity();

	 
    //river
     glBegin(GL_QUADS);
    glColor3ub(150, 201, 38);
    glVertex2f(-100,-.00);
    glVertex2f(100,-.00);
    glVertex2f(100,-1);
    glVertex2f(-100,-1);
    glColor3ub(43, 155, 207);
    glVertex2f(-100,-1);
    glVertex2f(100,-1);
    glVertex2f(100,-10);
    glVertex2f(-100,-10);
    glEnd();


   	//boat
    glPushMatrix();
    glTranslatef(60+c, 0.0f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);

    glColor3ub(145, 89, 58);
	glVertex2f(-1,-4);glVertex2f(-1,30);
	glVertex2f(-10,-4);glVertex2f(-1,28);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(252, 25, 0);
	glVertex2f(-1,28);
	glVertex2f(-1,-.0);
	glVertex2f(14,-.0);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(252, 185, 0);
	glVertex2f(-12,-03);
	glVertex2f(-10,-06);
	glVertex2f(10,-6);
	glVertex2f(12,-3);
	glEnd();
    glPopMatrix();
   glLoadIdentity();


	//tree
       glBegin(GL_POLYGON);
       glColor3ub(69, 30, 14);
       glVertex2f(-67,-20);
       glVertex2f(-84,-85);
       glVertex2f(-73,-85);
       glVertex2f(-60,-20);
       glEnd();
  //right down
  quad(-60,-22,-40,-29,-39,-28,-55,-20);

//right mid
quad(-63,-18,-65,-28,-40,-10,-33,-9);

  //right up
  quad(-60,-18,-55,-18,-55,-1,-56,-2);
//left
//left up
   quad(-75,-16,-68,-18,-78,2,-80,3);

   quad(-63,-18,-62,-28,-90,-14,-89,-12);

 glBegin(GL_QUADS);
    //root
    glVertex2f(-83,-82);
    glVertex2f(-95,-88);
    glVertex2f(-81,-85);
    glVertex2f(-81,-82);
     glVertex2f(-81,-82);
     glVertex2f(-83,-84);
    glVertex2f(-63,-89);
     glVertex2f(-73,-82);

    glEnd();
    
    //tree-leaf
     glColor3ub(138, 163, 54);
   circle(-36,-2,18);
   glColor3ub(159, 173, 50);
   circle(-40,-30,8);
   glColor3ub(99, 112, 39);
        circle(-89.5,-13,11);
   glColor3ub(138, 163, 54);
   circle(-77,7,16);
   glColor3ub(176, 191, 57);
   circle(-54,10,18);
    
    //garden
glColor3ub(30, 74, 15);
circle(-90,-90,20);

        glColor3ub(30, 74, 15);
   circle(-33,-93,11.5);

   glColor3ub(63, 163, 20);
circle(-70,-90,15);

   glColor3ub(63, 163, 20);
   circle(-50,-95,10);

       glColor3ub(63, 163, 20);
circle(-18,-95,8);

   glColor3ub(63, 163, 20);
circle(-03,-95,11);


    glTranslated(87,.0,0);
        glColor3ub(49, 128, 15);
        circle(-70,-90,15);

   glColor3ub(49, 128, 15);
circle(-50,-95,10);
    glLoadIdentity();

    glColor3ub(63, 163, 20);
circle(52,-95,9);

   glColor3ub(30, 74, 15);
circle(90,-90,19);

   glColor3ub(63, 163, 20);
circle(70,-93,13);


//flowers-below
//red
   glColor3ub(235, 29, 2);
circle(-78,-90,2);
   circle(-72,-90,2);
circle(-75,-87,2);
circle(-75,-93,2);
//   center
   glColor3ub(255, 242, 10);
circle(-75,-90,1.5);
//
//
//yellow
   glScalef(0.9,0.9,0);
    glTranslated(0,0,0);

   glColor3ub(250, 197, 40);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
//   center40
   glColor3ub(252, 23, 23);
   circle(-75,-90,1.5); glLoadIdentity();


glTranslated(70,-1,0);
        glColor3ub(235, 29, 2);
           circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
//   center
   glColor3ub(255, 242, 10);
circle(-75,-90,1.5);glLoadIdentity();
//
//
 glTranslated(87,7,0);
   glColor3ub(255, 186, 245);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
         glColor3ub(245, 24, 65);
circle(-75,-90,1.5);glLoadIdentity();



//

glTranslated(136,-.0,0);

    glColor3ub(250, 197, 40);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
////   center
           glColor3ub(252, 23, 23);
circle(-75,-90,1.5);glLoadIdentity();

//long-grass

 glLineWidth(2);

          glColor3ub(68, 173, 47);
          line(-50,-100,-43,-65);
          line(-30,-100,-25,-65);
          line(-15,-100,-10,-65);
          line(.0,-100,10,-65);

          line(25,-100,20,-60);
          line(28,-100,32,-65);
          line(35,-100,40,-65);
          line(45,-100,58,-62);
          line(53,-100,50,-65);
          line(60,-100,70,-65);
          line(75,-100,85,-65);

///////////white flower

           glColor3ub(239, 245, 237);
           glTranslated(03.2,.0,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-45,-70);
           glVertex2f(-43,-55);
           glEnd();


           glTranslated(18.7,02,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-45,-70);
           glVertex2f(-43,-55);
           glEnd();

           glTranslated(15,.0,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-45,-70);
           glVertex2f(-45,-55);
           glEnd();

           glTranslated(20,.0,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48.6,-73); glVertex2f(-46,-70);
           glVertex2f(-44,-55);
           glEnd();

           glTranslated(12,4,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-46,-70);
           glVertex2f(-52,-55);
           glEnd();

           glTranslated(11,.0,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-46,-70);
           glVertex2f(-46,-55);
           glEnd();

           glTranslated(7,-5,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-46,-70);
           glVertex2f(-46,-58);
           glEnd();

           glTranslated(11.5,2,0);
           glBegin(GL_POLYGON);
           glVertex2f(-50,-70); glVertex2f(-48,-73); glVertex2f(-46,-70);
           glVertex2f(-50,-58);
           glEnd();

           glTranslated(5.8,2,0);
           glBegin(GL_POLYGON);
           glVertex2f(-48,-70); glVertex2f(-48,-73); glVertex2f(-44,-70);
           glVertex2f(-40,-55);
           glEnd();

           glTranslated(13.2,2,0);
           glBegin(GL_POLYGON);
           glVertex2f(-48,-70); glVertex2f(-48,-73); glVertex2f(-44,-70);
           glVertex2f(-40,-57);
           glEnd();

            glTranslated(14.8,.0,0);
           glBegin(GL_POLYGON);
           glVertex2f(-48,-70); glVertex2f(-48,-73); glVertex2f(-44,-70);
           glVertex2f(-40,-55);
           glEnd();
			glLoadIdentity();

	
		//writeup
	glColor3f(1.0,1.0,1.0);
char strS[]="PRESS 'E' FOR NEXT SLIDE";
//glPushMatrix();
int k;
glRasterPos3f(-10.0,-50.0,0.0);
for(k=0;k<strlen(strS);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strS[k]);
//glPopMatrix();
glFlush();
	//rain
	  glPushMatrix();
        glTranslatef(0.0f,rainP,0.0f);
        glColor3ub(210, 226, 247);
        glLineWidth(3);//2

   glBegin(GL_LINES);

    glVertex2f(-85,190);glVertex2f(-80,180);
    glVertex2f(-55,190);glVertex2f(-50,180);
    glVertex2f(-25,190);glVertex2f(-20,180);
            glVertex2f(5,190);glVertex2f(10,180);
            glVertex2f(35,190);glVertex2f(40,180);
            glVertex2f(65,190);glVertex2f(70,180);
            glVertex2f(95,190);glVertex2f(100,180);

     glVertex2f(-100,160);glVertex2f(-95,150);
    glVertex2f(-70,160);glVertex2f(-65,150);
    glVertex2f(-40,160);glVertex2f(-35,150);
    glVertex2f(-10,160);glVertex2f(-5,150);
            glVertex2f(20,160);glVertex2f(25,150);
            glVertex2f(50,160);glVertex2f(55,150);
            glVertex2f(80,160);glVertex2f(85,150);


    glVertex2f(-85,130);glVertex2f(-80,120);
    glVertex2f(-55,130);glVertex2f(-50,120);
    glVertex2f(-25,130);glVertex2f(-20,120);
             glVertex2f(5,130);glVertex2f(10,120);
            glVertex2f(35,130);glVertex2f(40,120);
            glVertex2f(65,130);glVertex2f(70,120);
            glVertex2f(95,130);glVertex2f(100,120);

    glVertex2f(-100,100);glVertex2f(-95,90);
    glVertex2f(-70,100);glVertex2f(-65,90);
    glVertex2f(-40,100);glVertex2f(-35,90);
    glVertex2f(-10,100);glVertex2f(-5,90);
                 glVertex2f(20,100);glVertex2f(25,90);
                 glVertex2f(50,100);glVertex2f(55,90);
                 glVertex2f(80,100);glVertex2f(85,90);



    glVertex2f(-85,70);glVertex2f(-80,60);
    glVertex2f(-55,70);glVertex2f(-50,60);
    glVertex2f(-25,70);glVertex2f(-20,60);
              glVertex2f(5,70);glVertex2f(10,60);
            glVertex2f(35,70);glVertex2f(40,60);
            glVertex2f(65,70);glVertex2f(70,60);
            glVertex2f(95,70);glVertex2f(100,60);

    glVertex2f(-100,40);glVertex2f(-95,30);
    glVertex2f(-70,40);glVertex2f(-65,30);
    glVertex2f(-40,40);glVertex2f(-35,30);
    glVertex2f(-10,40);glVertex2f(-5,30);
                 glVertex2f(20,40);glVertex2f(25,30);
                 glVertex2f(50,40);glVertex2f(55,30);
                 glVertex2f(80,40);glVertex2f(85,30);

    glVertex2f(-85,10);glVertex2f(-80,0.0);
    glVertex2f(-55,10);glVertex2f(-50,0.0);
    glVertex2f(-25,10);glVertex2f(-20,0.0);
              glVertex2f(5,10);glVertex2f(10,.0);
            glVertex2f(35,10);glVertex2f(40,.0);
            glVertex2f(65,10);glVertex2f(70,.0);
            glVertex2f(95,10);glVertex2f(100,.0);


    glVertex2f(-100,-20);glVertex2f(-95,-30);
    glVertex2f(-70,-20);glVertex2f(-65,-30);
    glVertex2f(-40,-20);glVertex2f(-35,-30);
    glVertex2f(-10,-20);glVertex2f(-5,-30);
                 glVertex2f(20,-20);glVertex2f(25,-30);
                 glVertex2f(50,-20);glVertex2f(55,-30);
                 glVertex2f(80,-20);glVertex2f(85,-30);

    glVertex2f(-85,-50);glVertex2f(-80,-60);
    glVertex2f(-55,-50);glVertex2f(-50,-60);
    glVertex2f(-25,-50);glVertex2f(-20,-60);
              glVertex2f(5,-50);glVertex2f(10,-60);
            glVertex2f(35,-50);glVertex2f(40,-60);
            glVertex2f(65,-50);glVertex2f(70,-60);
            glVertex2f(95,-50);glVertex2f(100,-60);

    glVertex2f(-100,-80);glVertex2f(-95,-90);
    glVertex2f(-70,-80);glVertex2f(-65,-90);
    glVertex2f(-40,-80);glVertex2f(-35,-90);
    glVertex2f(-10,-80);glVertex2f(-5,-90);
                 glVertex2f(20,-80);glVertex2f(25,-90);
                 glVertex2f(50,-80);glVertex2f(55,-90);
                 glVertex2f(80,-80);glVertex2f(85,-90);

    glVertex2f(-85,-110);glVertex2f(-80,-120);
    glVertex2f(-55,-110);glVertex2f(-50,-120);
    glVertex2f(-25,-110);glVertex2f(-20,-120);
              glVertex2f(5,-110);glVertex2f(10,-120);
            glVertex2f(35,-110);glVertex2f(40,-120);
            glVertex2f(65,-110);glVertex2f(70,-120);
            glVertex2f(95,-110);glVertex2f(100,-120);

    glVertex2f(-100,-140);glVertex2f(-95,-150);
    glVertex2f(-70,-140);glVertex2f(-65,-150);
    glVertex2f(-40,-140);glVertex2f(-35,-150);
    glVertex2f(-10,-140);glVertex2f(-5,-150);
                 glVertex2f(20,-140);glVertex2f(25,-150);
                 glVertex2f(50,-140);glVertex2f(55,-150);
                 glVertex2f(80,-140);glVertex2f(85,-150);


        glEnd();
   
   glPopMatrix();
   glLoadIdentity();
    
    //thunder
 
  glLineWidth(3);
  glBegin(GL_LINES);
    glVertex2f(0,95);glVertex2f(05,85);
    glVertex2f(5,85);glVertex2f(9,89);
    glVertex2f(9,89);glVertex2f(15,76);
    glEnd();


glFlush();
	
	 glutSwapBuffers();
}



void third(){

glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.53,0.80,0.92);
//sky
glBegin(GL_QUADS);
    glVertex2f(-100,0);
    glVertex2f(100,0);
    glVertex2f(100,100);
    glVertex2f(-100,100);
    glEnd();
   
    //sun    
glColor3ub(255,0,0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(60,15+g,0);
//glRotatef(x,1,1,0);
glutSolidSphere(10,200,100);
glPopMatrix();
glFlush();
  glEnd();

//mountain    
    glBegin(GL_QUADS);
 glColor3ub(75, 152, 173);
    glVertex2f(-35.0,0.0);
    glVertex2f(75.0,0.0);
    glVertex2f(25.0,45.0);
    glVertex2f(10.0,43.0);
     glEnd();
     
     
      glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
    glVertex2f(25.0,45);
    glVertex2f(10,43);
    glVertex2f(-3.9,30);
    glVertex2f(8,35);
    glVertex2f(6,25);
    glVertex2f(17,35.5);
    glVertex2f(25,27);
    glVertex2f(25,38);
glVertex2f(42,30);
glEnd();


glBegin(GL_TRIANGLES);
     glColor3ub(61, 119, 135);
//left 1
    glVertex2f(-110,0);
    glVertex2f(-75,0);
    glVertex2f(-90,12);
    glColor3ub(29, 78, 92);
    glVertex2f(-110,0);
    glVertex2f(-98,0);
    glVertex2f(-90,12);

//left2

glColor3ub(61, 119, 135);
     glVertex2f(-80,0);
    glVertex2f(-30,0);
    glVertex2f(-55,15);
    glColor3ub(29, 78, 92);
     glVertex2f(-80,0);
    glVertex2f(-70,0);
    glVertex2f(-55,15);


//left big

glColor3ub(61, 119, 135);
     glVertex2f(-45,0);
    glVertex2f(10,0);
    glVertex2f(-20,23);
glColor3ub(29, 78, 92);
    glVertex2f(-45,0);
    glVertex2f(-35,0);
    glVertex2f(-20,23);

    ////mid

    glColor3ub(61, 119, 135);
     glVertex2f(-10,0);
    glVertex2f(30,0);
    glVertex2f(10,12);
    glColor3ub(29, 78, 92);
    glVertex2f(-10,0);
    glVertex2f(0,0);
    glVertex2f(10,12);

glColor3ub(61, 119, 135);
     glVertex2f(50,0);
    glVertex2f(100,0);
    glVertex2f(80,25);
    glColor3ub(29, 78, 92);
    glVertex2f(50,0);
    glVertex2f(60,0);
    glVertex2f(80,25);
    glEnd();


     //grass
      glColor3ub(68, 173, 47);
     glBegin(GL_QUADS);
    glVertex2f(-100,-100);
    glVertex2f(100,-100);
    glVertex2f(100,0);
    glVertex2f(-100,0);
    glEnd();
   
   	//ground snow
	 glColor3ub(255, 255, 255);
    triangle(-50,-20,100,-40,100,-10);
    triangle(-100,-40,-100,-70,0,-50);

   //river
glBegin(GL_QUADS);
    glColor3ub(150, 201, 38);
    glVertex2f(-100,-00);
    glVertex2f(100,-00);
    glVertex2f(100,-01);
    glVertex2f(-100,-1);
    glColor3ub(177, 211, 227);
    glVertex2f(-100,-1);
    glVertex2f(100,-1);
    glVertex2f(100,-10);
    glVertex2f(-100,-10);
    glEnd();

    glColor3ub(211, 229, 237);
    glLineWidth(.05);
    line(-85,-6,-95,-6);
    line(-50,-3.5,-56,-3.5);
    line(0.0,-6,-10,-6);
    line(80,-3,90,-3);
   
   
    //hut
  // glScalef(1.2,1.2,0);
    //glTranslated(0.05,0.0,0);
     glBegin(GL_QUADS);
    glColor3ub(212, 205, 205);
    glVertex2f(40,-10);
    glVertex2f(40,-30);
    glVertex2f(70,-30);
    glVertex2f(70,-10);
    glEnd();
//door
    glBegin(GL_QUADS);
    glColor3ub(242, 133, 31);
    glVertex2f(52,-20);
    glVertex2f(52,-30);
    glVertex2f(58,-30);
    glVertex2f(58,-20);

    glVertex2f(43,-21);
    glVertex2f(43,-26);
    glVertex2f(49,-26);
    glVertex2f(49,-21);

    glVertex2f(61,-21);
    glVertex2f(61,-26);
    glVertex2f(67,-26);
    glVertex2f(67,-21);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(245, 43, 32);
    glVertex2f(39,-5);
    glVertex2f(37,-18);
    glVertex2f(73,-18);
    glVertex2f(71,-5);
    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(204, 51, 0);
    glVertex2f(39,-29);
    glVertex2f(39,-31);
    glVertex2f(71,-31);
    glVertex2f(71,-29);
    glEnd();
   
   ////////mountain snow
    glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
     glVertex2f(25,45);
     glVertex2f(10,43);
     glVertex2f(-14.2,20);
     glVertex2f(4,28);
     glVertex2f(7,18);
     glVertex2f(17,28);
     glVertex2f(28,15);
     glVertex2f(35,26);
     glVertex2f(58.5,15);
     glEnd();


     glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
     glVertex2f(-90,12);
     glVertex2f(-100,6);
     glVertex2f(-95,5);
     glVertex2f(-89,7.5);
     glVertex2f(-82,6);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
     glVertex2f(-55,15);
     glVertex2f(-67,8);
     glVertex2f(-65,5);
     glVertex2f(-55,8);
     glVertex2f(-40,6);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
     glVertex2f(-20,23);
     glVertex2f(-35.6,9);
     glVertex2f(-30,7);
     glVertex2f(-20,10);
     glVertex2f(-10,7);
     glVertex2f(-3,10);

     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
     glVertex2f(80,22);
     glVertex2f(68,12);
     glVertex2f(71,8.5);
     glVertex2f(78,11);
     glVertex2f(85,8);
     glVertex2f(90,11);
     glVertex2f(93,9);
     glEnd();
     glBegin(GL_POLYGON);
     glColor3ub(255, 255, 255);
     glVertex2f(10,12);
     glVertex2f(0.0,6);
     glVertex2f(5,5);
     glVertex2f(22,5);
     glEnd();

		//boat
    glPushMatrix();
    glTranslatef(60+c, 0.0f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);

    glColor3ub(145, 89, 58);
	glVertex2f(-1,-4);glVertex2f(-1,30);
	glVertex2f(-10,-4);glVertex2f(-1,28);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(252, 25, 0);
	glVertex2f(-1,28);
	glVertex2f(-1,-.0);
	glVertex2f(14,-.0);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(252, 185, 0);
	glVertex2f(-12,-03);
	glVertex2f(-10,-06);
	glVertex2f(10,-6);
	glVertex2f(12,-3);
	glEnd();


    
    glPopMatrix();
   glLoadIdentity();

   
   
   //house snow
   //glScalef(1.2,1.2,0);
     //     glTranslated(.05,0.0,0);
          glBegin(GL_POLYGON);
          glColor3ub(255, 255, 255);
          glVertex2f(39,-5);
          glVertex2f(37.5,-13);
          glVertex2f(43,-14);
          glVertex2f(46,-17);
          glVertex2f(50,-10);
          glVertex2f(53,-13);
          glVertex2f(72.5,-13);
          glVertex2f(71,-05);

          glEnd();
          glLoadIdentity();

//tree
       glBegin(GL_POLYGON);
       glColor3ub(69, 30, 14);
       glVertex2f(-67,-20);
       glVertex2f(-84,-85);
       glVertex2f(-73,-85);
       glVertex2f(-60,-20);
       glEnd();
  		//right down
  		quad(-60,-22,-40,-29,-39,-28,-55,-20);

		//right mid
		quad(-63,-18,-65,-28,-40,-10,-33,-9);

  		//right up
  		quad(-60,-18,-55,-18,-55,-1,-56,-2);
		//left
		//left up
   		quad(-75,-16,-68,-18,-78,2,-80,3);

   		quad(-63,-18,-62,-28,-90,-14,-89,-12);

 	glBegin(GL_QUADS);
    //root
    glVertex2f(-83,-82);
    glVertex2f(-95,-88);
    glVertex2f(-81,-85);
    glVertex2f(-81,-82);
     glVertex2f(-81,-82);
     glVertex2f(-83,-84);
    glVertex2f(-63,-89);
     glVertex2f(-73,-82);

    glEnd();
    
    //tree-snow
     glBegin(GL_POLYGON);
         glColor3ub(255, 255, 255);
         glVertex2f(-89,-12);
         glVertex2f(-89.5,-12.5);
         glVertex2f(-85,-15);
         glVertex2f(-78.5,-14);
         glEnd();

          glBegin(GL_POLYGON);
          glColor3ub(255, 255, 255);
          glVertex2f(-78,2);
          glVertex2f(-80,2.2);
          glVertex2f(-75,-8);
          glVertex2f(-75,-10);
          glVertex2f(-69.5,-14.5);
          glEnd();

         glTranslated(-65,-50,0);
         glBegin(GL_POLYGON);
         glColor3ub(255, 255, 255);
         glVertex2f(10,49);
         glVertex2f(8.7,47.5);
         glVertex2f(5.5,35);
         glVertex2f(10,43);
         glEnd();
         glLoadIdentity();
     // glTranslated(-.65,-.5,0);
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(-40,-10);
        glVertex2f(-34,-9);
        glVertex2f(-50,-14);
        glVertex2f(-45,-15);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 255);
        glVertex2f(-39,-28);
        glVertex2f(-48,-23.5);
        glVertex2f(-45,-27);

        glEnd();
        glLoadIdentity();

	//garden
glColor3ub(30, 74, 15);
circle(-90,-90,20);

        glColor3ub(30, 74, 15);
   circle(-33,-93,11.5);

   glColor3ub(63, 163, 20);
circle(-70,-90,15);

   glColor3ub(63, 163, 20);
   circle(-50,-95,10);

       glColor3ub(63, 163, 20);
circle(-18,-95,8);

   glColor3ub(63, 163, 20);
circle(-03,-95,11);


    glTranslated(87,.0,0);
        glColor3ub(49, 128, 15);
        circle(-70,-90,15);

   glColor3ub(49, 128, 15);
circle(-50,-95,10);
    glLoadIdentity();

    glColor3ub(63, 163, 20);
circle(52,-95,9);

   glColor3ub(30, 74, 15);
circle(90,-90,19);

   glColor3ub(63, 163, 20);
circle(70,-93,13);

	//writeup
	glColor3f(1.0,1.0,1.0);
char strS[]="PRESS 'D' FOR NEXT SLIDE";
//glPushMatrix();
int k;
glRasterPos3f(-10.0,-60.0,0.0);
for(k=0;k<strlen(strS);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strS[k]);
//glPopMatrix();
glFlush();

	//snow
	glPushMatrix();
        glTranslated(0.0f,snowP,0.0f);
        glColor3ub(255, 255, 255);

        snowball();
        glTranslated(20,-50,0);snowball();
        glTranslated(-10,-45,0);snowball();
        glTranslated(0.0,-50,0);snowball();
        glTranslated(20,-50,0);snowball();
        glTranslated(-10,-50,0);snowball();

       glLoadIdentity();
       glPopMatrix();
       glLoadIdentity();
       
       //glEnd();
		
		 
glFlush();
 glutSwapBuffers();
}

void second()
{
	glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.53,0.80,0.92);
//sky
glBegin(GL_QUADS);
    glVertex2f(-100,0);
    glVertex2f(100,0);
    glVertex2f(100,100);
    glVertex2f(-100,100);
    glEnd();
   
    //sun    
glColor3ub(255,0,0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(60,15+z,0);
//glRotatef(x,1,1,0);
glutSolidSphere(10,200,100);
glPopMatrix();
glFlush();
  glEnd();
  
  
  //cloud1
glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(75+c,80,0);
glScalef(1.5,1.5,1.0);
glutSolidSphere(5,100,50);
glPopMatrix();

glEnd();

glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(70+c,85,0);
glScalef(1.5,1.8,1.0);
glutSolidSphere(5,100,50);
glPopMatrix();
glEnd();

glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(65+c,80,0);
glScalef(1.5,1.5,1.0);
glutSolidSphere(5,100,50);
glPopMatrix();
glEnd();

//cloud2
glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-62.5-c,58,0);
glScalef(1.0,1.0,1.0);
glutSolidSphere(5,100,50);
glPopMatrix();

glEnd();

glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-70-c,60,0);
glScalef(1.0,1.0,1.0);
glutSolidSphere(8,100,50);
glPopMatrix();
glEnd();

glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-79-c,58.2,0);
glScalef(1.0,1.0,1.0);
glutSolidSphere(6,100,50);
glPopMatrix();
glEnd();

glColor3f(1.0,1.0,1.0);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
glTranslatef(-85-c,58,0);
glScalef(1.0,1.0,1.0);
glutSolidSphere(4,100,50);
glPopMatrix();
glEnd();


//mountain    
    glBegin(GL_QUADS);
 glColor3ub(75, 152, 173);
    glVertex2f(-35.0,0.0);
    glVertex2f(75.0,0.0);
    glVertex2f(25.0,45.0);
    glVertex2f(10.0,43.0);
     glEnd();
     
     
      glBegin(GL_POLYGON);
    //glColor3ub(176, 191, 57);
    //glColor3ub(159, 173, 50);
    glColor3ub(138, 163, 54);
    glVertex2f(25.0,45);
    glVertex2f(10,43);
    glVertex2f(-3.9,30);
    glVertex2f(8,35);
    glVertex2f(6,25);
    glVertex2f(17,35.5);
    glVertex2f(25,27);
    glVertex2f(25,38);
glVertex2f(42,30);
glEnd();


glBegin(GL_TRIANGLES);
     glColor3ub(61, 119, 135);
//left 1
    glVertex2f(-110,0);
    glVertex2f(-75,0);
    glVertex2f(-90,12);
    glColor3ub(29, 78, 92);
    glVertex2f(-110,0);
    glVertex2f(-98,0);
    glVertex2f(-90,12);

//left2

glColor3ub(61, 119, 135);
     glVertex2f(-80,0);
    glVertex2f(-30,0);
    glVertex2f(-55,15);
    glColor3ub(29, 78, 92);
     glVertex2f(-80,0);
    glVertex2f(-70,0);
    glVertex2f(-55,15);


//left big

glColor3ub(61, 119, 135);
     glVertex2f(-45,0);
    glVertex2f(10,0);
    glVertex2f(-20,23);
glColor3ub(29, 78, 92);
    glVertex2f(-45,0);
    glVertex2f(-35,0);
    glVertex2f(-20,23);

    ////mid

    glColor3ub(61, 119, 135);
     glVertex2f(-10,0);
    glVertex2f(30,0);
    glVertex2f(10,12);
    glColor3ub(29, 78, 92);
    glVertex2f(-10,0);
    glVertex2f(0,0);
    glVertex2f(10,12);

glColor3ub(61, 119, 135);
     glVertex2f(50,0);
    glVertex2f(100,0);
    glVertex2f(80,25);
    glColor3ub(29, 78, 92);
    glVertex2f(50,0);
    glVertex2f(60,0);
    glVertex2f(80,25);
    glEnd();


     //grass
      glColor3ub(68, 173, 47);
     glBegin(GL_QUADS);
    glVertex2f(-100,-100);
    glVertex2f(100,-100);
    glVertex2f(100,0);
    glVertex2f(-100,0);
    glEnd();
    
    //river
     glBegin(GL_QUADS);
    glColor3ub(150, 201, 38);
    glVertex2f(-100,-.00);
    glVertex2f(100,-.00);
    glVertex2f(100,-1);
    glVertex2f(-100,-1);
    glColor3ub(43, 155, 207);
    glVertex2f(-100,-1);
    glVertex2f(100,-1);
    glVertex2f(100,-10);
    glVertex2f(-100,-10);
    glEnd();


   
   //boat
    glPushMatrix();
    glTranslatef(60+c, 0.0f,0.0f);
    glLineWidth(3);
    glBegin(GL_LINES);

    glColor3ub(145, 89, 58);
	glVertex2f(-1,-4);glVertex2f(-1,30);
	glVertex2f(-10,-4);glVertex2f(-1,28);


	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(252, 25, 0);
	glVertex2f(-1,28);
	glVertex2f(-1,-.0);
	glVertex2f(14,-.0);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(252, 185, 0);
	glVertex2f(-12,-03);
	glVertex2f(-10,-06);
	glVertex2f(10,-6);
	glVertex2f(12,-3);
	glEnd();


    
    glPopMatrix();
   glLoadIdentity();
   
   ///// houseGrass
  //left
//  circle(52,-33,4);
//  circle(49,-34,3);
//
//  glTranslated(.4,-0.005,0);
  //right
//  circle(52,-31,4.5);
//  circle(55,-32.5,3);
  //glLoadIdentity();
    //hut
  // glScalef(01.2,1.2,0);
    glTranslated(5,0.0,0);
     glBegin(GL_QUADS);
    glColor3ub(212, 205, 205);
    glVertex2f(40,-10);
    glVertex2f(40,-30);
    glVertex2f(70,-30);
    glVertex2f(70,-10);
    glEnd();
//door
    glBegin(GL_QUADS);
    glColor3ub(242, 133, 31);
    glVertex2f(52,-20);
    glVertex2f(52,-30);
    glVertex2f(58,-30);
    glVertex2f(58,-20);

    glVertex2f(43,-21);
    glVertex2f(43,-26);
    glVertex2f(49,-26);
    glVertex2f(49,-21);

    glVertex2f(61,-21);
    glVertex2f(61,-26);
    glVertex2f(67,-26);
    glVertex2f(67,-21);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(245, 43, 32);
    glVertex2f(39,-5);
    glVertex2f(37,-18);
    glVertex2f(73,-18);
    glVertex2f(71,-5);
    glEnd();



    glBegin(GL_QUADS);

    glColor3ub(204, 51, 0);
    glVertex2f(39,-29);
    glVertex2f(39,-31);
    glVertex2f(71,-31);
    glVertex2f(71,-29);
    glEnd();
   	
   	//pillar  
	 //glScalef(0.7,0.7,0);
    glTranslated(0.9,0.2,0);
    windmill();
    glLoadIdentity();
    
	//tree
       glBegin(GL_POLYGON);
       glColor3ub(69, 30, 14);
       glVertex2f(-67,-20);
       glVertex2f(-84,-85);
       glVertex2f(-73,-85);
       glVertex2f(-60,-20);
       glEnd();
  //right down
  quad(-60,-22,-40,-29,-39,-28,-55,-20);

//right mid
quad(-63,-18,-65,-28,-40,-10,-33,-9);

  //right up
  quad(-60,-18,-55,-18,-55,-1,-56,-2);
//left
//left up
   quad(-75,-16,-68,-18,-78,2,-80,3);

   quad(-63,-18,-62,-28,-90,-14,-89,-12);

// glBegin(GL_QUADS);
//    //root
//    glVertex2f(-.83,-.82);
//    glVertex2f(-.95,-.88);
//    glVertex2f(-.81,-.85);
//    glVertex2f(-.81,-.82);
//     glVertex2f(-.81,-.82);
//     glVertex2f(-.83,-.84);
//    glVertex2f(-.63,-.89);
//     glVertex2f(-.73,-.82);
//
//    glEnd();}
    
    //tree-leaf
     glColor3ub(138, 163, 54);
   circle(-36,-2,18);
   glColor3ub(159, 173, 50);
   circle(-40,-30,8);
   glColor3ub(99, 112, 39);
        circle(-89.5,-13,11);
   glColor3ub(138, 163, 54);
   circle(-77,7,16);
   glColor3ub(176, 191, 57);
   circle(-54,10,18);
    
    
        //bird
    glColor3ub(50,205,50);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(-65,-5,0);
//glRotatef(x,1,1,0);
glutWireSphere(4,200,100);
glPopMatrix();
    
//    glColor3ub(85,107,47);
//  glMatrixMode(GL_MODELVIEW);
//glLoadIdentity();
//glPushMatrix();
////glTranslatef(0.15,6,0);
//glTranslatef(-65,-12,0);
////glRotatef(x,1,1,0);
//glutWireSphere(5,200,100);
//glPopMatrix();

glColor3ub(50,205,50);
  glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
glPushMatrix();
//glTranslatef(0.15,6,0);
glTranslatef(-68,-12,0);
//glRotatef(x,1,1,0);
glutWireSphere(5,200,100);
glPopMatrix();

//glFlush();
//glEnd();

glColor3ub(0, 0, 0);
glBegin(GL_POLYGON);

glColor3ub(50,205,50);
    glVertex2f(-67.5,-16);
    glVertex2f(-80,-22);
    glVertex2f(-75,-24);
    glVertex2f(-67.5,-16);

	   glColor3ub(50,205,50);
    glVertex2f(-67.5,-16);
    glVertex2f(-75,-24);
    glVertex2f(-65,-22);
    glVertex2f(-67.5,-16);
	   
	    
    glColor3ub(0,128,0);
    glVertex2f(-67.5,-16);
    glVertex2f(-77.5,-24);
    glVertex2f(-70,-24);
    glVertex2f(-67.5,-16);
    glEnd();
    //beak
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(-61,-3);
    glVertex2f(-59,-5);
    glVertex2f(-61,-7);
    glVertex2f(-61,-3);
    glEnd();
    
    glPointSize(5);
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-64,-5);
    glEnd();
    
       glPointSize(6.5);
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-68.5,-17);
    glEnd();
    
       glPointSize(6.5);
    glBegin(GL_POINTS);
    glColor3ub(0,0,0);
    glVertex2f(-66.5,-17);
    glEnd();
    
    
//garden
glColor3ub(30, 74, 15);
circle(-90,-90,20);

        glColor3ub(30, 74, 15);
   circle(-33,-93,11.5);

   glColor3ub(63, 163, 20);
circle(-70,-90,15);

   glColor3ub(63, 163, 20);
   circle(-50,-95,10);

       glColor3ub(63, 163, 20);
circle(-18,-95,8);

   glColor3ub(63, 163, 20);
circle(-03,-95,11);


    glTranslated(87,.0,0);
        glColor3ub(49, 128, 15);
        circle(-70,-90,15);

   glColor3ub(49, 128, 15);
circle(-50,-95,10);
    glLoadIdentity();

    glColor3ub(63, 163, 20);
circle(52,-95,9);

   glColor3ub(30, 74, 15);
circle(90,-90,19);

   glColor3ub(63, 163, 20);
circle(70,-93,13);


//flowers-below
//red
   glColor3ub(235, 29, 2);
circle(-78,-90,2);
   circle(-72,-90,2);
circle(-75,-87,2);
circle(-75,-93,2);
//   center
   glColor3ub(255, 242, 10);
circle(-75,-90,1.5);
//
//
//yellow
   glScalef(0.9,0.9,0);
    glTranslated(0,0,0);

   glColor3ub(250, 197, 40);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
//   center40
   glColor3ub(252, 23, 23);
   circle(-75,-90,1.5); glLoadIdentity();

//
 glTranslated(25,-3,0);
         glColor3ub(235, 29, 2);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
////   center40
  glColor3ub(255, 242, 10);
   circle(-75,-90,1.5); glLoadIdentity();
//
  glTranslated(42,-.0,0);
//
    glColor3ub(250, 197, 40);
circle(-78,-90,2); circle(-72,-90,2);
circle(-75,-87,2);circle(-75,-93,2);
//   center
 glColor3ub(252, 23, 23);
    circle(-75,-90,1.5);glLoadIdentity();

glTranslated(70,-1,0);
        glColor3ub(235, 29, 2);
           circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
//   center
   glColor3ub(255, 242, 10);
circle(-75,-90,1.5);glLoadIdentity();
//
//
 glTranslated(87,7,0);
   glColor3ub(255, 186, 245);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
         glColor3ub(245, 24, 65);
circle(-75,-90,1.5);glLoadIdentity();
//
 glTranslated(97,-2,0);
glColor3ub(255, 186, 245);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
         glColor3ub(245, 24, 65);
circle(-75,-90,1.5);glLoadIdentity();

//
glTranslated(112,-3,0);
glColor3ub(235, 29, 2);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
   glColor3ub(255, 242, 10);
circle(-75,-90,1.5);glLoadIdentity();
//
//
 glTranslated(126,-4,0);
glColor3ub(235, 29, 2);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
//   center
   glColor3ub(255, 242, 10);
circle(-75,-90,1.5);glLoadIdentity();




glTranslated(136,-.0,0);

    glColor3ub(250, 197, 40);
circle(-78,-90,2);
  circle(-72,-90,2);
   circle(-75,-87,2);
        circle(-75,-93,2);
////   center
           glColor3ub(252, 23, 23);
circle(-75,-90,1.5);glLoadIdentity();


glColor3f(1.0,1.0,1.0);
char strS[]="PRESS 'C' FOR NEXT SLIDE";
//glPushMatrix();
int k;
glRasterPos3f(-10.0,-60.0,0.0);
for(k=0;k<strlen(strS);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strS[k]);
//glPopMatrix();
glFlush();


glFlush();
   glutSwapBuffers();
}
int k;
void first(){
glClear(GL_COLOR_BUFFER_BIT);

//tree
       glBegin(GL_POLYGON);
       glColor3ub(69, 30, 14);
       glVertex2f(-67,-20);
       glVertex2f(-84,-85);
       glVertex2f(-73,-85);
       glVertex2f(-60,-20);
       glEnd();
  //right down
  quad(-60,-22,-40,-29,-39,-28,-55,-20);

//right mid
quad(-63,-18,-65,-28,-40,-10,-33,-9);

  //right up
  quad(-60,-18,-55,-18,-55,-1,-56,-2);
//left
//left up
   quad(-75,-16,-68,-18,-78,2,-80,3);

   quad(-63,-18,-62,-28,-90,-14,-89,-12);

 glBegin(GL_QUADS);
    //root
    glVertex2f(-83,-82);
    glVertex2f(-95,-88);
    glVertex2f(-81,-85);
    glVertex2f(-81,-82);
     glVertex2f(-81,-82);
     glVertex2f(-83,-84);
    glVertex2f(-63,-89);
     glVertex2f(-73,-82);

    glEnd();
    
    //tree-leaf
     glColor3ub(138, 163, 54);
   circle(-36,-2,18);
   glColor3ub(159, 173, 50);
   circle(-40,-30,8);
   glColor3ub(99, 112, 39);
        circle(-89.5,-13,11);
   glColor3ub(138, 163, 54);
   circle(-77,7,16);
   glColor3ub(176, 191, 57);
   circle(-54,10,18);
    
	 //windmill-pillar  
	 
   	glColor3ub(230, 162, 80);
		quad(50,-40,45,-90,55,-90,50,-40);
    glColor3ub(247, 203, 5);
  		quad(50,-40,50,-20,60,-20,50,-40);
  		quad(50,-40,70,-40,70,-50,50,-40);
   		quad(50,-40,50,-60,40,-60,50,-40);
    	quad(50,-40,30,-40,30,-30,50,-40);

		//center
		glColor3ub(252, 252, 252);
		circle(50.0,-40.0,1.5);
    //glLoadIdentity();
   
   
   ///////sun
       glColor3ub(247, 232, 99);
       circle(70.0,68,9);
   //cloud
   glColor3ub(242, 245, 243);
   circle(62.5,58,5);
    circle(70,60,8);
    circle(79,58.2,6);
    circle(85,58,4);
    
    glColor3f(1.0,1.0,1.0);
char strS[]="PRESS 'B' FOR NEXT SLIDE";
//glPushMatrix();
glRasterPos3f(-20.0,-80.0,0.0);
for(k=0;k<strlen(strS);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,strS[k]);
//glPopMatrix();
glFlush();



glColor3f(1.0,0.0,0.0);
char str1[]="MANGALORE INSTITUTE OF TECHNOLOGY AND ENGINEERING";
//glPushMatrix();
glRasterPos3f(-40.0,85.0,0.0);
for(k=0;k<strlen(str1);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[k]);
//glPopMatrix();
glFlush();

glColor3f(0.0,0.0,0.0);
char str2[]="MOODABIDRI MANGALORE";
//glPushMatrix();
glRasterPos3f(-20.0,75,0.0);
for(k=0;k<strlen(str2);k++)
//glutStrokeCharacter(GLUT_STROKE_ROMAN,s[k]);
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[k]);
//glPopMatrix();
glFlush();

glColor3f(1.0,1.0,1.0);
char str3[]="DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING";
//glPushMatrix();
glRasterPos3f(-40.0,60,0.0);
for(k=0;k<strlen(str3);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[k]);
//glPopMatrix();
glFlush();

glColor3f(1.0,0.0,1.0);
char str4[]="COMPUTER GRAPHICS AND VISUALIZATION";
//glPushMatrix();
glRasterPos3f(-35,50,0.0);
for(k=0;k<strlen(str4);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str4[k]);
//glPopMatrix();
glFlush();

glColor3f(1.0,0.5,0.7);
char str5[]="MINI PROJECT";
//glPushMatrix();
glRasterPos3f(-15,25,0.0);
for(k=0;k<strlen(str5);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[k]);
//glPopMatrix();
glFlush();

glColor3f(1.0,0.5,0.7);
char str6[]="ON";
//glPushMatrix();
glRasterPos3f(-7.0,15,0.0);
for(k=0;k<strlen(str6);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str6[k]);
//glPopMatrix();
glFlush();

glColor3f(1.0,0.5,0.7);
char str7[]="SEASONS";
//glPushMatrix();
glRasterPos3f(-11,5.0,0.0);
for(k=0;k<strlen(str7);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str7[k]);
//glPopMatrix();
glFlush();

glColor3f(0.0,0.0,0.0);
char str8[]="TEAM MEMBERS";
glPushMatrix();
glRasterPos3f(-95,-25.0,0.0);
for(k=0;k<strlen(str8);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str8[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str9[]="PRANAV JOSHI- 4MT20CS116";
glPushMatrix();
glRasterPos3f(-95,-35,0.0);
for(k=0;k<strlen(str9);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str9[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str10[]="RAKESH KUMAR- 4MT20CS121";
glPushMatrix();
glRasterPos3f(-95,-45,0.0);
for(k=0;k<strlen(str10);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str10[k]);
glPopMatrix();
glFlush();

glColor3f(0.0,0.0,0.0);
char str11[]="PROJECT GUIDE";
glPushMatrix();
glRasterPos3f(60,-25.0,0.0);
for(k=0;k<strlen(str11);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str11[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str12[]="SUNITHA N V";
glPushMatrix();
glRasterPos3f(60,-35,0.0);
for(k=0;k<strlen(str12);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str12[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str13[]="ASSISTANT PROFESSOR";
glPushMatrix();
glRasterPos3f(60,-45.0,0.0);
for(k=0;k<strlen(str13);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str13[k]);
glPopMatrix();
glFlush();

glColor3f(1.0,0.0,0.0);
char str14[]="DEPT OF CSE";
glPushMatrix();
glRasterPos3f(60,-55,0.0);
for(k=0;k<strlen(str14);k++)
glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str14[k]);
glPopMatrix();
glFlush();
glutSwapBuffers();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	if(slide==0){
		first();
		//timer(0);
		glutPostRedisplay();
	}
	if(slide==1){
		second();
		//timer(0);
		glutPostRedisplay();
	}
	if(slide==2){
		third();
	//	timer(0);
		glutPostRedisplay();
	}
	if(slide==3){
		fourth();
		glutPostRedisplay();
	}
	if(slide==4){
		fifth();
		glutPostRedisplay();
	}
}
void key(unsigned char key,int x,int y)
{
	if(key=='A'||key=='a')
	{
		slide=0;
		glutPostRedisplay();
	}
	if(key=='B'||key=='b')
	{
		slide=1;
		glutPostRedisplay();
	}
	if(key=='C'||key=='c')
	{
		slide=2;
		glutPostRedisplay();
	}
	if(key=='D'||key=='d')
	{
		slide=3;
		glutPostRedisplay();
	}
	if(key=='E'||key=='e')
	{
		slide=4;
		glutPostRedisplay();
	}
}

   


void timer(int v)
{
if(z==55)//sun
{
//y=y;
z=z;
}
else{
//y+=0.5;
z+=0.25;
}
if(c==-170)//boat&cloud
c=60.0;
else
c-=0.5;
x+=0.5;
g+=1.0;//sun
glutPostRedisplay();
glutTimerFunc(100,timer,0);
glutTimerFunc(100, rainUp, 0);
glutTimerFunc(2000, RcloudUp, 0);//20510
glutTimerFunc(1000, snowUp, 0);
}

   

int main(int argc, char **argv)
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(500,500);
  //glutWindowPosition(50,100);
  glutCreateWindow("Line Segment");
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  glOrtho(-100,100,-100,100,-100,100);
  //glClearColor(1.0,1.0,1.0,1.0);
  glClearColor(0.53,0.80,0.90,1.0);
  glutDisplayFunc(display);
  glutKeyboardFunc(key);
  glutFullScreen();
  timer(0);
  glutMainLoop();
return 0;
}

	

