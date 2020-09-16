#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
# define PI           3.14159265358979323846


void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);      // Select the Projection matrix for operation
    glLoadIdentity();                 // Reset Projection matrix
    gluOrtho2D(-35.0, 35.0, -35.0, 35.0); // Set clipping area's left, right, bottom, top
glMatrixMode (GL_MODELVIEW);





    /****************
	* MOST. SUROVE AFREEN
	* Component: Sky
	*****************/

	glBegin(GL_QUADS);              //sky
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, 27.3f);
    glVertex2f(-35.0f, 35.0f);
	glVertex2f(35.0f, 35.0f);
    glVertex2f(35.0f, 27.0f);
	glEnd();


    /****************
	* MOST. SUROVE AFREEN
	* Component: cloud
	*****************/

	//----------------------------------------------------------------------------------
	 GLfloat x=0.6f; GLfloat y=0.6f; GLfloat radius1=0.18f;
    int q;
	int triangleAmount1 = 20; //# of triangles used to draw circle
	GLfloat twicePi1 = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/****************
	* MOST. SUROVE AFREEN
	* Component: cloud right tiny
	*****************/



	x=7.83f; y=28.64f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);                                                              //
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/****************
	* MOST. SUROVE AFREEN
	* Component: cloud right small
	*****************/



    x=13.95f; y=29.61f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);                                                              //
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	* Component: cloud left tiny
	*****************/

	x=17.37f; y=28.64f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


    /****************
	* MOST. SUROVE AFREEN
	* Component: cloud left small
	*****************/


	x=20.25f; y=5.58f; radius1=5.12f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/****************
	* MOST. SUROVE AFREEN
	* Component: sky
	*****************/



	//-------------------------------------------------------------------------------------
	glBegin(GL_QUADS);              //
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, 15.3f);
    glVertex2f(-35.0f, 28.0f);
	glVertex2f(35.0f, 28.0f);
    glVertex2f(35.0f, 15.0f);
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	* Component: sky upper part
	*****************/

	glBegin(GL_QUADS);              //
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, 7.0f);
    glVertex2f(-35.0f, 16.0f);
	glVertex2f(35.0f, 16.0f);
    glVertex2f(35.0f, 7.0f);
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	* Component:  cloud right tiny
	*****************/



	x=30.83f; y=5.64f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	/****************
	* MOST. SUROVE AFREEN
	* Component:  cloud right small
	*****************/

    x=25.95f; y=7.61f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	* Component:  cloud left tiny
	*****************/

	x=12.37f; y=4.64f; radius1=6.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	/****************
	* MOST. SUROVE AFREEN
	* Component: cloud left small
	*****************/



	x=20.25f; y=5.58f; radius1=5.12f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	* Component: cloud right tiny
	*****************/



	x=-30.83f; y=5.64f; radius1=5.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	* center of circle
	*****************/



    x=-25.95f; y=7.61f; radius1=5.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y);
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	/****************
	* MOST. SUROVE AFREEN
	* cloud left tiny
	*****************/


	x=-15.37f; y=4.64f; radius1=5.08f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	*  cloud left small
	*****************/




	x=-20.25f; y=5.58f; radius1=4.12f;
	glBegin(GL_TRIANGLE_FAN);
		glColor3ub(203, 242, 247);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	/****************
	* MOST. SUROVE AFREEN
	*  sky upper part 2 for cloud
	*****************/


    glBegin(GL_QUADS);
	glColor3ub(74, 186, 247);
	glVertex2f(-35.0f, -3.0f);
    glVertex2f(-35.0f, 7.0f);
	glVertex2f(35.0f, 7.0f);
    glVertex2f(35.0f, -3.0f);
	glEnd();

	/****************
	* MOST. SUROVE AFREEN
	*  cloud using glScalef
	*****************/



    //glTranslatef(-1.5,0.2,0.0);
    //glScalef(1.0,1.0,1.0);


    x=0.6f; y=0.6f; radius1=0.18f;
    glBegin(GL_TRIANGLE_FAN);
		glColor3ub(195, 230, 235);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

	x=0.83f; y=0.64f; radius1=0.08f;
	glBegin(GL_TRIANGLE_FAN);                                                              //cloud right tiny using glScalef()
		glColor3ub(195, 230, 235);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    x=1.0f; y=0.56f; radius1=0.15f;
	glBegin(GL_TRIANGLE_FAN);                                                              //cloud right small using glScalef()
		glColor3ub(195, 230, 235);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();

    /****************
	* BISHWAGIT DAS
	*  cloud using glScalef
	*****************/


