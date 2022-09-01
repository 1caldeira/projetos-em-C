int main(){

 float B, b, h, area;

 printf("Entre com B: ");
 scanf("%f", &B);
 printf("Entre com b: ");
 scanf("%f", &b);
 printf("Entre com h: ");
 scanf("%f", &h);

 area = ((B + b) * h)/2;

 printf("Area = %.3f Km2\n", area);

 if (area < 18.5){

    printf("Tomate\n");

 } else if (area <= 24.9){

    printf("Morango\n");

 } else if (area <= 30){

    printf("Uva\n");

 } else {

    printf("Banana\n");
 }


 return 0;
}
