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
liste_clt tl(liste_clt l,int i)
{
    liste_clt pi,p=l;
    int k=0;
    while(p)
    {

    if(k==i)
    {
        pi=p;
    }
    k++;
    p=p->suiv2;
    }
    return pi;
}
liste_clt permute(liste_clt l,int i,int j)
{
    liste_clt p=l;
        client aux;

     aux=(tl(l,i))->info2;
    (tl(l,i))->info2=(tl(l,j))->info2;
    (tl(l,j))->info2=aux;
return l;
}
int length(liste_clt l)
{
    liste_clt p=l;int i=1;
    do
    {
    i++;
    p=p->suiv2;
    }
    while(p->suiv2);
        return i;
}
liste_clt trie(liste_clt l)
{
    int i,ok=1;
    liste_clt p;
while((ok==1))
{
    ok=0;i=0;p=l;
    while(!((length(l))==i))
    {

        i++;
        if (strcmp(((tl(p,i-1))->info2.nom),((tl(p,i))->info2.nom))>0)
        {
            p=permute(p,i-1,i);
        ok=1;
        }
        if(strcmp((tl(p,i-1))->info2.nom,((tl(p,i))->info2.nom))==0)
        {
           if (strcmp(((tl(p,i-1))->info2.prenom),((tl(p,i))->info2.prenom))>0)
        {
            p=permute(p,i-1,i);
        ok=1;
        }
        }

    }

}


return l;
}
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
 l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
l=trie(l);
enregistrement(l,f);

}
