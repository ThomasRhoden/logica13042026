#include<iostream>
#include<string>

int main(){
    std::string nome;
    float altura;
    int idade;

    std::cout<<"Digite seu primeiro nome "<<std::endl;
    std::cin>>nome;

    std::cout<<"Digite sua altura: (utilize o formato 1.80)"<<std::endl;
    std::cin>>altura;

    std::cout<<"Digite sua idade: "<<std::endl;
    std::cin>>idade;

    if(idade <= 10){
        std::cout<<"Você se enquadra na turma Infantil!"<<std::endl;
    }else if(idade <= 18){
        std::cout<<"Você se enquadra na turma Adolescente"<<std::endl;
    }else if(idade <= 60){
        std::cout<<"Você se enquadra na turma Adulto"<<std::endl;
    }else{
        std::cout<<"Você se enquadra na turma da Melhor Idade!"<<std::endl;
    }
   
return 0;
}