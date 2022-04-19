//www.hackerrank.com/challenges/rectangle-area/problem


class Rectangle {
protected:
    float width, height;
public:
    virtual void display() {
        cout << width << " " << height << endl;
    }
};

class RectangleArea : public Rectangle
{
public:
    void read_input() {
        cin >> width >> height;
    }
    void display() {
        cout << width * height << endl;
    }
};
