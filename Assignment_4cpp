#include <iostream>
#include <math.h>
using namespace std;

class Complex
{
private:
    int real, img;

public:
    void display();
    void read();
    void add(Complex);
    void subtract(Complex);
    void multiply(Complex);
};

void Complex::read()
{
    cout << "Enter real part: ";
    cin >> real;
    cout << "Enter imaginary part: ";
    cin >> img;
}

void Complex::display()
{
    cout << real << " + " << img << " i " << endl;
}

void Complex::add(Complex C1)
{
    Complex Sum;
    Sum.real = real + C1.real;
    Sum.img = img + C1.img;

    Sum.display();
}

void Complex::subtract(Complex C1)
{
    Complex Difference;
    Difference.real = real - C1.real;
    Difference.img = img - C1.img;
    Difference.display();
}

void Complex::multiply(Complex C1)
{
    Complex Product;
    Product.real = (real * C1.real) - (img * C1.img);
    Product.img = (real * C1.img) + (img * C1.real);
    Product.display();
}


int main()
{
    Complex C1, C2;
    cout << "Enter first complex number:" << endl;
    C1.read();
    cout << endl;
    cout << "Enter second complex number:" << endl;
    C2.read();
    cout << endl;
    cout << "Addition: ";
    C2.add(C1);
    cout << "Subtraction: ";
    C2.subtract(C1);
    cout << "Multiplication: ";
    C2.multiply(C1);
    return 0;
}
