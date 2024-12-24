#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the screen

    glBegin(GL_QUADS);  // Start drawing a quadrilateral
    glColor3f(0.04, .93, .04);  // Set color to red

    // Specify the four corners of the rectangle ground
    glVertex2f(-5, 5);  // Top-left corner
    glVertex2f(10, 5);   // Top-right corner
    glVertex2f(10, -10);  // Bottom-right corner
    glVertex2f(-8.9, -10); // Bottom-left corner

    glEnd();  // End drawing

    glBegin(GL_QUADS);  // Start drawing a quadrilateral top road
    glColor3f(0.7, 0.3, 0.0);  // Set color to red

    // Specify the four corners of the rectangle mosque
    glVertex2f(-10, 8);  // Top-left corner
    glVertex2f(10, 8);   // Top-right corner
    glVertex2f(10.5,5);  // Bottom-right corner
    glVertex2f(-10,5); // Bottom-left corner

    glEnd();





    glBegin(GL_QUADS);  // Start drawing a quadrilateral left road
    glColor3f(0.7, 0.3, 0.0);  // Set color to red

    // Specify the four corners of the rectangle
    glVertex2f(-6.5, 5);  // Top-left corner
    glVertex2f(-5, 5);   // Top-right corner
    glVertex2f(-8.9,-10);  // Bottom-right corner
    glVertex2f(-11,-10); // Bottom-left corner

    glEnd();


