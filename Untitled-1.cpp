#include <iostream>
#include <cassert>

int main() {
    int number[15];

    std::cout<<"Введите первое число: ";
    std::cin>>number[0];
    assert(number[0]>0);

    std::cout<<"Введите число-дубликат из диапазона ["<<number[0]<<", "<<number[0]+13<<"]:";
    std::cin>>number[14];
    assert(number[14]>=number[0]);
    assert(number[14]<=number[0]+13);

    for (int i=1;i<14;i++) {
        number[i]=number[i-1]+1;
    }

    int sumFact=0;



    for (int i=0;i<15;i++) {
        std::cout<<number[i]<<std::endl;
        sumFact+=number[i];
    }
    std::cout<<"====\n";
    std::cout<<"Фактическая сумма "<<sumFact<<std::endl;

    int sumTheor=(number[0] + (number[0]+(14-1)*1 ) )*14/2;//arithm. progression formula
    std::cout<<"Теоретическая сумма "<<sumTheor<<std::endl;
    int dublicat=sumFact-sumTheor;

    
    std::cout<<"Число дубликат "<<dublicat<<std::endl;







}