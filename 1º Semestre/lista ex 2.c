int main(){

    int hora1, minuto1, hora2, minuto2, hora3, minuto3;

    scanf("%i %i", &hora1, &minuto1);
    scanf("%i %i", &hora2, &minuto2);

    hora3 = (minuto1 + minuto2)/60;
    hora3 = hora3 + hora1 + hora2;
    minuto3 = (minuto1 + minuto2)% 60;

    printf("%i:%.2i", hora3, minuto3);



 return 0;
}
