#include <stdio.h>

int main(){

int diaIni, horaIni, minutoIni, segundoIni, diaFin, horaFin, minutoFin, segundoFin, resultadoDia, resultadoHora, resultadoMinuto, resultadoSegundo;


scanf("Dia %d", &diaIni);
scanf("%d : %d : %d\n", &horaIni, &minutoIni, &segundoIni);
scanf("Dia %d", &diaFin);
scanf("%d : %d : %d", &horaFin, &minutoFin, &segundoFin);

resultadoDia = diaFin - diaIni;

if (horaFin < horaIni){

    resultadoDia = resultadoDia - 1;

    horaFin = horaFin + 24;
}

resultadoHora = horaFin - horaIni;

if (minutoFin < minutoIni){

    resultadoHora = resultadoHora - 1;
    minutoFin = minutoFin + 60;

}

resultadoMinuto = minutoFin - minutoIni;

if (segundoFin < segundoIni){

    resultadoMinuto = resultadoMinuto - 1;
    segundoFin = segundoFin + 60;

}

resultadoSegundo = segundoFin - segundoIni;

printf("%d dia(s)\n", resultadoDia);
printf("%d hora(s)\n", resultadoHora);
printf("%d minuto(s)\n", resultadoMinuto);
printf("%d segundo(s)\n", resultadoSegundo);


return 0;
}
