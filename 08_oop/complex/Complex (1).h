class Complex
{
public:
    Complex();
    Complex(float re, float im);
    ~Complex();
    float abs();
// private:
    float re;
    float im;
   
};

bool operator ==(const Complex &a, const Complex &b);
Complex operator+(const Complex &a, const Complex &b);
Complex operator-(const Complex &a, const Complex &b);