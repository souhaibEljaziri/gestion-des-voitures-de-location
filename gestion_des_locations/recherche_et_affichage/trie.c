#include <stdio.h>
#include<stdio.h>
#include <windows.h>
#include<myconio.h>
typedef struct
{
    int h;
    int j;
    int m;
    int a;
}date2;
typedef struct
{

    long int num;
    char cin[20];
    char mat[9];
    date2 dl;
    float dureel;
    float mt_p;
}location;
struct cellule3
{
    location info3;
    struct cellule3 * suiv3;
};
typedef struct cellule3 * liste_loc;
int taille(liste_loc l)
{
    int cp=0;
    while(l)
    {
        cp++;
        l=l->suiv3;
    }
    return cp;
}
liste_loc enregistrement(liste_loc p,FILE* file)
{
liste_loc l;
l=p;
    int n,i,x;

    file=fopen("gestion_des_locations\\tab.txt","w");
        fprintf(file,"%d\n",taille(l));
        while(l)
        {

                fprintf(file,"%ld\n",(l->info3.num));
                fprintf(file,"%s\n",(l->info3.cin));
                fprintf(file,"%s\n",(l->info3.mat));
                fprintf(file,"%d\n",(l->info3.dl.h));
                fprintf(file,"%d\n",(l->info3.dl.j));
                fprintf(file,"%d\n",(l->info3.dl.m));
                fprintf(file,"%d\n",(l->info3.dl.a));
                fprintf(file,"%f\n",(l->info3.dureel));
                fprintf(file,"%f\n",(l->info3.mt_p));
                l=l->suiv3;

            }
            fclose(file);
}
liste_loc chargement (FILE* file)
{

    int n,i,x;liste_loc l=NULL;
    liste_loc q=NULL;

    file=fopen("gestion_des_locations\\tab.txt","r");
    if(file!=NULL)
    {

        fscanf(file,"%d\n",&n);
        if(n)
        {
            for(i=1;i<=n;i++)
            {
                l=(struct cellule3*)malloc(sizeof(struct cellule3));
                 fflush(stdin);
                fscanf(file,"%ld\n",&(l->info3.num));
                 fflush(stdin);
                fscanf(file,"%s\n",&(l->info3.cin));
                 fflush(stdin);
                fscanf(file,"%s\n",&(l->info3.mat));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info3.dl.h));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info3.dl.j));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info3.dl.m));
                 fflush(stdin);
                fscanf(file,"%d\n",&(l->info3.dl.a));
                 fflush(stdin);
                fscanf(file,"%f\n",&(l->info3.dureel));
                fflush(stdin);
                fscanf(file,"%f\n",&(l->info3.mt_p));
                l->suiv3=q;
                q=l;
            }
        }
    }
    else
    {
        printf("\n\nfichier vide -_-\a");

    }
    return l;
    fclose(file);
}
liste_loc tl(liste_loc l,int i)
{
    liste_loc pi,p=l;
    int k=0;
    while(p)
    {

    if(k==i)
    {
        pi=p;
    }
    k++;
    p=p->suiv3;
    }
    return pi;
}
liste_loc permute(liste_loc l,int i,int j)
{
    liste_loc p=l;
        location aux;

     aux=(tl(l,i))->info3;
    (tl(l,i))->info3=(tl(l,j))->info3;
    (tl(l,j))->info3=aux;
return l;
}
int length(liste_loc l)
{
    liste_loc p=l;int i=1;
    do
    {
    i++;
    p=p->suiv3;
    }
    while(p->suiv3);
        return i;
}
liste_loc trie(liste_loc l)
{
    int i,ok=1;
    liste_loc p;
while((ok==1))
{
    ok=0;i=0;p=l;
    while(!((length(l))==i))
    {

        i++;
        if(((tl(p,i-1))->info3.mt_p)<((tl(p,i))->info3.mt_p))
        {
            p=permute(p,i-1,i);
        ok=1;
        }

    }

}


return l;
}
void main()
{
  liste_loc l;
  l=NULL;
  char f[500];
  l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
 l=trie(l);
enregistrement(l,f);
}


