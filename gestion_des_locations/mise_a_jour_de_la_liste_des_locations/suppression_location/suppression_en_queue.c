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
        gotoxy(53,8);printf("                   ");
gotoxy(53,8);
        scanf("%d",&d.h);
        fflush(stdin);

gotoxy(67,8);
        scanf("%d",&d.j);
        fflush(stdin);
gotoxy(70,8);printf("/");
     gotoxy(71,8);scanf("%d",&d.m);
        fflush(stdin);
     gotoxy(74,8);printf("/");
       gotoxy(75,8); scanf("%d",&d.a);
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
  location saisir_info(liste_loc l)
{
     location p;

system("cls");
system("type  gestion_des_clients\\creation_des_clients\\saisie.txt");
 fflush(stdin);
        gotoxy(2,8);scanf("%ld",p.num);

do
{
    gotoxy(13,8);printf("                  |                  |               |                   |                 |");
        fflush(stdin);
        gotoxy(13,8);
       gets(p.cin);
}
while((test(l,p.cin)==0)||(strlen(p.cin)!=8)||(verif_cin(p.cin)==0));
do
{
 gotoxy(33,8);printf("                 |               |                   |                 |");

        fflush(stdin);
        gotoxy(33,8);
       gets(p.mat);
}
while((test(l,p.mat)==0)||(strlen(p.mat)!=9));




   gotoxy(53,8);
    p.dl=saisie_date();



  fflush(stdin);
    gotoxy(71,8);
    scanf("%f",&p.dureel);

    fflush(stdin);
    gotoxy(93,8);printf("           |");
   gotoxy(93,8);scanf("%f",&p.mt_p);


    system("cls");
    return(p);

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
system("type creation_location\\affichage.txt");

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
liste_loc ajout_pos(liste_loc l,int pos)
{
    int i=1;
    liste_loc p=l,q;
    while(i<pos-1)
    {
        i++;
        p=p->suiv3;
    }
    q=(struct cellule3*)malloc(sizeof(struct cellule3));
    q->info3=saisir_info(l);
    q->suiv3=p->suiv3;
    p->suiv3=q;
return l;
}
liste_loc remplir(liste_loc l)
{
    int pos,rep,t;

        t=taille(l);
        if(t>=1)
        {
        do
        {
            system("cls");
            printf("                                              Donner la position entre 1 et %d :",t+1);

            system("type gestion_des_locations\\pose.txt");
            gotoxy(58,5);scanf("%d",&pos);
        }while(!(pos>=2 && pos<=t+1));
        if(pos==1)
            l=ajout_tete(l);
        else
            if(pos==t+1)
                l=ajout_queue(l);
            else
                ajout_pos(l,pos);
      /*  do
        {
            system("type creation_voiture\\pos.txt");
            gotoxy(60,2);
            scanf("%d",&rep);
        }while(!(rep==1 || rep==0));*/
        }
    else
        printf("la liste des voiture est vide ");



    return l;

}
liste_loc sup_tete(liste_loc l)
{
    liste_loc p=l;
    if(l==NULL)
        printf("\nLISTE VIDE\n");
    else
    {
        l=p->suiv3;
        free(p);
    }
    return l;
}
liste_loc sup_queue(liste_loc l)
{
    liste_loc s,p1;
    p1=l;
    if(p1==NULL)
    {
        printf("la liste est vide ");
    }
    else if(p1->suiv3==NULL)
    {
        free(p1);
        p1=NULL;
    }
    else
    {
        while(p1->suiv3->suiv3!=NULL)
        {
            p1=p1->suiv3;
        }
        free(p1->suiv3);
        p1->suiv3=NULL;

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
  l=sup_queue(l);
  system("cls");
enregistrement(l,f);


}

