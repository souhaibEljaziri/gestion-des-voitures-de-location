
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
liste_clt sup_tete(liste_clt l)
{
    liste_clt p=l;
    if(l==NULL)
        printf("\nLISTE VIDE\n");
    else
    {
        l=p->suiv2;
        free(p);
    }
    return l;
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
int cin_verif(char ch[20])
{
    int i;
    for(i=0;i<3;i++)
    {
    if((ch[i]<"0")||(ch[i]>"9"))
    {
        return 0;
    }
    }
    if(((strcmp(ch[3],"t"))&&(strcmp(ch[3],"T")))||((strcmp(ch[4],"N"))&&(strcmp(ch[4],"n"))))
    {
        return 0;
    }
    for(i=5;i<9;i++)
    {
    if((ch[i]<"0")||(ch[i]>"9"))
    {
        return 0;
    }
    }
    return 1;
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
 client saisir_info(liste_clt l)
{
     client p;

 do
{
    system("cls");
system("type  gestion_des_clients\\creation_des_clients\\saisie.txt");

        fflush(stdin);
            gotoxy(2,8);printf("00000000");
        gotoxy(2,8);
       gets(p.cin);
}
while((test(l,p.cin)==0)||(strlen(p.cin)!=8)||(verif_cin(p.cin)==0));
do
{gotoxy(13,8);printf("                  |                  |               |                   |                 |");
    fflush(stdin);
    gotoxy(13,8);
    gets(p.nom);
}
while(verif_carac(p.nom)==0);
do
{
    gotoxy(33,8);printf("                 |               |                   |                 |");
    fflush(stdin);
    gotoxy(33,8);
    gets(p.prenom);
}
while(verif_carac(p.prenom)==0);
do
{
    gotoxy(53,8);printf("             |                   |                 |");
    fflush(stdin);
    gotoxy(53,8);
    scanf("%ld",&p.age);
}while(p.age<19);
   gotoxy(71,8);
    scanf("%s",&p.adr);

    fflush(stdin);
do
{
    gotoxy(93,8);printf("           |");
        gotoxy(93,8);printf("00000000");
   gotoxy(93,8);
    scanf("%s",&p.tel);

    }
while((strlen(p.tel)!=8)||(verif_cin(p.cin)==0));
    system("cls");
    return(p);

}
liste_clt ajout_tete(liste_clt l)
{
    liste_clt p;
    p=(struct cellule2*)malloc(sizeof(struct cellule2));
    p->info2=saisir_info(l);
    p->suiv2=l;
    l=p;
    return l;
}
liste_clt ajout_queue(liste_clt l)
{
    liste_clt p,q;
    p=(struct cellule2*)malloc(sizeof(struct cellule2));
    p->info2=saisir_info(l);
    if(l==NULL)
    {
        p->suiv2=l;
        l=p;
    }
    else
    {
        q=l;
       while(q->suiv2!=NULL)
        {
            q=q->suiv2;
        }
        p->suiv2=q->suiv2;
        q->suiv2=p;
    }
    return(l);
}

void ajout_pos(liste_clt l,int pos)
{
    int i=1;
    liste_clt p=l,q;
    while(i<pos-1)
    {
        i++;
        p=p->suiv2;
    }
    q=(struct cellule2*)malloc(sizeof(struct cellule2));
    q->info2=saisir_info(l);
    q->suiv2=p->suiv2;
    p->suiv2=q;

}
liste_clt remplir(liste_clt l)
{
    int pos,rep,t;
    do
    {
        t=taille(l);
        do
        {
            system("cls");
            printf("                                              Donner la position entre 1 et %d :",t+1);

            system("type gestion_des_clients\\creation_des_clients\\pose.txt");
            gotoxy(58,5);scanf("%d",&pos);
        }while(!(pos>=1 && pos<=t+1));
        if(pos==1)
            l=ajout_tete(l);
        else
            if(pos==t+1)
                l=ajout_queue(l);
            else
                ajout_pos(l,pos);
        do
        {
            system("type gestion_des_clients\\creation_des_clients\\pos.txt");
            gotoxy(60,2);
            scanf("%d",&rep);
        }while(!(rep==1 || rep==0));
    }while(!(rep==0));
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
void affiche(liste_clt l)
{
     liste_clt p;int i=8;
     p=l;
     system("cls");
system("type gestion_des_clients\\creation_des_clients\\affichage.txt");
if(p!=NULL)
{
    printf("\nil y'a des clients dans la liste -_- !!! ----menu----> !!! MISE A JOUR DE LA LISTE DES CLIENETS{si tu vue ajouter des clients}\n");
}

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
        p=p->suiv2;
   i=i+2;
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

void main()
{
  liste_clt l;
char f[500];
system("color 9a");
  l=NULL;
 l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
l=ajout_tete(l);
 enregistrement(l,f);

}

