/*S M Ragib Shahriar Islam
Medical Imaging and Applications

EX 2
Write a program and input two integers in main and pass them to default constructor
of the class. Show the result of the additon of two numbers.*/

#include<iostream>

class ADDER
{
private:
    int num_1;
    int num_2;

public:
    ADDER(int n1, int n2)
    {
        num_1 = n1;
        num_2 = n2;
    }
    inline int add()
    {
        return num_1 + num_2;
    }
};

int main()
{
    int val_1;
    int val_2;
    std::cout<<"Enter two integer numbers"<<std::endl;
    std::cin>>val_1;
    std::cin>>val_2;

    ADDER obj(val_1, val_2);
    std::cout<<"The addition result is "<<obj.add()<<std::endl;

    return 0;
}
