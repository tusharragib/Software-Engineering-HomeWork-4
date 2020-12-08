/*S M Ragib Shahriar Islam
Medical Imaging and Applications

Ex 3
Perform addition operation on complex data using class and object. The program
should ask for real and imaginary part of two complex numbers, and display the real
and imaginary parts of their sum.*/

#include<iostream>

class COMPLEX
{
private:
    double real;
    double imag;

public:
    void set_val()
    {
        std::cout<<"Enter Real part:"<<std::endl;
        std::cin>>real;
        std::cout<<"Enter Imaginary part(coefficient of i):"<<std::endl;
        std::cin>>imag;
    }
    void sum(COMPLEX num_1, COMPLEX num_2)
    {
        real = num_1.real + num_2.real;
        imag = num_1.imag + num_2.imag;
    }
    inline double pass_real()
    {
        return real;
    }
    inline double pass_imag()
    {
        return imag;
    }
};

int main()
{
    COMPLEX num_1;
    COMPLEX num_2;
    COMPLEX result;
    std::cout<<"Enter the first complex number"<<std::endl;
    num_1.set_val();
    std::cout<<"Enter the second complex number"<<std::endl;
    num_2.set_val();

    result.sum(num_1, num_2);
    std::cout<<"The addition result is:"<<std::endl;
    if(result.pass_imag()>=0)
    {
        std::cout<<result.pass_real()<<"+"<<result.pass_imag()<<"i"<<std::endl;
    }
    else
    {
        std::cout<<result.pass_real()<<result.pass_imag()<<"i"<<std::endl;
    }

    return 0;
}
