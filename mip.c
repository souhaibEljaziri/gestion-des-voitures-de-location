#include "graphique.h"
#include "loading.h"
#include "loading_fermer.h"

LRESULT CALLBACK MainWndProc(HWND, UINT, WPARAM, LPARAM);
HBITMAP hBitmap;HINSTANCE hInstance;
HWND hwndx,hwnd,hwndt,hsti,hwndButton01,entrer_bouton,hwndButton1,hwndButton5,hwndButton02,hwndButton3,hwndButton4,bouton01,bouton02;
HWND hwndt;POINT point;
int x=0,b1=0,z=0,c=0,vo=0,lo=0,cl=0,cle=0,loe=0,voe=0,ce=0;
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance,LPSTR lpCmdLine, int nCmdShow)
{

    MSG msg;
    WNDCLASS wc;

    wc.style = 0;
    wc.lpfnWndProc = MainWndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hinstance;
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_3DFACE + 1);
    wc.lpszMenuName =  NULL;
    wc.lpszClassName = "MaWinClass";

    if(!RegisterClass(&wc)) return FALSE;

   hwndx = CreateWindow("static", "MINI PROJET : Gestion d'une agence de location des voitures", WS_OVERLAPPEDWINDOW,
                                   0, 0, 1358, 768,
                                                   NULL, NULL, hinstance, NULL);

   hwnd = CreateWindow("MaWinClass", "MINI PROJET : Gestion d'une agence de location des voitures", WS_OVERLAPPEDWINDOW| WS_VSCROLL,
                                   0, 0, 1358, 768,
                                                   NULL, NULL, hinstance, NULL);
    if (!hwnd) return FALSE;
//load(hwndx);
    ShowWindow(hwndx, nCmdShow);
    UpdateWindow(hwndx);
//loading(hwndx);



//boutonim(hwnd,entrer_bouton,L"image_app\\entrer.bmp",500,200,198,199,101);
   //Calendrier_funetre(hwnd);
   ShowWindow(hwnd, nCmdShow);
   UpdateWindow(hwnd);
   DestroyWindow(hwndx);

   arrier_plan(hwnd);
    while (GetMessage(&msg, NULL, 0, 0))
    {
       TranslateMessage(&msg);
       DispatchMessage(&msg);

    }
    return msg.wParam;
}
/******************************************************************************/

LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
     HMENU hMenu;
    switch (uMsg)
    {
         case WM_RBUTTONUP:
            {


        point.x = LOWORD(lParam);
        point.y = HIWORD(lParam);
        hMenu = CreatePopupMenu();
        ClientToScreen(hwnd, &point);
        AppendMenuW(hMenu, MF_STRING  , (UINT) 100, L"&help");
        AppendMenuW(hMenu, MF_SEPARATOR, 0, NULL);

         AppendMenuW(hMenu, MF_STRING  , (UINT) 1002, L"&Actualiser");
        AppendMenuW(hMenu, MF_SEPARATOR, 0, NULL);
        AppendMenuW(hMenu, MF_STRING  , (UINT) 1001, L"&Calendrier");
         AppendMenuW(hMenu, MF_SEPARATOR, 0, NULL);
         AppendMenuW(hMenu, MF_STRING  , (UINT) 1004, L"&Calculatrice");
         AppendMenuW(hMenu, MF_SEPARATOR, 0, NULL);
        AppendMenuW(hMenu, MF_STRING  , (UINT) 1003, L"&effacer le menu");
        AppendMenuW(hMenu, MF_SEPARATOR, 0, NULL);
         AppendMenuW(hMenu, MF_STRING, (UINT) 10, L"&Quit");
        TrackPopupMenu(hMenu, TPM_RIGHTBUTTON , point.x, point.y, 0, hwnd, NULL);
        DestroyMenu(hMenu);
        break;}
         case WM_COMMAND:
        switch(LOWORD(wParam))
        {
          //  case 101:{if(z==0){z=1;}break;}
          case 1003:{ hMenu = CreateMenu();SetMenu(hwnd, hMenu);break;}
          case 1002:{arrier_plan(hwnd);break;}
          case 1004:{system("start calc.exe");break;}
          case 5:{image(L"image_app\\entrer.bmp",hwnd,1200,668);
          if(c==1)
                enregistrement();
      if(MessageBox(hwnd,"\r\nEtes vous sûr de vouloir fermer l'application ?","Question ?",MB_YESNO | MB_ICONQUESTION ) == IDYES)
      {
          PostQuitMessage(0);
         /* system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt > creation_voiture\\tab.txt");
          system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt>gestion_des_clients\\creation_des_clients\\clients.txt");
        system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt>gestion_des_locations\\tab.txt");*/
      }
   /*loading_fermer(hwnd);*/ Sleep(0);DestroyWindow(hwnd);break;}
         case 1:{
if((x==0))
{

//boutonim(hwnd,hwndButton01,L"bouton01.bmp",10,10,64,78,2);
//boutonim(hwnd,hwndButton02,L"bouton02.bmp",100,10,106,82,3);

image(L"image_app\\a2.bmp",hwndButton1,0,0);
image(L"image_app\\demarrer.bmp",hwnd,0,167);

/*boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,576,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,536,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,496,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,456,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,416,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,376,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,336,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,296,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,256,289,40,7);
boutonim(hwnd,hwndButton5,L"image_app\\demarrer_b1.bmp",6,216,289,40,7);
*/
x=1;
}
else
{
    Sleep(20);

image(L"image_app\\demarrer2.bmp",hwnd,0,167);



 // boutonim(hwnd,hwndButton01,L"bouton01.bmp",10,10,64,78,2);
//boutonim(hwnd,hwndButton02,L"bouton02.bmp",100,10,106,82,3);

   image(L"image_app\\a.bmp",hwndButton1,0,0);
   x=0;
}
break;
}
case 1001:{Calendrier_funetre(hwnd);break;}
   case 13:{

            image(L"image_app\\bouton01.bmp",hwndButton01,0,0);
//            system("explorer.exe creation_des_employes");

edit13(hwnd,"Gestion des clients",1000,1000,0,0,0);
break;

}
  case 14:{

image(L"image_app\\bouton03.bmp",hwndButton01,0,0);
edit14(hwnd,"Gestion des location",1000,1000,0,0,0);
break;

}
 case 15:{

image(L"image_app\\bouton04.bmp",hwndButton01,0,0);
edit15(hwnd,"enrg . et recup. fichiers",1000,1000,0,0,0);
break;

}
  case 10:{if(c==1)
                enregistrement();
      if(MessageBox(hwnd,"\r\nEtes vous sûr de vouloir fermer l'application ?","Question ?",MB_YESNO | MB_ICONQUESTION ) == IDYES)
      {
          PostQuitMessage(0);
         /* system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt > creation_voiture\\tab.txt");
          system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt>gestion_des_clients\\creation_des_clients\\clients.txt");
        system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt>gestion_des_locations\\tab.txt");*/
      };break;}
 case 12:{
image(L"image_app\\bouton02.bmp",hwndButton02,0,0);
edit12(hwnd,"MENU PARC AUTOMBILE",1000,1000,0,0,0);

break;
}
case 11001:{recuperation();system("start creation_voiture\\creation_des_voitures.exe");break;}
//if(recuperation()==1)
//{}
case 22101:{recuperation();system("start ajoute_voiture\\ajoute_en_tete.exe");break;}
case 22201:{recuperation();system("start ajoute_voiture\\ajoute_en_queque.exe");break;}
case 22301:{recuperation();system("start ajoute_voiture\\ajoute_en_pose.exe");break;}
case 23101:{recuperation();system("start supp\\supp_tete.exe");break;}
case 23201:{recuperation();system("start supp\\supp_queque.exe");break;}
case 23301:{recuperation();system("start supp\\supp_pos.exe");break;}
case 23401:{recuperation();system("start supp\\supp_v_d.exe");break;}
case 23501:{recuperation();system("start supp\\supp_marque.exe");break;}
case 24101:{recuperation();system("start modification\\couleur.exe");break;}
case 24201:{recuperation();system("start modification\\prix.exe");break;}
case 31001:{recuperation();system("start recherche\\continue_de_la_liste_des_voitures.exe");break;}
case 32001:{recuperation();system("start recherche\\recherche_par_matricule.exe");break;}
case 33001:{recuperation();system("start recherche\\recherche_par_marque.exe");break;}
case 34001:{recuperation();system("start recherche\\recherche_par_couleur.exe");break;}
case 35001:{recuperation();system("start recherche\\recherche_des_voitures_disponibles.exe");break;}
case 36001:{recuperation();system("start recherche\\recherche_des_voitures_louées.exe");break;}
case 37001:{recuperation();system("start recherche\\tri_1.exe");break;}
case 38001:{recuperation();system("start recherche\\tri_2.exe");break;}

case 11002:{recuperation();system("start gestion_des_clients\\creation_des_clients\\creation_des_clients.exe");break;}
case 22102:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\ajouter_client\\ajout_en_tete.exe");break;}
case 22202:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\ajouter_client\\ajout_en_queue.exe");break;}
case 22302:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\ajouter_client\\ajout_dans_une_position.exe");break;}
case 23102:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\suppression_client\\suppression_en_tete.exe");break;}
case 23202:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\suppression_client\\suppression_en_queque.exe");break;}
case 23302:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\suppression_client\\suppression_a_partir_d'une_position.exe");break;}
case 23402:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\suppression_client\\suppression_d'un_client_donne.exe");break;}

case 24102:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\modification_client\\adresse.exe");break;}
case 24202:{recuperation();system("start gestion_des_clients\\mise_a_jour_de_la_liste_des_client\\modification_client\\telephone.exe");break;}
case 31002:{recuperation();system("start gestion_des_clients\\recherche_et_affichage\\contenu_de_la_liste_des_clients.exe");break;}
case 32002:{recuperation();system("start gestion_des_clients\\recherche_et_affichage\\recherche_par_cin.exe");break;}
case 33002:{recuperation();system("start gestion_des_clients\\recherche_et_affichage\\tri.exe");break;}

case 22103:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\ajouter_location\\ajoute_en_tete.exe");break;}
case 22203:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\ajouter_location\\ajoute_en_queue.exe");break;}
case 22303:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\ajouter_location\\ajout_dans_une_position.exe");break;}
case 23103:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\suppression_location\\suppression_en_tete.exe");break;}
case 23203:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\suppression_location\\suppression_en_queue.exe");break;}
case 23303:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\suppression_location\\suppression_a_partir_d'une_position.exe");break;}
case 23403:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\suppression_location\\suppression_d'une_location_donnee.exe");break;}

case 24103:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\modification_location\\date_de_location.exe");break;}
case 24203:{recuperation();system("start gestion_des_locations\\mise_a_jour_de_la_liste_des_locations\\modification_location\\duree.exe");break;}

case 31003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\contenu_de_la_liste_des_location.exe");break;}
case 32003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\recherche_par_cin.exe");break;}
case 33003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\recherche_par_mat.exe");break;}
case 34003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\recherche_par_date_donnee.exe");break;}
case 35003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\recherche_par_duree_de_location.exe");break;}
case 36003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\recherche_des_locations_entre_2_dates_donnees.exe");break;}

case 37003:{recuperation();system("start gestion_des_locations\\recherche_et_affichage\\trie.exe");break;}
case 20004:{system("enregistrement_et_recuperation_dans_un_fichier\\enregistrement_fichier_voitures.exe");voe=1;break;}
case 30004:{system("enregistrement_et_recuperation_dans_un_fichier\\recuperation_fichier_voitures.exe");vo=1;break;}
case 40004:{system("enregistrement_et_recuperation_dans_un_fichier\\enregistrement_fichier_clients.exe");cle=1;break;}
case 50004:{system("enregistrement_et_recuperation_dans_un_fichier\\recuperation_fichier_clients.exe");cl=1;break;}
case 60004:{system("enregistrement_et_recuperation_dans_un_fichier\\enregistrement_fichier_locations.exe");loe=1;break;}
case 60005:{system("enregistrement_et_recuperation_dans_un_fichier\\recuperation_fichier_locations.exe");lo=1;break;}
case 100:{

hwndt= CreateWindow("edit",   "help",
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        0,470,       //set starting point to default value
                        500,200,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        NULL,
                        NULL);

                         SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
image(L"help.bmp",hwndt,0,0);




break;}
}
        case WM_CREATE:

            return 0;

        case WM_CLOSE:
            {
                if(c==1)
                enregistrement();
      if(MessageBox(hwnd,"\r\nEtes vous sûr de vouloir fermer l'application ?","Question ?",MB_YESNO | MB_ICONQUESTION ) == IDYES)
      {
          PostQuitMessage(0);
         /* system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt > creation_voiture\\tab.txt");
          system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt>gestion_des_clients\\creation_des_clients\\clients.txt");
        system("type enregistrement_et_recuperation_dans_un_fichier\\vide.txt>gestion_des_locations\\tab.txt");*/
      }
            break;
            }
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
void arrier_plan(HWND hwnd)
{
    HINSTANCE hinstance;

     hwndButton1 = CreateWindow (TEXT("button"),                      // The class name required is button
                               TEXT(""),                  // the caption of the button
                               WS_CHILD |WS_VISIBLE | BS_PUSHBUTTON,  // the styles
                               8,668,                                  // the left and top co-ordinates
                               39,39,                              // width and height
                               hwnd,                                 // parent window handle
                               (HMENU)1,                   // the ID of your button
                               hinstance,
                               NULL) ;

boutonim(hwnd,hwndButton01,L"image_app\\bouton01.bmp",10,10,64,78,12);
boutonim(hwnd,hwndButton02,L"image_app\\bouton02.bmp",200,10,64,78,13);                         // the instance of your application

boutonim(hwnd,hwndButton02,L"image_app\\bouton03.bmp",400,10,64,78,14);
boutonim(hwnd,hwndButton02,L"image_app\\bouton04.bmp",600,10,64,78,15);
boutonim(hwnd,hwndButton3,L"image_app\\entrer.bmp",1200,668,40,39,5);
image(L"image_app\\a.bmp",hwndButton1,0,0);
image(L"image_app\\arrier_plant2.bmp",hwnd,0,0);

}
void arrier_plan2(HWND hwnd)
{
    HINSTANCE hinstance;
     hwndButton1 = CreateWindow (TEXT("button"),                      // The class name required is button
                               TEXT(""),                  // the caption of the button
                               WS_CHILD |WS_VISIBLE | BS_PUSHBUTTON,  // the styles
                               0,668,                                  // the left and top co-ordinates
                               34,31,                              // width and height
                               hwnd,                                 // parent window handle
                               (HMENU)1,                   // the ID of your button
                               hinstance,
                               NULL) ;                           // the instance of your application
boutonim(hwnd,hwndButton01,L"image_app\\bouton01.bmp",10,10,64,78,2);
boutonim(hwnd,hwndButton02,L"image_app\\bouton02.bmp",100,10,106,82,3);
image(L"image_app\\a2.bmp",hwndButton1,0,0);
image(L"image_app\\arrier_plant2.bmp",hwnd,0,0);

}
void boutonim(HWND hwnd,HWND hwndButton,char ch[50],int x,int y,int xx,int yy,int a)
{

    hwndButton = CreateWindow (TEXT("button"),                      // The class name required is button
                               TEXT(""),                  // the caption of the button
                               WS_CHILD |WS_VISIBLE | BS_PUSHBUTTON,  // the styles
                               x,y,                                  // the left and top co-ordinates
                               xx,yy,                              // width and height
                               hwnd,                                 // parent window handle
                               (HMENU)a,                   // the ID of your button
                               NULL,
                               NULL) ;                           // the instance of your application
image(ch,hwndButton,0,0);
}
void les_bouton(HWND hwnd)
{
    HINSTANCE hinstance;
                         // the instance of your application
image("image_app\\bouton01.bmp",hwndButton01,0,0);
image("image_app\\bouton02.bmp",hwndButton02,0,0);
}
/*creation voiture*/
void menu12(HWND hwnd)
{
    HMENU hMenu, hSubMenu,h,hMenup;
        HICON hIcon, hIconSm;
hMenup=CreateMenu();
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)11001, " &CREATION DES VOITURES");
             hMenu = CreateMenu();

                     hSubMenu = CreateMenu();
                                h=CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP  , (UINT) 22101, "&ajout en tete");
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 22201, "&ajout en queue");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 22301, "&ajout dans une position  ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)hSubMenu, " &AJOUTER voiture");
                     hSubMenu = CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP  , (UINT) 23101, "&suppression en tete");
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 23201, "&suppression en queue");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23301, "&suppression a partir d'une position  ");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23401, "&suppression d'une voiture donne");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23501, "&suppression des voiture d'une marque donnee ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenu, " &SUPPRESSION VOITURE");
                     hSubMenu = CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 24101, "&couleur");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 24201, "&prix  ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenu, " &MODIFICATION VOITURE");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)hMenu, " &MISE A JOUR DE LA LISTE DES VOITURE");
             hMenu = CreateMenu();
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)31001, " &contenu de la liste des voitures ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)32001, " &recherche par matricule");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)33001, " &recherche par marque");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)34001, " &recherche par couleur");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)35001, " &recherche des voitures disponibles");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)36001, " &recherche des voitures louees");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)37001, " &tri 1");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)38001, " &tri 2");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)hMenu, " &RECHERCHE ET AFFICHAGE ET TRI");
   SetMenu(hwnd, hMenup);
}

