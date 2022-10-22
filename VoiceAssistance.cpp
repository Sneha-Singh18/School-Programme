#include <bits/stdc++.h>
#include <windows.h>
#include <string.h>
#include <ctime>
#include <cstdlib>
#include <stdio.h>
#include <iostream>
using namespace std;

void meetandgreet()
{
    time_t current = time(0);
    tm*time = localtime(&current);
    if (time-> tm_hour <12)
    {
        cout<<"Have A Good Morning\n";
      string phrase = "Have A Good Morning";
      string cmnd = "espeak \"" + phrase + "\"";
      const char *charCommand = cmnd.c_str();
      system(charCommand);
    }
    else if (time-> tm_hour>=12 && time->tm_hour<=16)
    {
        cout<<"Have A Good Afternoon \n";
        string phrase = "Have A Good Afternoon";
        string cmnd = "espeak \"" + phrase + "\"";
      const char *charCommand = cmnd.c_str();
      system(charCommand);

    }
    else if (time-> tm_hour >16 && time-> tm_hour<24)
    {
        cout<<"Have A Good Evening \n";
        string phrase = "Have A Good Evening";
         string cmnd = "espeak \"" + phrase + "\"";
      const char *charCommand = cmnd.c_str();
      system(charCommand);
    }


}
    void dt()
    {
        time_t current = time(0);
        char*t = ctime(&current);
        cout<<"Current Date And Time are:"<<t<< "\n";
        string phrase = "Current date And time are being displayed on the screen";
        string cmnd = "espeak \"" + phrase + "\"";
      const char *charCommand = cmnd.c_str();
      system(charCommand);


    }

int main()
{
    system("cls");

    cout<<"\t**********THIS IS YOUR VOICE ASSISSTANT************* ";
    cout<<"\n\n";

    string pswd;
    string cmnd;

    do
    {

        cout<<" \n HEY HARSHNI TO PROCEED PLEASE ENTER YOUR PASSWORD \n";
        string phrase = "HEY HARSHNI TO PROCEED PLEASE ENTER YOUR PASSWORD";
        string cmnd = "espeak \"" + phrase + "\"";
        const char *charCommand = cmnd.c_str();
        system(charCommand);

        getline(cin,pswd);

        STARTUPINFO startInfo = {0};
        PROCESS_INFORMATION processInfo = {0};

        if(pswd=="harshni")
        {
            meetandgreet();
            do{
                cout<<"\n What can I do for you? \n";

                string phrase = "What can I do for you";
                string cmnd = "espeak \"" + phrase + "\"";
                const char *charCommand = cmnd.c_str();
                system(charCommand);

                cout<<"Please write your question:\n";
                getline(cin,cmnd);

                cout<<"Answering your query:";

                if(cmnd =="hii" || cmnd=="hey")
                {
                    cout<<"HII HARSHNI \n";
                    string phrase = "HII HARSHNI";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                }

                 else if(cmnd =="please tell date and time")
                {

                    dt();
                }


                else if(cmnd =="what is your name" || cmnd =="who am I speaking with")
                {
                    cout<<"My name is Kookie.I am a voice assistant who is created by Harshni.\n";
                    string phrase = "My name is Kookie and I am a voice assistant who is created by Harshni";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                }


                else if(cmnd=="please open notepad")
                {
                    cout<<"opening your notepad \n";
                    string phrase = "opening your notepad";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\notepad.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }



                else if(cmnd =="please open paint")
                {
                    cout<<"opening paint for you \n";
                    string phrase = "Opening paint for you";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    CreateProcess(TEXT("C:\\Windows\\System32\\mspaint.exe"), NULL, NULL, NULL, FALSE, NULL, NULL, NULL, &startInfo, &processInfo);
                }



                else if(cmnd =="please open google")
                {
                    cout<<"starting google for you \n";
                    string phrase = "starting google for you";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    system("start https://www.google.com");
                }

                else if(cmnd =="please open youtube")
                {
                    cout<<"starting youtube for you \n";
                    string phrase = "opening youtube";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    system("start https://www.youtube.com");
                }

                else if(cmnd =="please close chrome")
                {
                    cout<<"chrome is being closed for you \n";
                    string phrase = "chrome is being closed for you";
                    string cmnd= "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    system("TASKKILL /IM chrome.exe /F");
                }


                else if(cmnd=="please open photo")
                {
                    cout<<"your photo is being opened \n";
                    string phrase = "your photo is being opened";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","harrypotter.jpg",NULL, NULL, SW_NORMAL);

                }

                    else if(cmnd== "please play my song")
                   {

                    cout<<"your favourite song is being played \n";
                    string phrase = "your favourite song is being played";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    ShellExecute(NULL,"open","BTS_-_Euphoria.mp3",NULL, NULL, SW_NORMAL);
                   }
                else if(cmnd =="goodbye" || cmnd =="leaving")
                {
                    cout<<"It was good to meet you.Hope to see you again \n";
                    string phrase = "It was good to meet you hope to see you again ";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                    exit(0);
                }

                else
                {
                    cout<<"Your command is not clear.\n";
                    string phrase = "Your command is not clear";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                }


            }while(1);
        }
        else
                {
                    system("cls");

                    cout << "*****YOUR PASSWORD IS INCORRECT***** \n\n\n";

                    string phrase = "YOUR PASSWORD IS INCORRECT";
                    string cmnd = "espeak \"" + phrase + "\"";
                    const char *charCommand = cmnd.c_str();
                    system(charCommand);
                }
    } while (1);


    return 0;
}
