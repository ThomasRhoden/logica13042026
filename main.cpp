#include<iostream>

int main(){

    int idade;

    std::cout<<"Digite a sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade < 0){
        std::cout<<"Idade inválida!"<<std::endl;
    }else if(idade <= 2){
        std::cout<<"Você é um bebê!"<<std::endl;
    }else if(idade <= 8){
        std::cout<<"Você é uma criança!"<<std::endl;
    }else if(idade <= 17){
        std::cout<<"Você é um adolescente!"<<std::endl;
    }else{
        std::cout<<"Você é um adulto!"<<std::endl;
    }


return 0;
}