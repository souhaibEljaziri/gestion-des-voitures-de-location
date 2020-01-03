#include <stdio.h>
#include <windows.h>
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
liste_voit tl(liste_voit l,int i)
{
    liste_voit pi,p=l;
    int k=0;
    while(p)
    {
    if(k==i)
    {
     pi=p;
    }
    k++;
    p=p->suiv1;
    }
    return pi;
}

int length(liste_voit l)
{
    liste_voit p=l;int i=1;
    do
    {
    i++;
    p=p->suiv1;
    }
    while(p->suiv1);
    return i;
}
liste_voit permut(liste_voit l ,int i)
{
    liste_voit p,p2,p3;
    int j=1;
    if(i==1)
    {
        p2=l;
        l=l->suiv1;
        p3=l->suiv1;
        l->suiv1=p2;
        p2->suiv1=p3;
    }
    else
    {
        p=l;
        while(i-1>j)
        {
            j++;
            p=p->suiv1;
        }
            p2=p->suiv1;
            p->suiv1=p->suiv1->suiv1;
            p3=p->suiv1->suiv1;
            p->suiv1->suiv1=p2;
            p2->suiv1=p3;

    }
    return l;
}
liste_voit tri_add(liste_voit l)
{
    liste_voit p;
     int i,ok=1;

while((ok==1))
{
    ok=0;i=0;p=l;
    while(!((length(l))==i))
    {
        i++;
        if(((tl(p,i-1))->info1.prix_l)<((tl(p,i))->info1.prix_l))
        {
            l=permut(p,i-1);
        ok=1;
        }
    }
}
    return l;
}
void main()
{
     liste_voit l;
char f[500];
 l=NULL;
 l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
 l=tri_add(l);
 enregistrement(l,f);
}
