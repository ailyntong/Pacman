#ifndef POINT_H
#define POINT_H

#include <cmath>

struct Point {
	float x, y;

	float magnitude() {
		return sqrt((x * x) + (y * y));
	}
};

Point operator + (const Point &lhs, const Point &rhs);

Point operator - (const Point &lhs, const Point &rhs);

Point operator * (const Point point, const float mult);

#endif