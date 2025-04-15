#include <SFML/Audio.hpp>
#include <iostream>

using namespace std;

int main(){
    sf::Music plutonio;

    if(!plutonio.openFromFile("plutonio.ogg")){
        cout<<"Erro ao carregar o arquivo de audio!\n";
        return  -1;
    }

    plutonio.play();
    cout<<"Tocando muusica...";

    //Espera o audio terminar
    while(plutonio.getStatus()==sf::SoundSource::Playing){
        sf::sleep(sf::milliseconds(100));
    }

    return 0;
}