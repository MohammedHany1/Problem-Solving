//www.hackerrank.com/challenges/accessing-inherited-functions/problem



class D : public A, public B, public C
{

    int val;
public:
    //Initially val is 1
    D()
    {
        val = 1;
    }


    //Implement this function
    void update_val(int new_val)
    {
        int countA = 0, countB = 0, countC = 0;
        while (new_val != 1) {
            if (new_val % 2 == 0) {
                new_val /= 2;
                countA++;
            }
            if (new_val % 3 == 0) {
                new_val /= 3;
                countB++;
            }
            if (new_val % 5 == 0) {
                new_val /= 5;
                countC++;
            }
        }
        for (int i = 0; i < countA; i++) {
            A::func(val);
        }
        for (int i = 0; i < countB; i++) {
            B::func(val);
        }
        for (int i = 0; i < countC; i++) {
            C::func(val);
        }


    }
    //For Checking Purpose
    void check(int); //Do not delete this line.
};