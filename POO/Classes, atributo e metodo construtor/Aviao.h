class Aviao{
    public:
        int vel = 0; // Atributo
        int velmax;
        std::string tipo; //tipo string precisa do namespace std
        Aviao(int tp); // Metodo construtor prototipado
    private:
}; // ponto e virgula dos infernos ("Deu trabalho achar o erro")

Aviao::Aviao(int tp){ //Metodo construtor feito
    if(tp == 1){
        this->velmax=800;
        this->tipo = "Jato";
    }
}