#include <Windows.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#define cls system("cls")
void gotoxy(int x, int y) {
    COORD p;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    p.X = x; p.Y = y;
    SetConsoleCursorPosition(handle, p);
}
void HideCursor() {
    CONSOLE_CURSOR_INFO cursur_info;
    cursur_info.dwSize = 1;
    cursur_info.bVisible = FALSE;
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorInfo(handle, &cursur_info);
}
void FPS1() {
    printf("    ��    \n");
    printf("  ������  \n");
    printf("��  ��  ��\n");
    printf("    ��    \n");
    printf("    ��    \n");
    printf("    ��    \n");
}
void FPS2() {
    printf("  ������  \n");
    printf("��  ��  ��\n");
    printf("    ��    \n");
    printf("    ��    \n");
    printf("    ��    \n\n");
}
void FPS3() {
    printf("��  ��  ��\n");
    printf("    ��    \n");
    printf("    ��    \n");
    printf("    ��    \n\n\n");
}
void FPS4() {
    printf("    ��    \n");
    printf("    ��    \n");
    printf("    ��    \n\n\n");
    printf("    ��    \n");
}
void FPS5() {
    printf("    ��    \n");
    printf("    ��    \n\n\n");
    printf("    ��    \n");
    printf("  ������  \n");
}
void FPS6() {
    printf("    ��    \n\n\n");
    printf("    ��    \n");
    printf("  ������  \n");
    printf("��  ��  ��\n");
}
void FPS7() {
    printf("\n\n");
    printf("    ��    \n");
    printf("  ������  \n");
    printf("��  ��  ��\n");
    printf("    ��    \n");
}
void FPS8() {
    printf("\n");
    printf("    ��    \n");
    printf("  ������  \n");
    printf("��  ��  ��\n");
    printf("    ��    \n");
    printf("    ��    \n");
}
int main() {
    HideCursor();
    while (1) {
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS1();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS2();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS3();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS4();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS5();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS6();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS7();
        Sleep(100);
        cls;
        gotoxy(0, 0);
        FPS8();
    }
}