#include <stdio.h>
#include<stdio.h>
#include <windows.h>
#include<myconio.h>

typedef struct
{
    char cin[20];
    char nom[20];
    char prenom[20];
    int age;
    char adr[50];
    char tel[9];
}client;

struct cellule2
{
    client info2;
    struct cellule2 * suiv2;
};
typedef struct cellule2 * liste_clt;
liste_clt chargement (FILE* file)
{

    int n,i,x;liste_clt l=NULL;
    liste_clt q=NULL;

    file=fopen("gestion_des_clients\\creation_des_clients\\clients.txt","r");
    if(file!=NULL)
    {

        fscanf(file,"%d\n",&n);
        if(n)
        {
            for(i=1;i<=n;i++)
            {
                l=(struct cellule2*)malloc(sizeof(struct cellule2));
                fflush(stdin);
                fscanf(file,"%s\n",&(l->info2.cin));
                fflush(stdin);
                fscanf(file,"%s\n",&(l->info2.nom));
                fflush(stdin);
                fscanf(file,"%s\n",&(l->info2.prenom));
                fflush(stdin);
                fscanf(file,"%d\n",&(l->info2.age));
                fflush(stdin);
                fscanf(file,"%s\n",&(l->info2.adr));
                fflush(stdin);
                fscanf(file,"%s\n",&(l->info2.tel));
                l->suiv2=q;
                q=l;

            }

            printf("\n\nchargement terminer ^_^");
        }
    }
    else
    {
        printf("\n\nfichier vide -_-\a");

    }
    fclose(file);
    return l;
}
void affiche(liste_clt l)
{
     liste_clt p;int i=8,j=1,x=1;
     p=l;


if(p==NULL)
{
    printf("\n           la liste est vide              \n");
}
else
{
     system("cls");
system("type gestion_des_clients\\creation_des_clients\\affichage.txt");
while(p!=NULL)
{
        gotoxy(3,i);
        printf("%s",p->info2.cin);
        gotoxy(13,i);
        printf("%s",p->info2.nom);
        gotoxy(33,i);
        printf("%s",p->info2.prenom);
        gotoxy(53,i);
        printf("%d",p->info2.age);
        gotoxy(71,i);
        printf("%s",p->info2.adr);

        gotoxy(93,i);printf("%s",p->info2.tel);

  if(i==54)
        {
         x++;
            getch();
          system("cls");
        system("type gestion_des_clients\\creation_des_clients\\affichage.txt");
          printf("\n\n\n PAGE: %d \n\n\n",x);
          printf("\n\n\n LA LISTE des CLIENTs :AFFICHAGE N°%d \n\n\n",j);
          i=6;
        }
    if(p->suiv2==NULL)
    {
        x=1;
        j++;
        printf("\n\n\nFIN DE L'AFFICHAGE DE LA LISTE CLIENT \n\n\n");
        p=l;
        getch();
    }
   i=i+2;
    p=p->suiv2;
}

}
}
liste_clt enregistrement(liste_clt p,FILE* file)
{
liste_clt l;
    int n,i,x;l=p;

    file=fopen("gestion_des_clients\\creation_des_clients\\clients.txt","w");
        fprintf(file,"%d\n",taille(l));

            while(l)
            {
                fprintf(file,"%s\n",(l->info2.cin));
                fprintf(file,"%s\n",(l->info2.nom));
                fprintf(file,"%s\n",(l->info2.prenom));
                fprintf(file,"%d\n",(l->info2.age));
                fprintf(file,"%s\n",(l->info2.adr));
                fprintf(file,"%s\n",(l->info2.tel));
                l=l->suiv2;

            }
            fclose(file);
}
int taille(liste_clt l)
{
    int cp=0;
    while(l)
    {
        cp++;
        l=l->suiv2;
    }
    return cp;
}
void main()
{
  liste_clt l;
char f[500];
  l=NULL;
  system("color 9a");
 l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
  system("cls");
enregistrement(l,f);
  affiche(l);
  gotoxy(0,0);
getch();


}