void edit12(HWND hwnd,char ch[50],int x,int y,int xx, int yy,int i) {
HINSTANCE hinstance;

hwndt= CreateWindow("edit",   ch,
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        x,y,       //set starting point to default value
                        xx,yy,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        hinstance,
                        NULL);
                        menu12(hwnd);
                         SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
DestroyWindow(hwndt);
}
void menu13(HWND hwnd)
{
    HMENU hMenu, hSubMenu,h,hMenup;
        HICON hIcon, hIconSm;
hMenup=CreateMenu();
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)11002, " &CREATION DES clientS");
             hMenu = CreateMenu();

                     hSubMenu = CreateMenu();
                                h=CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP  , (UINT) 22102, "&ajout en tete");
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 22202, "&ajout en queue");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 22302, "&ajout dans une position  ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)hSubMenu, " &AJOUTER client");
                     hSubMenu = CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP  , (UINT) 23102, "&suppression en tete");
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 23202, "&suppression en queue");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23302, "&suppression a partir d'une position  ");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23402, "&suppression d'une client donne");

             AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenu, " &SUPPRESSION client");
                     hSubMenu = CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 24102, "&adresse");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 24202, "&telephone  ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenu, " &MODIFICATION client");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)hMenu, " &MISE A JOUR DE LA LISTE DES client");
             hMenu = CreateMenu();
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)31002, " &contenu de la liste des clients ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)32002, " &recherche par cin");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)33002, " &tri");

AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)hMenu, " &RECHERCHE ET AFFICHAGE ET TRI");
   SetMenu(hwnd, hMenup);
}

void edit13(HWND hwnd,char ch[50],int x,int y,int xx, int yy,int i) {
HINSTANCE hinstance;
hwndt= CreateWindow("edit",   ch,
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        x,y,       //set starting point to default value
                        xx,yy,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        hinstance,
                        NULL);
                        menu13(hwnd);
                         SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
DestroyWindow(hwndt);
}
void menu14(HWND hwnd)
{
    HMENU hMenu, hSubMenu,h,hMenup;
        HICON hIcon, hIconSm;
hMenup=CreateMenu();
             hMenu = CreateMenu();

                     hSubMenu = CreateMenu();
                                h=CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP  , (UINT) 22103, "&ajout en tete");
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 22203, "&ajout en queue");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 22303, "&ajout dans une position  ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)hSubMenu, " &AJOUTER location");
                     hSubMenu = CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP  , (UINT) 23103, "&suppression en tete");
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 23203, "&suppression en queue");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23303, "&suppression a partir d'une position  ");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 23403, "&suppression d'une location donne");

             AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenu, " &SUPPRESSION location");
                     hSubMenu = CreateMenu();
                     AppendMenu(hSubMenu, MF_POPUP, (UINT) 24103, "&date de location");
                     AppendMenu(hSubMenu, MF_STRING, (UINT) 24203, "&duree  ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP, (UINT)hSubMenu, " &MODIFICATION location");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)hMenu, " &MISE A JOUR DE LA LISTE DES location");
             hMenu = CreateMenu();
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)31003, " &Contenu de la liste des locations ");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)32003, " &Recherche par cin");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)33003, " &Recherche par mat");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)34003, " &Recherche par date donnee");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)35003, " &Recherche par duree de location");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)36003, " &Recherche des locations entre 2 dates donnees");
             AppendMenu(hMenu, MF_STRING | MF_POPUP , (UINT)37003, " &Tri");

AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)hMenu, " &RECHERCHE ET AFFICHAGE ET TRI");
   SetMenu(hwnd, hMenup);
}

void edit14(HWND hwnd,char ch[50],int x,int y,int xx, int yy,int i) {
HINSTANCE hinstance;
hwndt= CreateWindow("edit",   ch,
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        x,y,       //set starting point to default value
                        xx,yy,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        hinstance,
                        NULL);
                        menu14(hwnd);
                         SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
DestroyWindow(hwndt);
}
void menu15(HWND hwnd)
{
    HMENU hMenu, hSubMenu,h,hMenup;
        HICON hIcon, hIconSm;
hMenup=CreateMenu();

AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)20004, " &Enregistrement fichier VOITURES");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)30004, " &Recuperation fichier VOITURES");

AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)40004, " &Enregistrement fichier CLIENTES");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)50004, " &Recuperation fichier CLIENTES");

AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)60004, " &Enregistrement fichier LOCATIONS");
AppendMenu(hMenup, MF_STRING | MF_POPUP , (UINT)60005, " &Recuperation fichier LOCATIONS");
   SetMenu(hwnd, hMenup);
}

void edit15(HWND hwnd,char ch[50],int x,int y,int xx, int yy,int i) {
HINSTANCE hinstance;
hwndt= CreateWindow("edit",   ch,
                        WS_VISIBLE | WS_TILEDWINDOW, //basic window style
                        x,y,       //set starting point to default value
                        xx,yy,       //set all the dimensions to default value
                        hwnd,                //no parent window
                        (HMENU) 0,                //no menu
                        hinstance,
                        NULL);
                        menu15(hwnd);
                         SendMessage(    hwndt ,WM_SETTEXT  , 25,  (LPARAM) TEXT("  "));
DestroyWindow(hwndt);
}
int recuperation()
{
    if((cl==1)&&(lo==1)&&(vo==1))
    {
        c=1;
    }
    if(c==0)
    {
if((MessageBox(hwnd,"\r\n les listes sont vides .svp recuperer les fichier ?","Question ?",MB_YESNO | MB_ICONQUESTION ) == IDYES)&&(c==0))
{
          system("enregistrement_et_recuperation_dans_un_fichier\\recuperation_fichier_voitures.exe");
          system("enregistrement_et_recuperation_dans_un_fichier\\recuperation_fichier_clients.exe");
          system("enregistrement_et_recuperation_dans_un_fichier\\recuperation_fichier_locations.exe");
         c=1;
}
    }
return(c);
}
int enregistrement()
{
    if((cle==1)&&(loe==1)&&(voe==1))
    {
        ce=1;
    }
    if(ce==0)
    {
if((MessageBox(hwnd,"\r\n Etes vous sûr de vouloir enregistrer les fichier  ?","Question ?",MB_YESNO | MB_ICONQUESTION ) == IDYES)&&(ce==0))
{
          system("enregistrement_et_recuperation_dans_un_fichier\\enregistrement_fichier_voitures.exe");
          system("enregistrement_et_recuperation_dans_un_fichier\\enregistrement_fichier_clients.exe");
          system("enregistrement_et_recuperation_dans_un_fichier\\enregistrement_fichier_locations.exe");
         ce=1;
}
    }
return(ce);
}
