#include <stdio.h>
#include<stdio.h>
#include <windows.h>
#include<myconio.h>
#include <time.h>
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



int jour_max(date2 d)
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

int valide(date2 d)
{
    return (d.a>1900 && d.m>=1 && d.m<=12 && d.j>=1 && d.j<=jour_max(d));
}

date2 saisie_date()
{
    date2 d;
    do
    {
        fflush(stdin);
        gotoxy(50,8);printf("|               |                   |                 |");
gotoxy(51,8);
        scanf("%d",&d.h);
        fflush(stdin);
gotoxy(55,8);
gotoxy(55,8);
        scanf("%d",&d.j);
        fflush(stdin);
gotoxy(57,8);printf("/");
     gotoxy(58,8);scanf("%d",&d.m);
        fflush(stdin);
     gotoxy(61,8);printf("/");
       gotoxy(62,8); scanf("%d",&d.a);
    }while(!(valide(d)==1));
    return d;
}
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
int test_mat_voit(liste_voit l,char x[20])
{
    while(l)
    {
        if(strcmp(l->info1.mat,x)==0)
            return 0;
        l=l->suiv1;
    }
    return 1;
}
int test(liste_loc l,char x[20])
{
    while(l)
    {
        if(strcmp(l->info3.mat,x)==0)
            return 0;
        l=l->suiv3;
    }
    return 1;
}
int test_cin_clt(liste_clt l,char x[20])
{
    while(l)
    {
        if(strcmp(l->info2.cin,x)==0)
            return 0;
        l=l->suiv2;
    }
    return 1;
}
int test_cin(liste_loc l,char x[20])
{
    while(l)
    {
        if(strcmp(l->info3.cin,x)==0)
            return 0;
        l=l->suiv3;
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
liste_voit chargement_voit (FILE* file)
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


liste_clt chargement_clt (FILE* file)
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
long int num_max(liste_loc l)
{
    int max=0;
    while(l)
    {
        if(l->info3.num>max)
            max=l->info3.num;
        l=l->suiv3;
    }
    return max;
}
long int date_jour(date2 d)
{
    date2 d1=d,d2=d;
    d1.m=2;long int s=0;int i;
    for(i=1;i<d.m;i++)
    {
        d2.m=i;
        s=s+jour_max(d2);
    }
    return((d.a-1900)*12*(336+jour_max(d1))+s+d.j);
}
  location saisir_info(liste_loc l)
{
     location p;
liste_clt lclt; liste_voit lvoit;
char f2[500];
char f3[500];
lclt=chargement_clt(f2);
lvoit=chargement_voit(f3);
system("cls");
system("type  gestion_des_locations\\saisie.txt");
 fflush(stdin);
           p.num=num_max(l)+1;
gotoxy(2,8);printf("%ld",p.num);

do
{
    gotoxy(13,8);printf("00000000          |                  |               |                   |                 |");
        fflush(stdin);
        gotoxy(13,8);
       gets(p.cin);
}
while((test_cin(l,p.cin)==0)||(strlen(p.cin)!=8)||(verif_cin(p.cin)==0)||(test_cin_clt(lclt,p.cin)));
do
{
 gotoxy(33,8);printf("000tn0000        |               |                   |                 |");

        fflush(stdin);
        gotoxy(33,8);
       gets(p.mat);
}
while((test(l,p.mat)==0)||(strlen(p.mat)!=9)||test_mat_voit(lvoit,p.mat));

 /* lire l'heure courante */
   time_t now = time (NULL);
   /* la convertir en heure locale */
   struct tm tm_now = *localtime (&now);
   /* Creer une chaine JJ/MM/AAAA HH:MM:SS */
   char s_now[sizeof "JJ/MM/AAAA HH:MM:SS"];
   strftime (s_now, sizeof s_now, "%d/%m/%Y %H", &tm_now);


   gotoxy(53,8); /* afficher le resultat : */
   printf ("%s\n", s_now);

    strftime (s_now, sizeof s_now, "%d", &tm_now);
    p.dl.j=atoi(s_now);

  strftime (s_now, sizeof s_now, "%m", &tm_now);
    p.dl.m=atoi(s_now);
strftime (s_now, sizeof s_now, "%Y", &tm_now);
    p.dl.a=atoi(s_now);
strftime (s_now, sizeof s_now, "%H", &tm_now);
    p.dl.h=atoi(s_now);

  fflush(stdin);
    gotoxy(71,8);
    scanf("%f",&p.dureel);

    fflush(stdin);
    gotoxy(93,8);printf("           |");
   gotoxy(93,8);scanf("%f",&p.mt_p);


    system("cls");
    return(p);

}

liste_loc ajout_tete(liste_loc l)
{
    liste_loc p;
    p=(struct cellule3*)malloc(sizeof(struct cellule3));
    p->info3=saisir_info(l);
    p->suiv3=l;
    l=p;
    return l;
}

void affiche(liste_loc l)
{
     liste_loc p;int i=8;
     p=l;
     system("cls");
system("type creation_locations\\affichage.txt");

while(p!=NULL)
{
        gotoxy(3,i);printf("%ld",p->info3.num);
        gotoxy(13,i);printf("%s",p->info3.cin);
        gotoxy(33,i);printf("%s",p->info3.mat);
         gotoxy(53,i);printf("%d",p->info3.dl.h);
        gotoxy(57,i);printf("%d",p->info3.dl.j);
        gotoxy(60,i);printf("/");
        gotoxy(61,i);printf("%d",p->info3.dl.m);
        gotoxy(63,i);printf("/");
        gotoxy(64,i);printf("%d",p->info3.dl.a);

        gotoxy(71,i);printf("%f",p->info3.dureel);
        gotoxy(93,i);printf("%f",p->info3.mt_p);
        p=p->suiv3;
   i=i+2;
}


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
liste_loc ajout_queue(liste_loc l)
{
    liste_loc p,q;
    p=(struct cellule3*)malloc(sizeof(struct cellule3));
    p->info3=saisir_info(l);
    if(l==NULL)
    {
        p->suiv3=l;
        l=p;
    }
    else
    {
        q=l;
       while(q->suiv3!=NULL)
        {
            q=q->suiv3;
        }
        p->suiv3=q->suiv3;
        q->suiv3=p;
    }
    return(l);
}


void main()
{
  liste_loc l;

  l=NULL;
  char f[500];
  system("color 9a");
  l=chargement(f);
 enregistrement(l,f);
 l=chargement(f);
  l=ajout_tete(l);
  system("cls");
enregistrement(l,f);


}

