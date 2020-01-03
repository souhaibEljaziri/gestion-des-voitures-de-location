
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
int verif_cin(char cin[20])
{
    int i;

        for (i=0;i<strlen(cin);i++)
        {
        if((cin[i]<'0') || (cin[i]>'9'))
        return 0;
        }
        return 1;

}
int test(liste_clt l,char x[20])
{
    while(l)
    {
        if(strcmp(l->info2.cin,x)==0)
            return 0;
        l=l->suiv2;
    }
    return 1;
}
void affiche(liste_clt l)
{
     liste_clt p;int i=8,x=0;
     p=l;char ch[20];
     system("cls");

if(p!=NULL)
{
    printf("\nil y'a des clients dans la liste -_- !!! ----menu----> !!! MISE A JOUR DE LA LISTE DES CLIENTS{si tu vue ajouter des clients}\n");
}
 system("cls");
do
{

            system("cls");
            printf("                                              Donner le cin :");
            system("type gestion_des_clients\\creation_des_clients\\pose.txt");
 gotoxy(58,5);printf("00000000");
            gotoxy(58,5);scanf("%s",&ch);

            if(test(l,ch)==1)
            {
                gotoxy(7,7);printf("\n***remarque:le cin n'exist pas dans la liste des clients!!!! \n");
            }
            if(strlen(ch)!=8)
            {
                gotoxy(7,8);printf("\n ***remarque:longeur de cin =8chiffre !!!! \n");
            }
             if(verif_cin(ch)==0)
            {
                gotoxy(7,9);printf("\n ***remarque:le cin est une numero  !!!! \n");
            }
              if((strcmp(ch,"")==0))
            {
                gotoxy(7,9);printf("\n ***remarque:le cin est vide  !!!! \n");
            }

}
while((test(l,ch)==1)||(strlen(ch)!=8)||(verif_cin(ch)==0)||(strcmp(ch,"")==0));

while(p!=NULL)
{
    if(strcmp(p->info2.cin,ch)==0)
    {
        x=1;
        system("cls");
        system("type gestion_des_clients\\creation_des_clients\\saisie.txt");
        gotoxy(3,8);printf("%s",p->info2.cin);
        gotoxy(13,8);printf("%s",p->info2.nom);
        gotoxy(33,8);printf("%s",p->info2.prenom);
        gotoxy(53,8);printf("%d",p->info2.age);
        gotoxy(71,8);printf("%s",p->info2.adr);
        gotoxy(93,8);printf("%s",p->info2.tel);
   break;
    }
        p=p->suiv2;

}

if(x==0)
{
    system("cls");
    printf("le cin n'exist pas");
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

