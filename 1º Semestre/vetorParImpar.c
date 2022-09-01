int main()
{

    int i, numeros;

    scanf("%d", &numeros);

    int vet[numeros];

    for(i=0; i<numeros; i++)
    {

        scanf("%d", &vet[i]);

    }

    for(i=0; i<numeros; i++)
    {
        if(vet[i] >= 0 && (vet[i] % 2 == 0))
        {
            printf("par +\n");
        }
        else if (vet[i] > 0 && (vet[i] % 2 != 0))
        {
            printf("impar +\n");
        }
        else if (vet[i] < 0 && (vet[i] % 2 == 0))
        {
            printf("par -\n");
        }
        else
        {
            printf("impar -\n");
        }
    }

return 0;
}
