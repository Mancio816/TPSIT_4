//sviluppare un programma che preso un valore da 1 a 4 generare processi figli tramite un ciclo for. per ogni processo stampare il pid del padre e del figlio


#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>

int main(){
        int pid,pid_t;
        int i,n,p;
        do{
                printf("\nInserire un numero compreso tra 1 e 4: ");
                scanf("%d",&n);
        }while((n<0)||(n>4));
        printf("\nSono il padre dei padri dei vostri padri, il mio pid e': %d\n",getppid());
        for(i=0;i<n;i++){
                p=fork();
                if(p==0)
                printf("Il mio pid e' %d\nIl pid di mio padre e': %d\n",getpid(),getppid());
         }
}