glBegin(GL_QUADS);              // road component last 1
	glColor3ub(50,205,50); // lime green
	glVertex2f(-35.0f, -35.0f);    // x, y
    glVertex2f(35.0f, -35.0f);
    glVertex2f(35.0f, -30.0f);
	glVertex2f(-35.0f, -30.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 2
	glColor3ub(124,252,0); // lawn green
	glVertex2f(-35.0f, -35.0f);    // x, y
    glVertex2f(35.0f, -35.0f);
    glVertex2f(35.0f, -33.0f);
	glVertex2f(-35.0f, -33.0f);    // x, y

	glEnd();



	glBegin(GL_QUADS);              // road component last 3
	glColor3ub(208, 211, 212); // lawn green
	glVertex2f(-35.0f, -32.0f);    // x, y
    glVertex2f(35.0f, -32.0f);
    glVertex2f(35.0f, -30.0f);
	glVertex2f(-35.0f, -30.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 4
	glColor3ub(66, 73, 73); // dim grey
	glVertex2f(-35.0f, -30.0f);    // x, y
    glVertex2f(35.0f, -30.0f);
    glVertex2f(35.0f, -15.0f);
	glVertex2f(-35.0f, -15.0f);    // x, y

	glEnd();


	glBegin(GL_QUADS);              // road block component 1 to 5
	glColor3ub(235, 243, 244); // dim grey
	glVertex2f(-33.0f, -23.5f);    // x, y
    glVertex2f(-23.0f, -23.5f);
    glVertex2f(-23.0f, -21.5f);
	glVertex2f(-33.0f, -21.5f);    // x, y



	glVertex2f(-18.0f, -23.5f);    // x, y
    glVertex2f(-8.0f, -23.5f);
    glVertex2f(-8.0f, -21.5f);
	glVertex2f(-18.0f, -21.5f);    // x, y




	glVertex2f(-3.0f, -23.5f);    // x, y
    glVertex2f(7.0f, -23.5f);
    glVertex2f(7.0f, -21.5f);
	glVertex2f(-3.0f, -21.5f);    // x, y




	glVertex2f(12.0f, -23.5f);    // x, y
    glVertex2f(22.0f, -23.5f);
    glVertex2f(22.0f, -21.5f);
	glVertex2f(12.0f, -21.5f);    // x, y



	glVertex2f(27.0f, -23.5f);    // x, y
    glVertex2f(35.0f, -23.5f);
    glVertex2f(35.0f, -21.5f);
	glVertex2f(27.0f, -21.5f);    // x, y




	glEnd();



	glBegin(GL_QUADS);              // road component last 5
	glColor3ub(236, 235, 241); // dim grey
	glVertex2f(-35.0f, -15.0f);    // x, y
    glVertex2f(35.0f, -15.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(-35.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 6
	glColor3ub(50,205,50); // dim grey
	glVertex2f(4.0f, -13.0f);    // x, y
    glVertex2f(35.0f, -13.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(4.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 7
	glColor3ub(124,252,0); // dim grey
	glVertex2f(5.0f, -12.0f);    // x, y
    glVertex2f(35.0f, -12.0f);
    glVertex2f(35.0f, -9.0f);
	glVertex2f(5.0f, -9.0f);    // x, y

	glEnd();

    glBegin(GL_QUADS);              // road component last 8
	glColor3ub(50,205,50); // dim grey
	glVertex2f(1.0f, -13.0f);    // x, y
    glVertex2f(-35.0f, -13.0f);
    glVertex2f(-35.0f, -9.0f);
	glVertex2f(1.0f, -9.0f);    // x, y

	glEnd();

	glBegin(GL_QUADS);              // road component last 9
	glColor3ub(124,252,0); // dim grey
	glVertex2f(0.0f, -12.0f);    // x, y
    glVertex2f(-35.0f, -12.0f);
    glVertex2f(-35.0f, -9.0f);
	glVertex2f(0.0f, -9.0f);    // x, y
	glEnd();

	//tAnjimul islam


	//Full Body of yellow bus
    glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(5.00f, -20.0f);
    glVertex2f(16.0f, -20.0f);
    glVertex2f(16.0f, -16.0f);
	glVertex2f(5.0f, -16.0f);
	glEnd();


    // engine side of yellow bus
	glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(5.00f, -18.5f);
    glVertex2f(17.50f, -18.5f);
    glVertex2f(17.5f, -20.0f);
	glVertex2f(5.0f, -20.0f);
	glEnd();

    // window 1 of bus
	glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();



    // window 2 of bus
    glLoadIdentity();
	glTranslatef(1.7f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();


	// window 3 of bus


    glLoadIdentity();
	glTranslatef(3.4f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();



    // gate 1 of bus
    glLoadIdentity();
	glTranslatef(5.1f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();


    glLoadIdentity();
	glTranslatef(6.8f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();


    glLoadIdentity();
	glTranslatef(6.8f, -1.3f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50,44,44);
    glVertex2f(6.00f, -18.5f);
    glVertex2f(7.5f, -18.5f);
    glVertex2f(7.5f, -17.0f);
    glVertex2f(6.00f, -17.0f);
	glEnd();

    glLoadIdentity();



    glBegin(GL_POLYGON);
    glColor3ub(137,137,137); // dim grey
    glVertex2f(15.00f, -18.50f);
    glVertex2f(17.00f, -18.50f);
    glVertex2f(16.00f, -17.0f);
    glVertex2f(15.00f, -17.00f);

    glEnd();


    // bus font glass border
    glLineWidth(1.00);
    glBegin(GL_LINES);
    glColor3ub(254,192,0);
    glVertex2f(16.00f, -17.0f);
    glVertex2f(17.00f, -18.50f);
    glEnd();


    // bus light
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(17.50f, -19.00f);
    glVertex2f(17.50f, -19.50f);
    glEnd();


    // bus body bit 1
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(50, 44, 44);
    glVertex2f(5.2f, -19.0f);
    glVertex2f(12.00f, -19.0f);
    glEnd();


    // bus body bit 2
    glLineWidth(2.5);
    glBegin(GL_LINES);
    glColor3ub(50, 44, 44);
    glVertex2f(5.2f, -19.5f);
    glVertex2f(12.00f, -19.5f);
    glEnd();


     /**********************
	* MD. TANJIMUL ISLAM
	*  Bus1 tyre1
	***********************/
	glBegin(GL_TRIANGLE_FAN);
	x=7.0f; y=-19.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=7.0f; y=-19.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();






    /**********************
	* MD. TANJIMUL ISLAM
	*  Bus1 tyre2
	***********************/
	glBegin(GL_TRIANGLE_FAN);
	x=16.0f; y=-19.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	x=16.0f; y=-19.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();







    /**********************
	* MD. TANJIMUL ISLAM
	*  Bus2 Body
	***********************/
    glBegin(GL_QUADS);
	glColor3ub(254,192,0); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -24.0f);
	glVertex2f(-24.0f, -24.0f);
	glEnd();






	/**********************
	* MD. TANJIMUL ISLAM
	*  bus2 Full Body bit
	***********************/
	glLineWidth(0.85);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-10.0f, -28.0f);

    glVertex2f(-10.0f, -28.0f);
    glVertex2f(-10.0f, -24.0f);

    glVertex2f(-10.0f, -24.0f);
    glVertex2f(-24.0f, -24.0f);

	glVertex2f(-24.0f, -24.0f);
	glVertex2f(-24.0f, -28.0f);
	glEnd();



    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 head light
	***********************/
    glLineWidth(5.00);
    glBegin(GL_LINES);
    glColor3ub(189, 33, 0);
    glVertex2f(-24.0f, -27.00f);
    glVertex2f(-24.0f, -27.50f);
    glEnd();







    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 back bit font
	***********************/
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-23.0f, -28.0f);
    glVertex2f(-23.0f, -27.50f);
	glVertex2f(-24.0f, -27.50f);
	glEnd();


	/**********************
	* MD. TANJIMUL ISLAM
	*  bus2 view glass
	***********************/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-23.5f, -27.0f);
    glVertex2f(-24.0f, -27.0f);
    glVertex2f(-24.0f, -24.5f);
	glVertex2f(-23.5f, -24.5f);
	glEnd();



	/**********************
	* MD. TANJIMUL ISLAM
	*  bus2 back bit back
	***********************/
	glLoadIdentity();
	glTranslatef(13.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(50, 44, 44); // yellow
	glVertex2f(-24.0f, -28.0f);
    glVertex2f(-23.0f, -28.0f);
    glVertex2f(-23.0f, -27.50f);
	glVertex2f(-24.0f, -27.50f);
	glEnd();
    glLoadIdentity();







    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 door1
	***********************/
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-23.0f, -27.5f);
	glVertex2f(-22.0f, -27.5f);

    glVertex2f(-22.0f, -27.5f);
    glVertex2f(-22.0f, -24.5f);

    glVertex2f(-22.0f, -24.5f);
    glVertex2f(-23.0f, -24.5f);

	glVertex2f(-23.0f, -24.5f);
	glVertex2f(-23.0f, -27.5f);
	glEnd();



	/**********************
	* MD. TANJIMUL ISLAM
	*  bus2 door inner1
	***********************/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-22.75f, -26.25f);
    glVertex2f(-22.25f, -26.25f);
    glVertex2f(-22.25f, -24.75f);
	glVertex2f(-22.75f, -24.75f);
	glEnd();






    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 door2
	***********************/

    glLoadIdentity();
	glTranslatef(1.2f, 0.0f, 0.0f);

	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-23.0f, -27.5f);
	glVertex2f(-22.0f, -27.5f);

    glVertex2f(-22.0f, -27.5f);
    glVertex2f(-22.0f, -24.5f);

    glVertex2f(-22.0f, -24.5f);
    glVertex2f(-23.0f, -24.5f);

	glVertex2f(-23.0f, -24.5f);
	glVertex2f(-23.0f, -27.5f);
	glEnd();



	/**********************
	* MD. TANJIMUL ISLAM
	*  bus2 door inner2
	***********************/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-22.75f, -26.25f);
    glVertex2f(-22.25f, -26.25f);
    glVertex2f(-22.25f, -24.75f);
	glVertex2f(-22.75f, -24.75f);
	glEnd();
    glLoadIdentity();



    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 window1
	***********************/
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    glLoadIdentity();



    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 window2
	***********************/
    glLoadIdentity();
	glTranslatef(2.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    glLoadIdentity();



    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 window3
	***********************/
    glLoadIdentity();
	glTranslatef(4.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    glLoadIdentity();



    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 window4
	***********************/
    glLoadIdentity();
	glTranslatef(6.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    glLoadIdentity();



    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 window4
	***********************/
    glLoadIdentity();
	glTranslatef(8.0f, 0.0f, 0.0f);
    glBegin(GL_QUADS);
	glColor3ub(207, 207, 207); // yellow
	glVertex2f(-20.0f, -26.0f);
    glVertex2f(-20.0f, -24.75f);
    glVertex2f(-18.5f, -24.75f);
	glVertex2f(-18.5f, -26.0f);
	glEnd();
    glLoadIdentity();




    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 box1
	***********************/
    //glLoadIdentity();
	//glTranslatef(8.0f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-19.0f,  -27.8f);
	glVertex2f(-17.0f, -27.8f);

    glVertex2f(-17.0f, -27.8f);
    glVertex2f(-17.0f, -26.5f);

    glVertex2f(-17.0f, -26.5f);
    glVertex2f(-19.0f,  -26.5f);

	glVertex2f(-19.0f,  -26.5f);
	glVertex2f(-19.0f,  -27.8f);
	glEnd();
    glLoadIdentity();


    /**********************
	* MD. TANJIMUL ISLAM
	*  bus2 box
	***********************/
    glLoadIdentity();
	glTranslatef(3.5f, 0.0f, 0.0f);
	glLineWidth(1.0);
    glBegin(GL_LINES);
	glColor3ub(26, 26, 0); // yellow
	glVertex2f(-19.0f,  -27.8f);
	glVertex2f(-17.0f, -27.8f);

    glVertex2f(-17.0f, -27.8f);
    glVertex2f(-17.0f, -26.5f);

    glVertex2f(-17.0f, -26.5f);
    glVertex2f(-19.0f,  -26.5f);

	glVertex2f(-19.0f,  -26.5f);
	glVertex2f(-19.0f,  -27.8f);
	glEnd();
    glLoadIdentity();




     /**********************
	* MD. TANJIMUL ISLAM
	*  Bus2 tyre1
	***********************/
	glBegin(GL_TRIANGLE_FAN);
	x=-20.5f; y=-27.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();


	glBegin(GL_TRIANGLE_FAN);
	x=-20.5f; y=-27.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();






    /**********************
	* MD. TANJIMUL ISLAM
	*  Bus2 tyre2
	***********************/
	glBegin(GL_TRIANGLE_FAN);
	x=-12.0f; y=-27.8f; radius1=0.85f;
		glColor3ub(42, 55, 74);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();



	glBegin(GL_TRIANGLE_FAN);
	x=-12.0f; y=-27.8f; radius1=0.45f;
		glColor3ub(205, 204, 209);
		glVertex2f(x, y); // center of circle
		for(q = 0; q <= triangleAmount1;q++) {
			glVertex2f(
		            x + (radius1 * cos(q *  twicePi1 / triangleAmount1)),
			    y + (radius1 * sin(q * twicePi1 / triangleAmount1))
			);
		}
	glEnd();









/*   Graph for better drawing */


	glLineWidth(0.5);
	glBegin(GL_LINES);

	glColor3f(1.0f, 1.0f, 1.0f); // Red

	for(float i=-35;i<=35;i++){
        glVertex2f(-35.0f, i);
        glVertex2f(35.0f, i);
	}

    for(float j=-35;j<=35;j++){
        glVertex2f(j,-35.0f);
        glVertex2f(j,35.0f);
	}
	glEnd();


	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.0f,35.0f);
    glVertex2f(0.0f,-35.0f);
    glVertex2f(35.0f,0.0f);
    glVertex2f(-35.,0.0f);
	glEnd();


    /*Graph for better grawing */



	glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(1000, 1000);   // Set the window's initial width & height
	glutReshapeWindow(705, 705);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
