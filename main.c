#include <stdio.h>
#include <stdlib.h>

int main()
{
   /** Partie 1**/
   //Exercice1
   /** float T[50],max;
    int i,N;
    printf("Donner la taille du tableau \n");
    scanf("%d",&N);
    for (i=0;i<N;i++){
        scanf("%f",&T[i]);
    }
    max=T[0];

    for (i=1;i<N;i++){
        if (T[i]>max){
            max=T[i];
        }
    }
    printf("La plus grande valeur de T = %.2f\n",max);
    for (i=N-1;i>=0;i--){
        printf("%f\t",T[i]*2+T[i]);
    }**/

    /**
    //Exercice2
    int T1[30],N,i,T2[30];
    do {
        printf("Donner la taille du tableau \n");
        scanf("%d",&N);
    } while ((N<=0)&&(N>30));
    printf("Remplissage \n");
    for (i=0;i<N;i++){
        scanf("%d",&T1[i]);
    }
    int j=2,indiceT2=0;
    int premier;
    for (i=0;i<N;i++){
        premier = 1;
        j=2;
        while((j<=(T1[i]/2))&&(premier)){
            if (T1[i]%2==0){
                premier=0;
            }
            j++;
        }
        if (premier){
            T2[indiceT2]=T1[i];
            indiceT2++;
        }
    }
    printf("Affichage T1\n");
    for (i=0;i<N;i++){
        printf("%d\t",T1[i]);
    }
     printf("\nAffichage T2\n");
    for (i=0;i<indiceT2;i++)
        printf("%d\t",T2[i]);
    **/

    /**Exercice3**/
   /** int T1[]= {-10, 44, -2, 19, 60, 89, -23};
    int T2[7],i;
    for (i=0;i<7;i++){
        printf("Donner L'element %d ",i);
        scanf("%d",&T2[i]);
    }
    int imin = 0;
    int aux,j;

    for (i=0; i<7; i++) {
        imin = i;
        for (j = i + 1; j < 7; j++) {
            if (T2[j] < T2[imin]) {
                imin = j;
            }
        }
        aux = T2[imin];
        T2[imin] = T2[i];
        T2[i] = aux;
    }

    for (i=0;i<7;i++){
        printf("%d\t",T2[i]);
    }
    int scalaire=0;
    for (i=0;i<7;i++){
        scalaire+=T1[i]*T2[i];
    }
    printf("\nLe produit scalaire de T1 et T2 = %d",scalaire);
    **/
    /**Exercice 4 **/
    /**
    int M,i,j,C[100][100];
    printf("Donner la taille de la matrice ");
    scanf("%d", &M);
    for (i=0;i<M;i++){
        for (j=0;j<M;j++){
            scanf("%d",&C[i][j]);
        }
    }

    for (i=0;i<M;i++){
        for (j=0;j<M;j++){
            if (i==j){
                C[i][j]=0;
            }
        }
    }
    printf("\nAffichage de la matrice\n");
    for (i=0;i<M;i++){
        for (j=0;j<M;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }**/
    /**Exercice 5**/
    /**
    int L,Col, A[100][100], B[100][100],i,j;
    do
    {
        printf("Donner le nombre des lignes ");
        scanf("%d",&L);
    } while (L<=0);

    do
    {
        printf("Donner le nombre des colonnes ");
        scanf("%d",&Col);
    } while (Col<=0);

    printf("\nRemplissage de la matrice A \n");
    for (i=0;i<L;i++){
        for (j=0; j<Col; j++){
            printf("Donner l'element A[%d][%d]\n", i,j);
            scanf("%d",&A[i][j]);
        }
    }
    printf("\nRemplissage de la matrice B \n");
    for (i=0;i<L;i++){
        for (j=0; j<Col; j++){
            printf("Donner l'element B[%d][%d]\n", i,j);
            scanf("%d",&B[i][j]);
        }
    }
    int C[100][100];
    for(i=0;i<L;i++){
        for (j=0;j<Col;j++){
            C[i][j]=A[i][j]+B[i][j];
        }
    }
    printf("\nAffichage de la matrice C\n");
    for (i=0;i<L;i++){
        for (j=0;j<Col;j++){
            printf("%d\t",C[i][j]);
        }
        printf("\n");
    }**/



    ///Partie 2
    /**Exercice1**/

    /**Exercice3 **/
   /** int * A , *B;
    int N, M;
    do {
        printf("Donner la taille du tableau A\n");
        scanf("%d",&N);
    } while ((N>100)||(N<1));
    do {
        printf("Donner la taille du tableau B\n");
        scanf("%d",&M);
    } while ((M>100)||(M<1));

    A = (int*) malloc((N+M)*sizeof(int));
    B = (int*) malloc(M*sizeof(int));
    int i,j;
    printf("\nRemplissage du tableau A\n");
    for (i=0;i<N;i++){
        scanf("%d",A+i);
    }


    printf("\n");
    printf("\nRemplissage du tableau B\n");
    for (j=0;j<M;j++){
        scanf("%d",B+j);
    }
    printf("Affichage du tableau A\n");
    for (i=0;i<N;i++){
        printf("%d\t",*(A+i));
    }
    printf("Affichage du tableau B\n");
    for (j=0;j<M;j++){
        printf("%d\t",*(B+j));
    }
    printf("\n");
    int k;
    printf("A = %d\t B = %d",i,j);
    for (k=0;k<M;k++){
        *(A+(K+N)) = *(B+k);
       // A[k+N]=B[k];
    }
    printf("Affichage du tableau A après copiage de B\n");
    for (i=0;i<N+M;i++){
        printf("%d\t",*(A+i));
    }
    **/

    ///Exercice 4
   int N,i;
    do {
        printf("Donner N ");
        scanf("%d",&N);
    } while (N<1);
    int * p1;
    int * T1 = (int *) malloc (N * sizeof(int));
    int * p2 = (int *) malloc (N * sizeof(int));
    p1=T1;
    for (p1=T1;p1<T1+N;p1++){
        scanf("%d",p1);
    }
    printf("Affichage du tableau T1\n");
     for (p1=T1;p1<T1+N;p1++){
        printf("%d\t",*p1);
    }
    p2=T1;
    printf("\nInverser le tableau \n");
    for (p2=T1+N-1;p2>=T1;p2--){
        printf("%d\t",*p2);
    }


    return 0;
}
