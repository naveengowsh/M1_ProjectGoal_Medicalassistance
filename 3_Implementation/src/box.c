void box()
{
    gotoxy(0,0);
    printf("%c",201);
    for(int i=2; i<=79; i++)
    {
        printf("%c",205);
    }
    printf("%c",187);
    for(int i=1; i<=35; i++)
    {
        gotoxy(0,i);
        printf("%c",186);
    }
    gotoxy(0,36);
    printf("%c",200);
    for(int i=2; i<=79; i++)
    {
        printf("%c",205);
    }
    printf("%c",188);

    for(int i=1; i<=35; i++)
    {
        gotoxy(79,i);
        printf("%c",186);
    }
}