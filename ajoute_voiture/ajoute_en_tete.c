#include <stdio.h>
#include<stdio.h>
#include <windows.h>
#include<myconio.h>
typedef struct
{
    int j;
    int m;
    int a;
}date1;
typedef struct
{
    char mat[20];
    char marque[20];
    char couleur[20];
    int prix_l;
    date1 da;
    char etat[1];
}voiture;

struct cellule1
{
    voiture info1;
    struct cellule1 * suiv1;
};
typedef struct cellule1 * liste_voit;
int jour_max(date1 d)
{
    switch(d.m)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12: return 31;
        case 4:
        case 6:
        case 9:
        case 11:return 30;
        case 2:
                if(d.a%4==0 && (d.a%100!=0 || d.a%400==0) )
                    return 29;
                else
                    return 28;
    }
}

int valide(date1 d)
{
    return (d.a>1900 && d.m>=1 && d.m<=12 && d.j>=1 && d.j<=jour_max(d));
}

date1 saisie_date()
{
    date1 d;
    do
    {
        fflush(stdin);
        gotoxy(67,8);printf("                   ");
gotoxy(71,8);
        scanf("%d",&d.j);
        fflush(stdin);
gotoxy(74,8);printf("/");
     gotoxy(75,8);scanf("%d",&d.m);
        fflush(stdin);
     gotoxy(78,8);printf("/");
       gotoxy(79,8); scanf("%d",&d.a);
    }while(!(valide(d)==1));
    return d;
}
int taille(liste_voit l)
{
    int cp=0;
    while(l)
    {
        cp++;
        l=l->suiv1;
    }
    return cp;
}


 int verif_carac(char ch[20])
{
    int i;
     for (i=0;i<strlen(ch);i++)
        {
        if(((ch[i]<'a') || (ch[i]>'z'))&&((ch[i]<'A') || (ch[i]>'Z'))&&(ch[i]!=' '))
        return 0;
        }
        return 1;
}
int verif_mat(char mat[20])
{
    int i;
    if(strlen(mat)>8 || strlen(mat)==0)
    {
        return 0;
    }
    else
    {
        for (i=0;i<strlen(mat);i++)
        {
        if((mat[i]<'0') || (mat[i]>'9'))
        return 0;
        }
        return 1;
    }
}
  voiture saisir_info(liste_voit l)
{
     voiture p;

 do
{
    system("cls");
system("type  creation_voiture\\saisie.txt");

        fflush(stdin);
        gotoxy(2,8);
       gets(p.mat);
}
while((test(l,p.mat)==0)||(strlen(p.mat)!=9));
do
{gotoxy(13,8);printf("                  |                  |               |                   |                 |");
    fflush(stdin);
    gotoxy(13,8);
    gets(p.marque);
}
while(verif_carac(p.marque)==0);
do
{
    gotoxy(33,8);printf("                 |               |                   |                 |");
    fflush(stdin);
    gotoxy(33,8);
    gets(p.couleur);
}
while(verif_carac(p.couleur)==0);
do
{
    gotoxy(53,8);printf("             |                   |         D       |");
    fflush(stdin);
    gotoxy(53,8);
    scanf("%ld",&p.prix_l);
}while(p.prix_l<0);
   gotoxy(71,8);
    p.da=saisie_date();

    fflush(stdin);
do
{
    gotoxy(93,8);printf("    D      |");
    strcpy(p.etat,"D");

    }
while(strcmp(p.etat,"d")&&strcmp(p.etat,"D")&&strcmp(p.etat,"l")&&strcmp(p.etat,"L"));
    system("cls");
    return(p);

}
int test(liste_voit l,char x[20])
{
    while(l)
    {
        if(strcmp(l->info1.mat,x)==0)
            return 0;
        l=l->suiv1;
    }
    return 1;
}

liste_voit ajout_tete(liste_voit l)
{
    liste_voit p;
    p=(struct cellule1*)malloc(sizeof(struct cellule1));
    p->info1=saisir_info(l);
    p->suiv1=l;
    l=p;
    return l;
}

void affiche(liste_voit l)
{
     liste_voit p;int i=8;
     p=l;
     system("cls");
system("type creation_voiture\\affichage.txt");

while(p!=NULL)
{
        gotoxy(3,i);
        printf("%s",p->info1.mat);
        gotoxy(13,i);
        printf("%s",p->info1.marque);
        gotoxy(33,i);
        printf("%s",p->info1.couleur);
        gotoxy(53,i);
        printf("%ld",p->info1.prix_l);
        gotoxy(71,i);
        printf("%d",p->info1.da.j);
        gotoxy(74,i);printf("/");
        gotoxy(75,i);printf("%d",p->info1.da.m);
        gotoxy(78,i);printf("/");
        gotoxy(79,i);printf("%d",p->info1.da.a);
        gotoxy(93,i);printf("%s",p->info1.etat);
        p=p->suiv1;
   i=i+2;
}


}
liste_voit enregistrement(liste_voit p,FILE* file)
{
liste_voit l;
l=p;
    int n,i,x;

    file=fopen("creation_voiture\\tab.txt","w");
        fprintf(file,"%d\n",taille(l));
        while(l)
        {

                fprintf(file,"%s\n",(l->info1.mat));
                fprintf(file,"%s\n",(l->info1.marque));
                fprintf(file,"%s\n",(l->info1.couleur));
                fprintf(file,"%ld\n",(l->info1.prix_l));
                fprintf(file,"%d\n",(l->info1.da.j));
                fprintf(file,"%d\n",(l->info1.da.m));
                fprintf(file,"%d\n",(l->info1.da.a));
                fprintf(file,"%s\n",(l->info1.etat));
                l=l->suiv1;

            }
            fclose(file);
}
liste_voit chargement (FILE* file)
{

    int n,i,x;liste_voit l=NULL;
    liste_voit q=NULL;

    file=fopen("creation_voiture\\tab.txt","r");
    if(file!=NULL)
    {

        fscanf(file,"%d\n",&n);
        if(n)
        {
            for(i=1;i<=n;i++)
            {
                l=(struct cellule1*)malloc(sizeof(struct cellule1));
                 fflush(stdin);
                fscanf(file,"%s\n",&(l->info1.mat));
                 fflush(stdin);
                fscanf(file,"%s\n",&(l->info1.marque));
                 fflush(stdin);
                fscanf(file,"%s\n",&(l->info1.couleur));
                 fflush(stdin);
                fscanf(file,"%ld\n",&(l->info1.prix_l));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info1.da.j));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info1.da.m));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info1.da.a));
                 fflush(stdin);
                fscanf(file,"%s\n",&(l->info1.etat));
                l->suiv1=q;
                q=l;
            }
            printf("\n\nchargement terminer ^_^");
        }
    }
    else
    {
        printf("\n\nfichier vide -_-\a");

    }
    return l;
    fclose(file);
}
void main()
{
  liste_voit l;
system("color 9a");
  l=NULL;
  char f[500];
  l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
  l=ajout_tete(l);
  system("cls");
enregistrement(l,f);


}
