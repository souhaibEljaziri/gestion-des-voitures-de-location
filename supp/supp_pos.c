
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
int verif_mat(char ch[20])
{
    int i=0;


    if((strcmp(ch[3],"t")!=0 || strcmp(ch[3],"T")==0)&&(strcmp(ch[4],"n")==0 || strcmp(ch[4],"N")==0))
    {
        return(0);
    }

return 1;
}
int valide(date1 d)
{
    return (d.a>1900 && d.m>=1 && d.m<=12 && d.j>=1 && d.j<=jour_max(d));
}

liste_voit sup_tete(liste_voit l)
{
    liste_voit p=l;
    if(l==NULL)
        printf("\nLISTE VIDE\n");
    else
    {
        l=p->suiv1;
        free(p);
    }
    return l;
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
liste_voit sup_pos(liste_voit l ,int pos)
{
    liste_voit p,p2;
    p=l;int i=0;
    if(p==NULL)
    {
        printf("la liste est vide");
    }
    else if(p->suiv1==NULL)
    {
     free(p->suiv1);
     p=NULL;
    }
    else
    {

        while(i<pos-1)
        {
            i++;
            p=p->suiv1;
        }
        p2=p->suiv1;
        p->suiv1=p2->suiv1;
        free(p2);

    }
    return l;
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
  l=NULL;int t,pos;
  char f[50];
   l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
  if(l==NULL)
  {
 printf("\n   LA LISTE ET VIDE !!!!!! -_- \n");
  }
  else
  {
   t=taille(l);
        do
        {
            system("cls");
            printf("                                              Donner la position entre 2 et %d :",t-1);
            system("type creation_voiture\\pose.txt");
            gotoxy(58,5);scanf("%d",&pos);
        }while(!(pos>=2 && pos<=t-1));
  l=sup_pos(l,pos);
  system("cls");
enregistrement(l,f);



  }
}
