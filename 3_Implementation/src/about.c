void about(){
box();
gotoxy(34,3);
    char a[]="ABOUT US";
    for(int i=0; i<strlen(a); i++)
    {
        printf("%c",a[i]);
        Sleep(40);
    }

    for(int i=0; i<10; i++)
    {
        gotoxy(42-i,5);
        printf("%c",223);
        Sleep(40);
    }

    gotoxy(9,7);
    printf("My Journey to keep you safe and more comfortable in your work.");
    gotoxy(8,8);
    for(int i=0; i<64; i++)
    {
        printf("%c",196);
    }
    gotoxy(10,10);
    printf("This software allow you to easily manage your Medical store.");
    gotoxy(9,11);
    for(int i=0; i<62; i++)
    {
        printf("%c",196);
    }
    gotoxy(27,13);
    printf("Provide Digital Records");
    gotoxy(26,14);
    for(int i=0; i<26; i++)
    {
        printf("%c",196);
    }
    gotoxy(34,17);
    printf("DEVELOPER");
    gotoxy(33,18);
    for(int i=0; i<11; i++)
    {
        printf("%c",196);
    }
    gotoxy(30,19);
    printf("NIKHIL KUMAR SINGH");

    gotoxy(30,22);
    printf("HOW MAY I HELP YOU");
    gotoxy(29,23);
    for(int i=0; i<20; i++)
    {
        printf("%c",196);
    }
    gotoxy(28,24);
    printf("Contect No - 8349696112");

    gotoxy(34,26);
    printf("THANK YOU");
    gotoxy(33,27);
    for(int i=0; i<11; i++)
    {
        printf("%c",196);
    }

    if(_getch()){
        main();
    }
}