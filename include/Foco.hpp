#include <Piedra.hpp>
#include <Humo.hpp>

class Foco
{
private:
    Piedra piedra;
    
public:
    Foco() {}
    ~Foco() {}
    Humo Fumar(){
        return piedra.Quemar();
    }

};