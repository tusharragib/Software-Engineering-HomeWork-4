/*S M Ragib Shahriar Islam
Medical Imaging and Applications

Ex 1
Write a class having two private variables and one member function which will return
the area of the rectangle.*/

#include<iostream>

class ArRec
{
private:
    double var_1;
    double var_2;

public:
    double area(double a, double b)
    {
        var_1 = a;
        var_2 = b;

        return var_1*var_2;
    }
};

int main()
{
    double length;
    double width;
    std::cout<<"Enter the Length of the Rectangle = ";
    std::cin>>length;
    std::cout<<"Enter the Width of the Rectangle = ";
    std::cin>>width;

    ArRec rectangle;

    std::cout<<"The Area of the Rectangle is "<<rectangle.area(length,width)<<" Square unit"<<std::endl;

    return 0;
}
