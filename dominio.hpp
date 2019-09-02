#ifndef DOMINIO_HPP
#define DOMINIO_HPP


//////////////////////////////////////////
//  Dominio Assento: recebe um char     //
//  indicando o tipo de assento, sendo  //
//  T = traseiro ou D = dianteiro       //
//////////////////////////////////////////
class Assento{
private:
    void set_tipo_de_assento(char tipo);
    char get_tipo_de_assento();
    char tipo_de_assento;
public:
    Assento(char tipo);

};

class Bagagem{
private:
    int numero_de_bagagem;
    void set_numero_de_bagagem(int num);
    int get_numero_de_bagagem();
public:
    Bagagem(int num);
};




#endif