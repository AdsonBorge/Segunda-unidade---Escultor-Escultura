#include <iostream>
#include <fstream>
#include "sculptor.h"
#include "voxel.h"
using namespace std;

int main(void)
{
    sculptor robo(200,200,200);

    robo.setColor(1,1,1,1);
    //cabeça
    robo.putBox(60,80,60,75,60,80);
    //corpo
    robo.putBox(62,78,48,60,62,78);

    //braço esquerdo
    robo.putBox(58,62,50,58,66,70);
    robo.putBox(58,62,50,54,66,76);

    //braço direito
    robo.putBox(78,82,50,58,66,70);
    robo.putBox(78,82,50,54,66,76);

    //pernas
    robo.putBox(62,67,41,48,67,73);
    robo.putBox(73,78,41,48,67,73);

    //mãos
    robo.setColor(0,0,0,1);

    robo.putBox(58,62,50,54,76,79);
    robo.putBox(78,82,50,54,76,79);

    //pés
    robo.putBox(62,67,39,41,67,75);
    robo.putBox(73,78,39,41,67,75);

    robo.setColor(0.6,0.6,0.6,1);
    robo.putBox(62,67,38,39,67,75);
    robo.putBox(73,78,38,39,67,75);


    //viseira
    robo.setColor(0,0,0.31,0.5);
    robo.putBox(60,80,62,73,62,80);


    //mochila
    robo.setColor(0.6,0.6,0.6,1);
    robo.putBox(60,62,58,59,59,70);
    robo.putBox(78,80,58,59,59,70);

    robo.putBox(60,80,47,76,54,59);

    robo.putBox(77,78,76,85,56,57);
    robo.putBox(75,76,76,82,56,57);


    robo.setColor(0,0,1,0.5);
    robo.putVoxel(77,85,56);

    robo.setColor(1,0,0,0.5);
    robo.putVoxel(75,82,56);
    robo.putSphere(65,75,56,2);

    //face
    robo.setColor(0.39,1,0.94,1);
    robo.putBox(68,72,64,66,79,80);
    robo.putBox(64,68,68,71,79,80);
    robo.putBox(72,76,68,71,79,80);

    //detalhes da face
    robo.setColor(0,0,0.31,0.5);
    robo.putBox(69,71,65,66,79,80);
    robo.putVoxel(68,64,79);
    robo.putVoxel(71,64,79);


    //ambiente
    //robo.setColor(0.78,0.47,0.33,1);
    robo.setColor(0,1,0,1);
    robo.putBox(50,89,37,38,50,90);

    robo.writeOFF((char*)"Robo.off");
    return 0;
}
