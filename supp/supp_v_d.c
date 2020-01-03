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
liste_voit sup_element(liste_voit l,char x[20])
{
    liste_voit p=l,q=NULL;
    if(l==NULL)
        return NULL;
    if(strcmp(l->info1.mat,x)==0)
    {
        q=l;
        l=l->suiv1;
        free(q);
        return l;
    }
    while(p!=NULL)
    {
        q=p;
        p=p->suiv1;
        if((p!=NULL)&&(strcmp(p->info1.mat,x)==0))
            break;
    }
    if(p==NULL)
        return l;
    else
    {
        q->suiv1=p->suiv1;
        free(p);
        return l;
    }
}
liste_voit enregistrement(liste_voit p,FILE* file)
{
liste_voit l;
    int n,i,x;l=p;

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


        }
    }
    else
    {
        printf("\n\nfichier vide -_-\a");

    }
    fclose(file);
    return l;
}
void main()
{
     liste_voit l;
char f[500];char mat[20];
  l=NULL;
 l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
system("type creation_voiture\\pose.txt");
    gotoxy(58,2);printf("saisir le mat de voiture:");
    gotoxy(58,5);gets(mat);
sup_element(l,mat);
enregistrement(l,f);
}
