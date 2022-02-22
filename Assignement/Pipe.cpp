#include "Pipe.h"
#include <math.h>
#include <GL/glut.h>

Pipe::Pipe()
{
	x = 1400;
	y = 200;
	w = 50;
}

bool Pipe::isOverlapping(double _x, double _y)
{
	double distA = sqrt(pow(_x - x, 2.0) + pow(_y - top_y, 2.0));
	double distB = sqrt(pow(_x - x, 2.0) + pow(_y - bottom_y, 2.0));

	if (distA < distB)
		return distA <= 50;
	else
		return distB <= 50;
}

void Pipe::Draw()
{
	glPushMatrix();

	glColor3f(0, 195, 0);

	glBegin(GL_QUADS);
	glVertex2d(x, y);
	glVertex2d(x, 0);
	glVertex2d(x + w, 0);
	glVertex2d(x + w, y);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2d(x - w / 2, 100);
	glVertex2d(x - w / 2, 0);
	glVertex2d(x, 0);
	glVertex2d(x, 100);
	glEnd();

	glBegin(GL_QUADS);
	glVertex2d(x + w / 2, 300);
	glVertex2d(x + w / 2, 0);
	glVertex2d(x, 0);
	glVertex2d(x, 300);
	glEnd();

	glPopMatrix();
}