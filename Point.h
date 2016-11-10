#ifndef POINT_H
#define POINT_H

#include <cmath>

struct Point {
	float x, y;

	float magnitude() {
		return sqrt((x * x) + (y * y));
	}
};

Point operator + (const Point &lhs, const Point &rhs) {
	return Point{ lhs.x + rhs.x, lhs.y + rhs.y };
}

Point operator - (const Point &lhs, const Point &rhs) {
	return Point{ lhs.x - rhs.x, lhs.y - rhs.y };
}

Point operator * (const Point point, const float mult) {
	return Point{ point.x * mult, point.y * mult };
}

#endif