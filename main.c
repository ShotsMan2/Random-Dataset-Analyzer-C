#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int array[99],sayi,n,sum=0,i,uygun,j,fark,ort,gecici,asal;

    srand(time(NULL));

    printf("n i 5-10 araliginda giriniz. \n");

    do{
        printf("n i giriniz");
        scanf("%d",&n);
    }while(n<5 || n>10);

    for(i=0;i<n/2;i++){
        for(;;){
                    sayi=rand()%26+10;

        uygun=1;

        for(j=0;j<i;j++){
            if(sayi>array[j]){
                fark=sayi-array[j];
            }
            else{
                fark=array[j]-sayi;
            }
            if(fark<8){
                uygun=0;
                break;
            }
        }
        if(uygun==1){
            break;
        }

        }
        if(uygun==1){
            array[i]=sayi;
        }
    }
    for(i=n/2;i<n;i++){
                for(;;){
                    sayi=rand()%36+59;

        uygun=1;

        for(j=0;j<i;j++){
            if(sayi>array[j]){
                fark=sayi-array[j];
            }
            else{
                fark=array[j]-sayi;
            }
            if(fark<8){
                uygun=0;
                break;
            }
        }
        if(uygun==1){
            break;
        }

        }
        if(uygun==1){
            array[i]=sayi;
        }

    }

    for(i=0;i<n;i++){
        sum+=array[i];
    }

    ort=sum/n;

    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    printf("\n ort: %d \n",ort);

    for(i=0;i<n;i++){
        if(array[i]<ort){
            array[i]=(array[i]+ort)/2;
        }
    }

    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    for(i=0;i<n-1;i++){
        for(j=0;j<n-1-i;j++){
            if(array[j]>array[j+1]){
                gecici=array[j];
                array[j]=array[j+1];
                array[j+1]=gecici;
            }
        }
    }

    printf("\n");

    for(i=0;i<n;i++){
        printf("%d ",array[i]);
    }

    sum=0;

    printf("\n asal sayi indeksleri: ");

    for(i=0;i<n;i++){
        asal=1;
        for(j=2;j<array[i];j++){
            if(array[i]%j==0){
                asal=0;
                break;
            }
        }
        if(asal==1){
            sum++;
            printf("%d ",i);
        }
    }

    printf("\n toplam asal adedi: %d",sum);

    return 0;
}
