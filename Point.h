// A 3-dimensional point class!
// Coordinates are double-precision floating point.
//
// Edited by John-Marc Cloer
//

#ifndef __point_h
#define __point_h

class Point {

private:
    double x;
    double y;
    double z;                               // Added a third-dimension (Instruction 2)

public:
    // Constructors
    Point();                                // default constructor
    Point(double x, double y, double z);    // three-argument constructor (Instruction 2)

    // Destructor
    ~Point();

    // Mutator methods
    void setX(double newX);
    void setY(double newY);
    void setZ(double newZ);                 // Added a third mutator that sets Z (Instruction 2)
    double distanceTo(Point &a);            // Approximates the distance between the two points (Instruction 3)

    // Accessor methods
    double getX();
    double getY();
    double getZ();                          // Added a third accessor that gets Z (Instruction 2)
};

#endif // __point_h
