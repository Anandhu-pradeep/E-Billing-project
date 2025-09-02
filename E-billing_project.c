#include<stdio.h>
#include<conio.h>
#include<string.h>

struct x{
    char a[100];
    int b;
};


void main()
{
    int total_items=20;
    int quantity,option,i,purchased,j,sno,total=0;
    long int password;
    int limit=3;//for password limit additems
    int limit1=3;//for password limit delitems 
    int add=0,additems;
    int todelete,deleltion;
    char unavailable[11]="unavailable";

    struct x arr_x[100]=
    {
        {".........",0},
        {"BHIRIYANI",150},
        {"MANDHI   ",160},
        {"KAPPA    ",50},
        {"POROTTA",10},
        {"IDE APPAM",10},
        {"CHAPPATHI",10},
        {"PAAL APPAM",15},
        {"UPPU MAVV",25},
        {"DHOOSA   ",10},
        {"FRENCH FRIES",50},
        {"CHIKEN FRY",100},
        

        
        {"SAMBAR\t",10},
        {"KADALA\t",20},
        {"EGG\t",25},
        {"GOPI MANCHURI",25},
        {"CHIKEN\t",60},

        
        {"CHAI\t",10},
        {"COFFIE\t",12},
        {"JUICE\t",30},
        {"LIME\t",25}
    };


    do{

        printf("\n\t\t\tWELCOME TO E-BILLING\n");
        printf("select numbers-wise\n\n");
        printf("1. Show items\n2. To bill items\n3. Exit\n\n\n\t\tFOR EMPOLYEES\n4. Add items\n5. Delete items\n\n");
        scanf("%d",&option);

        //to show items
        if(option == 1){
            printf("\nFOOD ITEMS\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=1;i<=11;i++){
                printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n");
            printf("\nCURRY ITEMS\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=12;i<=16;i++){
                printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n");
            printf("\n DRINKS\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=17;i<=20;i++){
                printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n");
            printf("\n TODAY'S SPECIAL\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=21;i<21+add;i++){
                printf("|%d\t|%s    \t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n");
            printf("PRESS ENTER TO CONTINUE \n\n");


            getchar();
            getchar();
        }
        //to bill
        else if(option==2){
            printf("\nFOOD ITEMS\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=1;i<=11;i++){
                printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n");
            printf("\nCURRY ITEMS\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=12;i<=16;i++){
                printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n");
            printf("\n DRINKS\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=17;i<=20;i++){
                printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n");
            printf("\n TODAY'S SPECIAL\n");
            printf("_________________________________\n");
            printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
            for(i=21;i<21+add;i++){
                printf("|%d\t|%s    \t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
            }
            printf("----------------------------------\n\n\n");
            printf("how much items did you purchased:\t");
            scanf("%d",&purchased);
            printf("\nenter the S.NO to bill(press enter)\n");
            printf("_________________________________");
            printf("\n|S.NO\t|\tITEMS\t|QUANTITY  |\n\n");
            for(j=1;j<purchased+1;j++){
                printf("|");
                scanf("%d",&sno);
                printf("|\t|%s\t|",arr_x[sno].a);
                scanf("%d",&quantity);
                total+=quantity * arr_x[sno].b;
            }
            printf("___________________________________\n");
            printf("|\tTOTAL\t\t|%d\t|\n",total);
            printf("----------------------------------\n\n\n");

            break;
        }
        //adding items
        else if(option==4){
            while(limit>=0){

                if(limit != 0){
                    printf("\nENTER THE PASSWORD:  ");
                    scanf("%ld",&password);

                    if(password==12345){
                        printf("\nSUCESSFUL\nenter to continue");
                        getchar();
                        getchar();
                        printf("how much items want to add: ");
                        scanf("%d",&add);

                        printf("S.NO\tITEMS\t PRICE\n");
                        for(i=total_items+1;i<21+add;i++){
                            printf("%d\t",i);
                            scanf("%s",&arr_x[i].a);
                            printf("\t\t  ");
                            scanf("%d",&arr_x[i].b);
                            total_items+=add;
                        }
                        printf("\nsuccessfully added\nenter to continue");                        
                        break;
                    }
                    else{
                        printf("\nincorect\nyou have %d chance left",limit-1);
                    }
                }
                else{
                    printf("\nsorry you have tried too much attempt. please contact concern authority");
                }
                limit--;
            }
            getchar();
            getchar();
        }
        //deleting items
        else if(option==5){
            while(limit1>=0){

                if(limit1 != 0){
                    printf("\nENTER THE PASSWORD:  ");
                    scanf("%ld",&password);

                    if(password==12345){
                        printf("\nSUCESSFUL");
                        printf("\nhow many items do you need to delete: ");
                        scanf("%d",&todelete);
                        printf("\nFOOD ITEMS\n");
                        printf("_________________________________\n");
                        printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
                        for(i=1;i<=11;i++){
                            printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
                        }
                        printf("----------------------------------\n\n");
                        printf("\nCURRY ITEMS\n");
                        printf("_________________________________\n");
                        printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
                        for(i=12;i<=16;i++){
                            printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
                        }
                        printf("----------------------------------\n\n");
                        printf("\n DRINKS\n");
                        printf("_________________________________\n");
                        printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
                        for(i=17;i<=20;i++){
                            printf("|%d\t|%s\t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
                        }
                        printf("----------------------------------\n\n");
                        printf("\n TODAY'S SPECIAL\n");
                        printf("_________________________________\n");
                        printf("|S.NO\t|\tITEMS\t|PRICE  |\n\n");
                        for(i=21;i<21+add;i++){
                            printf("|%d\t|%s    \t|%d\t|\n",i,arr_x[i].a,arr_x[i].b);
                        }
                        printf("----------------------------------\n");
                        printf("S.NO\tITEMS\t PRICE\n");
                        for(i=0;i<todelete;i++){
                            scanf("%d",&deleltion);
                            printf("\t%s\t%d\n",arr_x[deleltion].a,arr_x[deleltion].b);
                            strcpy(arr_x[deleltion].a,unavailable);
                            arr_x[deleltion].b=0;
                        }
                        break;
                    }
                    else{
                        printf("\nincorect\nyou have %d chance left",limit1-1);
                    }
                }
                else{
                    printf("\nsorry you have tried too much attempt. please contact concern authority");
                }
                limit1--;
            }

            printf("enter to continue");
            getchar();
            getchar();
        }
        //to exit
        else if(option==3){
            break;
        }
        else{
            printf("try again");
            getchar();
            getchar();
        }
    }while(option != 3);

    printf("\tTHANK\n YOU VISIT AGAIN");
    printf("\nPRESS ENTER TO EXIT ");
    getchar();
    getchar();
}