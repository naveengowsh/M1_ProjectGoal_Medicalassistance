void todaySelling()
{
    gotoxy(33,3);
    printf("TODAY SELLING");
    gotoxy(32,5);
    for(int i=1; i<=15; i++)
    {
        printf("%c",223);
    }
    gotoxy(2,5);
    for(int i=1; i<=75; i++)
    {
        printf("%c",196);
    }
    for(int j=0; j<4; j++)
    {
        for(int i=0; i<=79; i+=15)
        {
            gotoxy(2+i,5+j);
            printf("%c",179);
        }
    }
    gotoxy(5,6);
    printf("Buyer Name");
    gotoxy(21,6);
    printf("Medicine");
    gotoxy(35,6);
    printf("Quantity");
    gotoxy(52,6);
    printf("Price");
    gotoxy(67,6);
    printf("Date");

    gotoxy(2,8);
    for(int i=1; i<=75; i++)
    {
        printf("%c",196);
    }

    time_t ti = time(NULL);
    struct tm *tm = localtime(&ti);
    assert(strftime(bd.dataTime, sizeof(bd.dataTime), "%c", tm));

    char day[30]="EveryDay/";
    strncat(day,bd.dataTime,8);
    for(int i=11; i<=14; i+=3)
    {
        day[i]='-';
    }

    strcat(day,".DAT");
    FILE *fptoday;
    fptoday=fopen(day,"r");
    if(fptoday==NULL){
            gotoxy(10,10);
        printf("File not found..");
        Sleep(3000);
        main();
    }
    int counter=0;
    while(fscanf(fptoday,"%s  %s  %d  %f  %s\n",bd.BuyerName,bd.medicineName,&bd.quantity,&bd.price,bd.dataTime)!=EOF)
    {
        gotoxy(4,10+counter);
        printf("%s",bd.BuyerName);
        gotoxy(20,10+counter);
        printf("%s",bd.medicineName);
        gotoxy(38,10+counter);
        printf("%d",bd.quantity);
        gotoxy(50,10+counter);
        printf("%.2f",bd.price);
        gotoxy(60,10+counter);
        printf("%s",bd.dataTime);
        counter++;
    }
    fclose(fptoday);
    if(getche()){
        main();
    }
}