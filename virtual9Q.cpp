#include<iostream>
#include<windows.h>
#include<ctime>
#include<string>
#include<cstdlib>
using namespace std;
void click(int num){
    keybd_event(num,0,0,0);
    keybd_event(num,0,KEYEVENTF_KEYUP,0);
}
int times;
int main(){
    cout << "Made By NineQueen" << endl;
    cin >> times; 
    srand(time(0));
    while(times--){
        int sleepTime = rand()%20000 + 5000;
        cout << sleepTime << " ";
        Sleep(sleepTime);
        int rank = rand()%10;
        cout << rank << endl;
        switch(rank){
            case 0: //草
                click(0x43);
                click(0x20);
                break;
            case 1: // 彳亍
                click(0x43);
                click(0x43);
                click(0x20);
                break;
            case 2: //。。。
                click(0xBE);
                click(0xBE);
                click(0xBE);
                break;
            case 3: // ？
                keybd_event(0x10,0,0,0);
                click(0xBF);
                keybd_event(0x10,0,KEYEVENTF_KEYUP,0);
                break;
            case 4: //女子女子
                click(0x4E);
                click(0x5A);
                click(0x4E);
                click(0x5A);
                click(0x20);
                break;
            case 5: //呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜呜wwwwwww
                click(0x57);
                click(0x55);
                click(0x57);
                click(0x55);
                click(0x57);
                click(0x55);
                click(0x57);
                click(0x55);
                Sleep(5);
                click(0x32);
                break;
            case 6: //，，，
                click(0xBC);
                click(0xBC);
                click(0xBC);
                break;
            case 7: //嗷
                click(65);
                click(0x4F);
                click(0x20);
                break;
            case 8: //蛤？
                click(0x48);
                click(65);
                click(0x20);
                Sleep(5);
                keybd_event(0x10,0,0,0);
                click(0xBF);
                keybd_event(0x10,0,KEYEVENTF_KEYUP,0);
                break;
            case 9: //草草草
                click(0x43);
                click(0x20);
                click(0x43);
                click(0x20);
                click(0x43);
                click(0x20);
                break;
        }
        click(0x0D);
    }
    system("pause");
    return 0;
}