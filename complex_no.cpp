// #include <iostream>
// using namespace std;
// class complex
// {
//     int a;
//     int b;

// public:
//     complex()
//     {
//         int a = 0;
//         int b = 0;
//     }
//     int number()
//     {
//         cout << "Enter the Value of a and b \n";
//         cin >> a >> b;
//         cout << "The complex number is \n"
//              << a << "+" << b<<"i";
//     }
// };
// int main()
// {
//     complex obj;
//     obj.number();
// }
#include <iostream>
using namespace std;
class complex //class name complex is declared
{
    float realp, imagp;

public:
    complex() //default constructor
    {
        realp = 0;
        imagp = 0;
    }
    complex operator+(complex &); //for addition of two complex nos
    complex operator*(complex &); //for multiplication of two complex nos
    complex(float, float);        //parameterized constructor
    friend istream &operator>>(istream &, complex &);
    friend ostream &operator<<(ostream &, complex &);
};
complex::complex(float x, float y) //parameterized constructor definition
{
    realp = x;
    imagp = y;
}

istream &operator>>(istream &in, complex &c) //function to accept values of real and imag parts of complex no
{
    cout << "Enter real part of complex number: ";
    in >> c.realp;
    cout << "Enter imaginary part of complex number: ";
    in >> c.imagp;
    return in;
}

ostream &operator<<(ostream &out, complex &c) //functions to display complex nos
{
    out << c.realp << " + " << c.imagp << "i";
    out << endl;
    return out;
}

complex complex::operator+(complex &c) //function to add two complex nos
{
    complex temp;
    temp.realp = realp + c.realp;
    temp.imagp = imagp + c.imagp;
    return temp;
}

complex complex::operator*(complex &c) //function to multiply two complex nos
{
    complex mul;
    mul.realp = (realp * c.realp) - (imagp * c.imagp);
    mul.imagp = (imagp * c.realp) + (realp * c.imagp);
    return mul;
}
int main()
{
    complex c1, c2, c3;
    cout << "___Enter 1st complex number___\n";
    cin >> c1;
    cout << "\n___Enter 2nd complex number___\n";
    cin >> c2;
    cout << "Complex number 1 is: ";
    cout << c1;
    cout << "Complex number 2 is: ";
    cout << c2;
    cout << "\nAddition of two complex numbers is: ";
    c3 = c1 + c2;
    cout << c3;
    cout << "\nMultiplication of two complex numbers is: ";
    c3 = c1 * c2;
    cout << c3; //display value of c3
    return 0;
}