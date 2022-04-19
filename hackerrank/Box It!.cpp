//www.hackerrank.com/challenges/box-it/problem

//Implement the class Box  
class Box {
    int l, b, h;
    //l,b,h are integers representing the dimensions of the box

public:
    // Constructors: 
    // Box();
    // Box(int,int,int);
    // Box(Box);

    Box() {
        l = 0;
        b = 0;
        h = 0;
    }
    Box(int length, int breadth, int height) {
        l = length;
        b = breadth;
        h = height;
    }
    Box(Box& box) {
        b = box.b;
        l = box.l;
        h = box.h;
    }

    // int getLength(); // Return box's length
    // int getBreadth (); // Return box's breadth
    // int getHeight ();  //Return box's height
    int getLength() {
        return l;
    }
    int getBreadth() {
        return b;
    }
    int getHeight() {
        return h;
    }
    // long long CalculateVolume(); // Return the volume of the box

    long long CalculateVolume() {
        long long temp = (long long)l * h * b;
        return temp;
    }

    bool operator<(Box& b) {
        if (l < b.l)
            return true;
        else if (this->b < b.b && l == b.l)
            return true;
        else if (h < b.h && l == b.l && this->b == b.b)
            return true;
        else
            return false;

    }

};
ostream& operator<<(ostream& out, Box& B) {
    out << B.getLength() << ' ' << B.getBreadth() << ' ' << B.getHeight();
    return out;
};
// The class should have the following functions : 




//Overload operator < as specified
//bool operator<(Box& b)

//Overload operator << as specified
//ostream& operator<<(ostream& out, Box& B)

