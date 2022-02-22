#pragma once

class Pipe
{
public:
	Pipe();
	void Draw();
	bool isOverlapping(double x, double y);

	double x, y;
	double top_y;
	double w;
	double h;

private:
	double bottom_y = 0;
};