/////* 
////graphics in Dev-C++ - nguyenvanquan7826 
////*/
////
////#include <winbgim.h> 
////
////int main(int argc, char *argv[])
////{
////	// now, you can run project
////	initwindow(300, 300);			// init window graphics
////	setbkcolor(1);					// set background
////   	cleardevice();
////	setcolor(14);					// set text color
////	outtextxy(50,100,"Graphics in Dev-C++");// print text in window graphics
////	
////	while(!kbhit()) delay(1);		// pause screen	
////	return 0;
////}
#include <iostream>
#include <conio.h>
#include <windows.h>
#include <graphics.h>

 
using namespace std;
 
void menu(int &x, int &y)
{
    settextstyle(4,0,5);    setcolor(14); 
    outtextxy(40,20,"DEMO MENU GAME");
    settextstyle(1,0,1);    setcolor(12);   settextstyle(4,0,5);    setcolor(14); //Ð?t ki?u ch? và màu v?
    outtextxy(390,670,"-----by Tanchan679----");
 
    if(ismouseclick(WM_MOUSEMOVE)) //N?u di chuy?n con chu?t
    {
        getmouseclick(WM_MOUSEMOVE, x, y); //L?y t?a d? v? trí con tr?
    //L?nh if này v?i các giá tr? x,y tuong ?ng v?i dang di chu?t t?i ph?n t? NEW GAME(T?c là ta dang hover NEW GAME)
    if((y>=230 && y<=260) && (x>=255 && x<=450))
    {
    settextstyle(1,0,3);    setcolor(14);//Ð?t ki?u ch? kích c? ch? d? vi?t ch? NEW GAME
    outtextxy(255,230,"NEW GAME");
    settextstyle(1,0,2);    setcolor(15);//Ð?t ki?u ch? kích c? ch? d? vi?t các ph?n t? còn l?i
    outtextxy(290,260," SCORE          ");
    outtextxy(305,290," HELP              ");
    outtextxy(290,320," ABOUT          ");
    outtextxy(310,350," EXIT           ");
    }
//Ðang hover ph?n t? SCORE -> tuong t? v?i các ph?n t? phía du?i
    else if((y>=260 && y<=290) && (x>=255 && x<=450))
    {
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(255,230," NEW GAME                ");
    settextstyle(1,0,3);    setcolor(14);
    outtextxy(290,260,"SCORE");
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(305,290," HELP                ");
    outtextxy(290,320," ABOUT              ");
    outtextxy(310,350," EXIT              ");
    }
        else if((y>=290 && y<=320) && (x>=255 && x<=450))
    {
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(255,230," NEW GAME               ");
    outtextxy(290,260," SCORE             ");
    settextstyle(1,0,3);    setcolor(14);
    outtextxy(305,290,"HELP");
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(290,320," ABOUT              ");
    outtextxy(310,350," EXIT            ");
    }
    else    if((y>=320 && y<=350) && (x>=255 && x<=450))
    {
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(255,230," NEW GAME                 ");
    outtextxy(290,260," SCORE             ");
    outtextxy(305,290," HELP           ");
    settextstyle(1,0,3);    setcolor(14);
    outtextxy(290,320,"ABOUT");
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(310,350," EXIT                ");
    } 
    else if((y>=350 && y<=380) && (x>=255 && x<=450))
    {
    settextstyle(1,0,2);    setcolor(15);
    outtextxy(255,230," NEW GAME                ");
    outtextxy(290,260," SCORE               ");
    outtextxy(305,290," HELP             ");
    outtextxy(290,320," ABOUT              ");
    settextstyle(1,0,3);    setcolor(14);
    outtextxy(310,350,"EXIT");
    }
    else
    {
     settextstyle(1,0,2);    setcolor(15);
    outtextxy(255,230," NEW GAME            ");
    outtextxy(290,260," SCORE               ");
    outtextxy(305,290," HELP                  ");
    outtextxy(290,320," ABOUT                   ");
    outtextxy(310,350," EXIT                         ");
    } 
    }
}
 
 
// Hàm x? lý các s? ki?n click vào menu thành ph?n
void clickmouse(int &thoat, int x, int y) 
{
//N?u click vào chu?t trái(click ch? kg ph?i click dúp)
    if(ismouseclick(WM_LBUTTONDBLCLK) && (y>230 && y<380) && (x>255 && x<450))
    {
        int x1, y1;
        cleardevice();//L?nh xóa màn hình hi?n t?i
        settextstyle(1,0,1);    setcolor(12);
        outtextxy(390,670,"-----by Tanchan679----");
        getmouseclick((WM_LBUTTONDBLCLK), x1, y1);  //L?y t?a d? x, y v? trí click chu?t
 
//Click vào NEW GAME
        if((y1>=230 && y1<=260) && (x1>=255 && x1<=450))
        {
            setcolor(15); outtext("Ban vua click "); setcolor(12);outtext("NEW GAME"); setcolor(15); outtext("  - by tanchan679");
        }
 
        if((y1>=260 && y1<=290) && (x1>=255 && x1<=450))//Click SCORE
        {
        setcolor(15);   outtext("Ban vua click ");setcolor(12);outtext("SCORE"); setcolor(15); outtext("  - by tanchan679");
        }
 
        if((y1>=290 && y1<=320) && (x1>=255 && x1<=450))//click HELP
        {
        setcolor(15);   outtext("Ban vua click  ");setcolor(12);outtext("HELP"); setcolor(15); outtext("  - by tanchan679");
        }
        if((y1>=320 && y1<=350) && (x1>=255 && x1<=450))//click ABOUT
        {
        setcolor(15);   outtext("Ban vua click  ");setcolor(12);outtext("ABOUT"); setcolor(15); outtext("  - by tanchan679");
        }
        if((y1>=350 && y1<=380) && (x1>=255 && x1<=450))//click EXIT
        {
            thoat = 1;
        }
 
//X? lý s? ki?n d? có th? quay l?i menu khi dang hi?n th? màn hình m?i
     if(thoat !=1)
     {
        int tamdung = 0;
      do{
        if(ismouseclick(WM_MOUSEMOVE))
        {
         getmouseclick(WM_MOUSEMOVE, x, y); //Lay toa do vi tri con tro
        }
          bar(300,500,395,530);
          if((y>=500 && y<=530) && (x>=300 && x<=395)) setbkcolor(10);
          else setbkcolor(15);
          settextstyle(1,0,1); setcolor(12);  
          outtextxy(303,505, " EXIT ");
          setbkcolor(0);
       if(ismouseclick(WM_LBUTTONDBLCLK))
       {
         getmouseclick(WM_LBUTTONDBLCLK, x, y);
         if((y>=500 && y<=530) && (x>=300 && x<=395)) tamdung = 1;
       }
          delay(10);
       }while(tamdung == 0);
     }
     cleardevice();
     menu(x, y);
   }
}
int main()
{
    int x, y, thoat;
    initwindow(700,700);
    do{
        menu(x, y);
       clickmouse(thoat, x, y);
        delay(10);
       }while(thoat !=1);
closegraph();
return 0;
}
//#include<windows.h>
//#include <iostream>
//
//using namespace std;
//
//int main() 
//{
//    system("cls");
//    string Menu[3] = { "                Admin", "               Customer", "                Exit" };
//    int pointer = 0;
//    bool bMainMenu = true;
//
//    while (bMainMenu)
//    {
//        system("cls");
//
//        SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//        cout << "Main Menu\n\n";
//
//        for (int i = 0; i < 3; ++i)
//        {
//            if (i == pointer)
//            {
//                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
//                cout << Menu[i] << endl;
//            }
//            else
//            {
//                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
//                cout << Menu[i] << endl;
//            }
//        }
//
//        while (bMainMenu)
//        {
//            if (GetAsyncKeyState(VK_UP)&1)
//            {
//                pointer = pointer - 1;
//                if (pointer == -1)
//                {
//                    pointer = 2;
//                }
//                break;
//            }
//            else if (GetAsyncKeyState(VK_DOWN)&1)
//            {
//                pointer += 1;
//                if (pointer == 3)
//                {
//                    pointer = 0;
//                }
//                break;
//            }
//            else if (GetAsyncKeyState(VK_RETURN)&1)
//            {
//                switch (pointer)
//                {
//                case 0:
//                {
//                    //admin_login();
//                    system("cls");
//                    std::cout << "admin selected\n";
//                    Sleep(1000);
//                    bMainMenu = false;
//                    break;
//                }
//                case 1:
//                {
//                    //customer_sign();
//                    system("cls");
//                    std::cout << "customer selected\n";
//                    Sleep(1000);
//                    bMainMenu = false;
//                    break;
//                }
//                case 2:
//                {
//                    //thank_you();
//                    system("cls");
//                    std::cout << "thank you selected\n";
//                    Sleep(1000);
//                    bMainMenu = false;
//                    break;
//                }
//                default:
//                {
//                    cout << "Invalid Input! ";
//                }
//                }
//            }
//        }
//        Sleep(150);
//    }
//    return 0;
//}
