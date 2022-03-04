void frontAnimation()
{
    gotoxy(25,8);
//   printf("WELCOME TO MEDICAL STORE");
    for(int i =0; i<25; i++)
    {
        gotoxy(25+i,9);
        printf("%c",219);
        gotoxy(25+i,10);
        printf("%c",219);
        Sleep(i*3);
    }
    for(int i =0; i<13; i++)
    {
        for(int j=0; j<3; j++)
        {
            gotoxy(36+j,4+i);
            printf("%c",219);
            Sleep(i*3);
        }
    }
    gotoxy(25,18);
    char wel[]="WELCOME TO MEDICAL STORE";
    for(int i=0; i<strlen(wel); i++)
    {
        printf("%c",wel[i]);
        Sleep(40);
    }
    Sleep(500);
}

