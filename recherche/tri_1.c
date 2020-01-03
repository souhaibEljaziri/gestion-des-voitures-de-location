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
liste_voit permute(liste_voit l,int i,int j)
{
    liste_voit p=l;
    voiture aux;
    aux=(tl(l,i))->info1;
    (tl(l,i))->info1=(tl(l,j))->info1;
    (tl(l,j))->info1=aux;
    return l;
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
liste_voit trie(liste_voit l)
{
    int i,ok=1;
    liste_voit p;
while((ok==1))
{
    ok=0;i=0;p=l;
    while(!((length(l))==i))
    {
        i++;
        if(((tl(p,i-1))->info1.prix_l)<((tl(p,i))->info1.prix_l))
        {
            p=permute(p,i-1,i);
        ok=1;
        }
    }
}
return l;
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
    fclose(file);
    return l;
}
liste_voit enregistrement(liste_voit p,FILE* file)
{
liste_voit l;
    int n,i,x;l=p;

    file=fopen("creation_voiture\\tab.txt","w");
        fprintf(file,"%d\n",length(l));

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

void main()
{

 liste_voit l;
char f[500];
  l=NULL;
 l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
l=trie(l);
enregistrement(l,f);

}

