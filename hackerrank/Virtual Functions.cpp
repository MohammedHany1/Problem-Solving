//www.hackerrank.com/challenges/virtual-functions/problem


class Person {
protected:
    string name;
    int age;
public:
    virtual void getdata() {

    }
    virtual void putdata() {

    }
};
class Professor : public Person {
    int publications, cur_id;
public:
    static int profsCount;
    Professor() {
        profsCount++;
        cur_id = profsCount;
    }
    void getdata() {
        cin >> name >> age;
        cin >> publications;
    }
    void putdata() {
        cout << name << " " << age << " ";
        cout << publications << " " << cur_id << endl;
    }
};
int Professor::profsCount = 0;
class Student : public Person {
    float marks[6];
    int cur_id;
public:
    static int studentsCount;
    Student() {
        studentsCount++;
        cur_id = studentsCount;
    }
    void getdata() {
        cin >> name >> age;
        for (int i = 0; i < 6; i++) {
            cin >> marks[i];
        }
    }
    void putdata() {
        float sumOfMarks = 0;
        for (int i = 0; i < 6; i++)
            sumOfMarks += marks[i];
        cout << name << " " << age << " ";
        cout << sumOfMarks << " " << cur_id << endl;
    }
};
int Student::studentsCount = 0;

