#ifndef POINT_H
#define POINT_H

#include <cmath>

struct Point {
	float x, y;
	float mag() const;
	Point operator - () const;
};

Point operator + (const Point &lhs, const Point &rhs);

Point operator - (const Point &lhs, const Point &rhs);

bool operator == (const Point &lhs, const Point &rhs);

bool operator != (const Point &lhs, const Point &rhs);

Point operator * (const Point point, const float mult);

Point operator * (const float mult, const Point point);

Point operator / (const Point &lhs, float denominator);

#endif