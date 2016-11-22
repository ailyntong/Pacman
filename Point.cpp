#include "Point.h"

Point operator + (const Point &lhs, const Point &rhs) {
	return Point{ lhs.x + rhs.x, lhs.y + rhs.y };
}

Point operator - (const Point &lhs, const Point &rhs) {
	return Point{ lhs.x - rhs.x, lhs.y - rhs.y };
}

bool operator==(const Point & lhs, const Point & rhs) {
	return lhs.x == rhs.x && lhs.y == rhs.y;
}

bool operator!=(const Point & lhs, const Point & rhs) {
	return !(lhs == rhs);
}

Point operator * (const Point point, const float mult) {
	return Point{ point.x * mult, point.y * mult };
}

Point operator*(const float mult, const Point point) {
	return point * mult;
}

Point operator/(const Point & lhs, float denominator) {
	if(denominator == 0) {
		throw "Divide by Zero";
	}
	return (1 / denominator) * lhs;
}

Point Point::operator-() const {
	return Point{-x, -y};
}