/*
    glBegin(GL_QUADS);  // Start drawing a quadrilateral pillar of first tree
    glColor3f(1.0, 0.1, 0.0);  // Set color to red

    // Specify the four corners of the rectangle
    glVertex2f(-10.8, -5.5);  // Top-left corner
    glVertex2f(-9,-5.1);   // Top-right corner
    glVertex2f(-8.3,-5.8);  // Bottom-right corner
    glVertex2f(-8,-5.9); // Bottom-left corner

    glEnd();
*/



    glBegin(GL_QUADS);  // Start drawing a quadrilateral mosque
    glColor3f(.74, 1.0, 1.0);  // Set color to red
    // Specify the four corners of the rectangle
    glVertex2f(1.5, 15);  // Top-left corner
    glVertex2f(9,15);   // Top-right corner
    glVertex2f(7.5,8);  // Bottom-right corner
    glVertex2f(3,8); // Bottom-left corner

    glEnd();




    glBegin(GL_QUADS);  // Start drawing a quadrilateral tree
    glColor3f(0.58, .29, .0);  // Set color to red
    // Specify the four corners of the rectangle ##base of the tree
    glVertex2f(8.9, 11);  // Top-left corner
    glVertex2f(9.2,11);   // Top-right corner
    glVertex2f(9.2,8);  // Bottom-right corner
    glVertex2f(8.9,8); // Bottom-left corner

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f(0.16,.5,0.1);
    //Triangle of the tree 1

    glVertex2f(8.1,11); //bottom left
    glVertex2f(9,13.5); // top
    glVertex2f(9.9,11); //right

    glEnd();






    glBegin(GL_QUADS);  // Start drawing a quadrilateral roof of mosque
    glColor3f(1, 0.3, .6);  // Set color to red

    // Specify the four corners of the rectangle
    glVertex2f(1.5, 15);  // Top-left corner
    glVertex2f(9, 15);   // Top-right corner
    glVertex2f(9,14.3);  // Bottom-right corner
    glVertex2f(1.5,14.3); // Bottom-left corner

    glEnd();



    glBegin(GL_QUADS);  // Start drawing a quadrilateral
    glColor3f(1, 0.3, 0.6);  // Set color to red

    // Specify the four corners of the rectangle door of mosque
    glVertex2f(4, 10);  // Top-left corner
    glVertex2f(6.5, 10);   // Top-right corner
    glVertex2f(6.5,8);  // Bottom-right corner
    glVertex2f(4,8); // Bottom-left corner

    glEnd();



    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.7, 0.0, 0.0);  // Set color to red

    // Specify the four corners of the rectangle
    glVertex2f(4.5, 9);  // Top-left corner
    glVertex2f(6, 9);   // Top-right corner
    glVertex2f(6,8);  // Bottom-right corner
    glVertex2f(4.5,8); // Bottom-left corner

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.7,0.0,0.0);

    //triangle on the mosque door
    glVertex2f(4.5,9);
    glVertex2f(5.2,9.5);
    glVertex2f(6,9);

    glEnd();

    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.4, 0.0, 0.0);  // Set color to red

    // Specify the four corners of the rectangle 1st left rectangle side of AB1
    glVertex2f(-9,18);  // Top-left corner
    glVertex2f(-6,18);   // Top-right corner
    glVertex2f(-6,8);  // Bottom-right corner
    glVertex2f(-9,8); // Bottom-left corner

    glEnd();



    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(1, 1.0, 1.0);  // Set color to red

    // Specify the four corners of the rectangle ##roof 1st left rectangle side of AB1
    glVertex2f(-9,18);  // bottom-left corner
    glVertex2f(-9.2,18.5);  // Top-left corner
    glVertex2f(-5.8,18.5);   // top-right corner
    glVertex2f(-6,18);   // bottom-right corner

    glEnd();


    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.6, 1.0, .3);  // Set color to red

    // Specify the four corners of the rectangle 2nd
    glVertex2f(-6, 18);  // Top-left corner
    glVertex2f(-4.5, 16);   // Top-right corner
    glVertex2f(-4.5,8);  // Bottom-right corner
    glVertex2f(-6,8); // Bottom-left corner

    glEnd();


       glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(1.0, 1.0, 1.0);  // Set color to red

    // Specify the four corners of the rectangle 2nd

    glVertex2f(-5.8, 18.2);  // Top-left corner
    glVertex2f(-6, 18);  // bottom-left corner
    glVertex2f(-4.3, 16.2);   // Top-right corner
    glVertex2f(-4.5, 16);   // bottom-right corner


    glEnd();


    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.5, 0.0, 0.0);  // Set color to red

    // Specify the four corners of the rectangle 3rd rectangle
    glVertex2f(-4.8, 16);  // Top-left corner
    glVertex2f(-1.5,16);   // Top-right corner
    glVertex2f(-1.5,8);  // Bottom-right corner
    glVertex2f(-4.8,8); // Bottom-left corner

    glEnd();


    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(1, 1.0, 1.0);  // Set color to red

    // Specify the four corners of the rectangle 3rd rectangle inside stripe
    glVertex2f(-4.8, 11);  // Top-left corner
    glVertex2f(-1.5,11);   // Top-right corner
    glVertex2f(-1.5,10.7);  // Bottom-right corner
    glVertex2f(-4.8,10.7); // Bottom-left corner

    glEnd();



    //rectangle on 3rd rectangle of AB!
     glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(1, 1, 1.0);  // Set color to red

    // Specify the four corners of the rectangle 2nd strip of 3rd
    glVertex2f(-4.8,13.5);  // Top-left corner
    glVertex2f(-1.5,13.5);   // Top-right corner
    glVertex2f(-1.5,13.3);  // Bottom-right corner
    glVertex2f(-4.8,13.3); // Bottom-left corner

    glEnd();





    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.6, 0.0, 0.0);  // Set color to red

    // Specify the four corners of the  4rth rectangle
    glVertex2f(-1.5,14);  // Top-left corner
    glVertex2f(-.2,14);   // Top-right corner
    glVertex2f(-.2,8);  // Bottom-right corner
    glVertex2f(-1.5,8); // Bottom-left corner

    glEnd();


    glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.7, 0.0, 0.0);  // Set color to red

    // Specify the four corners of the rectangle 5th
    glVertex2f(-0.2,11.5);  // Top-left corner
    glVertex2f(1.2,11.5);   // Top-right corner
    glVertex2f(1.2,8);  // Bottom-right corner
    glVertex2f(-.2,8); // Bottom-left corner

    glEnd();


  //lines on the left rectangle of AB1
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.0,0.0);


    glVertex2f(-9,10.5); //left lower
    glVertex2f(-9,11); //left upper
    glVertex2f(-6,11); //right upper
    glVertex2f(-6,10.5); //right lower

    glEnd();



  //lines on the left rectangle of AB1
    glBegin(GL_LINES);
    glColor3f(0.0,0.6,1.0);

    glVertex2f(-9,13);
    glVertex2f(-6,13);

    glEnd();


  //lines on the left rectangle of AB1
    glBegin(GL_LINES);
    glColor3f(0.0,0.6,1.0);

    glVertex2f(-9,15);
    glVertex2f(-6,15);

    glEnd();



  //lines on the 2nd left rectangle of AB1
    glBegin(GL_LINES);
    glColor3f(0.0,0.6,1.0);

    glVertex2f(-6,10.5);
    glVertex2f(-4.5,9.5);

    glEnd();


  //lines on the 2nd left rectangle of AB1
    glBegin(GL_LINES);
    glColor3f(0.,0.6,1.0);

    glVertex2f(-6,13);
    glVertex2f(-4.5,12);

    glEnd();


  //lines on the 2nd left rectangle of AB1
    glBegin(GL_LINES);
    glColor3f(0.1,0.6,1.0);

    glVertex2f(-6,15);
    glVertex2f(-4.5,14);

    glEnd();
  glBegin(GL_QUADS);  // Start drawing a quadrilateral inside of door
    glColor3f(0.7, 0.0, 1.0);  // Set color to red

    // Specify the four corners of the rectangle
    glVertex2f(-4.2,13);  // Top-left corner
    glVertex2f(-1.9,12);   // Top-right corner
    glVertex2f(-1.9,11);  // Bottom-right corner
    glVertex2f(-4.2,12); // Bottom-left corner

    glEnd();




    glutSwapBuffers();  // Swap the buffers to display the rendered image
}

void init() {
    glClearColor(0.52, 0.80, 0.92, 1.0);  // Set background color to black
    glOrtho(-10, 10, -10, 25, -10, 10);  // Set the orthographic projection
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);  // Initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);  // Set display mode
    glutInitWindowSize(800, 600);  // Set window size
    glutCreateWindow("OpenGL Rectangle");  // Create the window

    init();  // Initialize OpenGL settings
    glutDisplayFunc(display);  // Set the display function
    glutMainLoop();  // Enter the GLUT main loop

    return 0;
}
