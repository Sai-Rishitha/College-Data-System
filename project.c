#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

void gotoxy(int x,int y);
void mainmenu();
void student();
void password();
void admin();

void addclassroutine();
void searchclassroutine();
void searchclassroutine1();
void editclassroutine();
void deleteclassroutine();
void viewclassroutine();

void addbusinfo();
void searchbusinfo();
void editbusinfo();
void deletebusinfo();
void viewbusinfo();

void addteacherinfo();
void searchteacherinfo();
void editeacherinfo();
void deleteteacherinfo();
void viewteacherinfo();

void addassignment();
void searchassignment();
void editassignment();
void deleteassignment();
void viewassignment();

void addquiz();
void searchquiz();
void editquiz();
void deletequiz();
void viewquiz();

void addevent();
void searchevent();
void editevent();
void deleteevent();
void viewevent();

void addsub();
void searchsub();
void editsub();
void deletesub();
void viewsub();

int day(char a[30]);

struct routine
{
char day[50];
char one[25];
char two[25];
char three[25];
char four[25];
char five[25];
char six[25];
};struct routine r;

typedef struct
{
char busno[20];
char phone[30];
char stop[200];
}bus;
bus b;

typedef struct
{
char name[30];
char qualify[30];
char phone[11];
char design[30];
}teach;
teach t;

typedef struct
{
char subname[20];
char dateofsubmission[30];
char instructions[200];
}assignment;
assignment assi;

typedef struct
{
char subname[20];
char dateofquiz[30];
char portion[200];
} quiz;
quiz q;

typedef struct
{
char eventname[20];
char dateofevent[30];
char instructions[200];
}event;
event e;


char pass[10]="vasavi";
int i;
FILE *fptr;

int main()
{
	mainmenu();
	return 0;
}

void gotoxy (int x, int y)
{
	COORD coord = { 0 ,0 };
	coord.X = x; coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
void mainmenu()
{
       
	system("cls");
	printf("\033[0;36m");
	char d[40] = "WELCOME TO COLLEGE DATA SYSTEM";
	int i,j,k,l,m;
	gotoxy(20,5);
	for(j=0;j<40;j++)
	{
		Sleep(10);
		printf("\xb2");
	}
	gotoxy(20,5);printf("\xB2");
	Sleep(20);
	gotoxy(20,6);printf("\xB2");
	Sleep(20);
	gotoxy(20,7);printf("\xB2");
	Sleep(20);
	gotoxy(20,8);printf("\xB2");
	gotoxy(20,9);printf("\xB2");
	Sleep(20);
	gotoxy(20,10);printf("\xB2");
	Sleep(20);
	gotoxy(20,11);printf("\xB2");
	Sleep(20);
	gotoxy(20,12);printf("\xB2");
	gotoxy(20,13);printf("\xB2");
	Sleep(20);
	gotoxy(20,14);printf("\xB2");
	Sleep(20);
	gotoxy(20,15);printf("\xB2");
	Sleep(20);
	gotoxy(20,16);printf("\xB2");
	gotoxy(20,17);printf("\xB2");
	Sleep(20);
	gotoxy(20,18);printf("\xB2");
	Sleep(20);
	gotoxy(20,19);printf("\xB2");
	Sleep(20);
	gotoxy(20,20);printf("\xB2");
	gotoxy(60,5);printf("\xB2");
	Sleep(20);
	gotoxy(60,6);printf("\xB2");
	Sleep(20);
	gotoxy(60,7);printf("\xB2");
	Sleep(20);
	gotoxy(60,8);printf("\xB2");
	Sleep(20);
	gotoxy(60,9);printf("\xB2");
	gotoxy(60,9);printf("\xB2");
	Sleep(20);
	gotoxy(60,10);printf("\xB2");
	Sleep(20);
	gotoxy(60,11);printf("\xB2");
	Sleep(20);
	gotoxy(60,12);printf("\xB2");
	Sleep(20);
	gotoxy(60,13);printf("\xB2");
	Sleep(20);
	gotoxy(60,14);printf("\xB2");
	Sleep(20);
	gotoxy(60,15);printf("\xB2");
	Sleep(20);
	gotoxy(60,16);printf("\xB2");
	Sleep(20);
	gotoxy(60,17);printf("\xB2");
	Sleep(20);
	gotoxy(60,18);printf("\xB2");
	Sleep(20);
	gotoxy(60,19);printf("\xB2");
	Sleep(20);
	gotoxy(60,20);printf("\xB2");
	gotoxy(20,20);
	for(j=0;j<40;j++)
	{
		Sleep(20);
		printf("\xb2");
	}
         
	gotoxy(20,9);
	for(j=0;j<40;j++)
	{
	Sleep(20);
	printf("\xb2");
	}

	gotoxy(21,7);
	printf("\t ");
	for(m=0;m<30;m++)
	{
		Sleep(50);
		printf("%c",d[m]);
	}

	gotoxy(23,11);
	printf("\t \xdb\xdb\xdb\xb2 1.Student");
	gotoxy(23,14);
	printf("\t \xdb\xdb\xdb\xb2 2.Admin ");
	gotoxy(23,17);
	printf("\t \xdb\xdb\xdb\xb2 3.Quit ");

	gotoxy(21,22);
	printf("Enter your choice: ");
	int ch;
	scanf("%d",&ch);
	printf("\033[0m");
	switch(ch)
	{
		case 1:
			student();
			break;
		case 2:
			system("cls");
			password();
			break;
		case 3:
			system("cls");
			break;
		default:
			printf("\033[0;36m");
			printf("\n\a\t\t\t Wrong Choice! Try again");
			Sleep(1000);
			printf("\033[0m");
			system("cls");
			mainmenu();
	}
	
}
void student()
{
	int ch;
        do
	{
	system("cls");
	printf("\033[0;32m");
	printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 STUDENT SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Class timetable \n");
	printf("\n\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Bus schedule \n");
	printf("\n\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Teacher information\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Assignments\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. Quizzes\n\n");
        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Events in College\n\n");
        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 7. Subject's list\n\n");
        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 8.Exit\n\n");
	printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf("\n\t\t\t\t\tEnter your choice: ");
	scanf("%d",&ch);
	printf("\033[0m");
	switch(ch)
	{
		case 1:
			printf("\033[0;32m");
			printf("\t\t\t\t\tWhich one do you want to view, 1.A particular day or 2.The whole week\n\t\t\t\t\tEnter your choice: ");
			int choice;
			scanf("%d",&choice);
			if(choice==1)
				searchclassroutine1();
			else if(choice==2)
				viewclassroutine();
			else
				printf("\t\t\t\t\tWrong choice");
				getch();
			printf("\033[0m");
			break;
		case 2:
			searchbusinfo();
			break;
		case 3:
			searchteacherinfo();
			break;
                case 4:
                        searchassignment();
                        break;
                case 5:
                        searchquiz();
			break;
		case 6:
			searchevent();
			break;
		case 7:
			searchsub();
			break;
		case 8:
			break;
		default:
			printf("\033[0;32m");
			printf("\a\t\t\t\t\tInvalid choice");
			printf("\033[0m");
			getch();
			break;
	}
	}while(ch!=8);	
}

void password()
{
	system("cls");
	printf("\033[0m");
	int v=1;
	for(v=1;v<=5;v++)
	{
	printf("\n\n\n\t\t");
	char ch=0,passw[10];
	printf("\n\n\n\n\n\n\t\t\t\t***** Password Protected *****");
	printf("\n\n\t\t\t\tEnter Password: ");
	while(ch!=13)
	{
		ch=getch();
		if(ch!=13)
		{
			printf("*");
			passw[i] = ch;
			i++;
		}
	}	
	passw[i] = '\0';
	if(strcmp(pass,passw)==0)
	{
		admin();
		break;
	}
	else
	{
		i=0;
		printf("\a\n\n\t\t\t\twrong password !");
		Sleep(1000);
		system("cls");
		printf("\n\n\t\t\tYour Try %d's",v);
		if(v==4)
		{
			system("cls");
			printf("\a\n\t\t\t***This is your last chance pls type correct password \n\t\t\tOtherwise you will have to wait for 20 sec!");
		}
		else if(v==5)
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\t\t\t\tPls try after 20 sec\n");
			Sleep(2000);
			int count=20;
			do
				{
					Sleep(1000);
					system("cls");
					count--;
					printf("\n\n\n\n\n\n\n\t\t\t\t\tWait...\a %d",count);
				}while(count!=0);
				system("cls");
				password();
		}
	}
	}
}
void admin()
{
	int sl;
	do
	{
	system("cls");
	printf("\033[1;35m");
	printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 ADMIN SECTION \xb2\xb2\xb2\xb2\xb2\xb2\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Add info\n");
	printf("\n\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Search info\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Edit info\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Delete info\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. View info\n\n");
	printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Exit\n\n");
        
	printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
	printf("\t\t\t\t\tEnter your choice: ");
	scanf("%d",&sl);
	switch(sl)
	{
		case 1:
			system("cls");
			printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Add info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Class Timetable \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Bus Schedule \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Teacher information\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Assignments\n\n");
	                printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. Quizzes\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Events in College\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 7. Subject's list\n\n");
			printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
			printf("\t\t\t\t\tEnter your choice: ");
			int ch;
			scanf("%d",&ch);
			switch(ch)
			{
				case 1:
					addclassroutine();
					break;
				case 2:
					addbusinfo();
					break;
                                case 3:
					addteacherinfo();
					break;
                                case 4:
					addassignment();
					break;
				case 5:
					addquiz();
					break;
				case 6:
					addevent();
					break;

				case 7:
					addsub();
					break;
				default:
					printf("\t\t\t\t\tInvalid choice");
					getch();
					break;
			}
			break;
		case 2:
			system("cls");
			printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Search info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Class Timetable \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Bus Schedule \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Teacher information\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Assignments\n\n");
	                printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. Quizzes\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Events in College\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 7. Subject list\n\n");
			printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
			printf("\t\t\t\t\tEnter your choice: ");
			int choice;
			scanf("%d",&choice);
			switch(choice)
			{
				case 1:
					searchclassroutine();
					break;
				case 2:
					searchbusinfo();
					break;
                                case 3:
					searchteacherinfo();
					break;
				case 4: 
					searchassignment();
					break;
				case 5:
					searchquiz();
					break;
				case 6:
					searchevent();
					break;
				case 7:
					searchsub();
					break;
				
				default:
					printf("\t\t\t\t\tInvalid choice");
					getch();
					break;
			}break;
		case 3:
			system("cls");
			printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Edit info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Class Timetable \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Bus Schedule \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Teacher information\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Assignments\n\n");
	                printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. Quizzes\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Events in College\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 7. Subject list\n\n");
			printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
			printf("\t\t\t\t\tEnter your choice: ");
			int ed;
			scanf("%d",&ed);
			switch(ed)
			{
				case 1:
					editclassroutine();
					break;
				case 2:
					editbusinfo();
					break;
				case 3:
					editeacherinfo();
					break;
				case 4:
					editassignment();
					break;
				case 5:
					editquiz();
					break;
				case 6:
					editevent();
					break;
				case 7:
					editsub();
					break;
				default:
					printf("\t\t\t\t\tInvalid choice");
					getch();
					break;
			}break;

		case 4:
			system("cls");
			printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 Delete info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Class Timetable \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Bus Schedule \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Teacher information\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Assignments\n\n");
	                printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. Quizzes\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Events in College\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 7. Subject list\n\n");
			printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
			printf("\t\t\t\t\tEnter your choice: ");
			int de;
			scanf("%d",&de);
			switch(de)
			{
				case 1:
					deleteclassroutine();
					break;
				case 2:
					deletebusinfo();
					break;
				case 3:
					deleteteacherinfo();
					break;
				case 4:
					deleteassignment();
					break;
				case 5:
					deletequiz();
					break;
				case 6:
					deleteevent();
					break;
				case 7:
					deletesub();
					break;
				default:
					printf("\t\t\t\t\tInvalid choice");
					getch();
					break;
			}
			break;
		case 5:
			system("cls");
			printf("\n\n\n\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2 View info\xb2\xb2\xb2\xb2\xb2\xb2\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 1. Class Timetable \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 2. Bus Schedule \n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 3. Teacher information\n\n");
			printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 4. Assignments\n\n");
	                printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 5. Quizzes\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 6. Events in College\n\n");
                        printf("\t\t\t\t\t\xdb\xdb\xdb\xb2 7. Subject list\n\n");
			printf("\t\t\t\t\t\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\xb2\n");
			printf("\t\t\t\t\tEnter your choice: ");
			int vi;
			scanf("%d",&vi);
			switch(vi)
			{
				case 1:
					viewclassroutine();
					break;
				case 2:
					viewbusinfo();
					break;
				case 3:
					viewteacherinfo();
					break;
				case 4:
					viewassignment();
					break;
				case 5:
					viewquiz();
					break;
				case 6:
					viewevent();
					break;
				case 7:
					viewsub();
					break;
				default:
					printf("\t\t\t\t\tInvalid choice");
					getch();
					break;
			}
			break;
		case 6:
			break;
		default:
			printf("\t\t\t\t\tInvalid choice");
			getch();
			break;
			
	}
	}while(sl!=6);
	printf("\033[0m");
}
void addclassroutine()
{
	printf("\033[0;31m");
	FILE *f;
	char test;
	f=fopen("classtimetable.txt","ab+");
	while(1)
	{
		system("cls");
		int i=1;
		printf("\n\t\t\t\t\tenter day: ");
		scanf("%s[^\n]",&r.day);
		fflush(stdin);
		printf("\n\t\t\t\t\tEnter 1st period: ");
		scanf("%s[^\n]",&r.one);
		printf("\n\t\t\t\t\tEnter 2nd period: ");
		scanf("%s[^\n]",&r.two);
		printf("\n\t\t\t\t\tEnter 3rd period: ");
		scanf("%s[^\n]",&r.three);
		printf("\n\t\t\t\t\tEnter 4th period: ");
		scanf("%s[^\n]",&r.four);
		printf("\n\t\t\t\t\tEnter 5th period: ");
		scanf("%s[^\n]",&r.five);
		printf("\n\t\t\t\t\tEnter 6th period: ");
		scanf("%s",&r.six);
		fwrite(&r,sizeof(r),1,f);
		fflush(stdin);
		system("cls");
		printf("\n\t\t\t\t\tRecord successfully added");
		i++;
		printf("\n\t\t\tPress esc key to exit, any other key to add other record:");
		test=getche();
		if(test==27)
		break;
	}
	fclose(f);
	getch();
}

void searchclassroutine()
{
	printf("\033[0;31m");
	char de[35];
	fptr=fopen("classtimetable.txt","rb+");
	printf("\t\t\t\t\tEnter name of the day to be searched: ");
	scanf("%s[^\n]",&de);
	int x=0;
	while(fread(&r,sizeof(r),1,fptr))
	{
		if(strcmp(r.day,de)==0)
		{
			x=1;
			printf("\n\t\t\t\t\tRecord found");
			system("cls");
			printf("\n\t\t\t\t\t   Day : %s\n\t\t\t\t\t1st period is : %s\n\t\t\t\t\t2nd period is : %s\n\t\t\t\t\t3rd period is : %s\n\t\t\t\t\t4th period is : %s\n\t\t\t\t\t5thperiod is : %s\n\t\t\t\t\t6th period is : %s",r.day,r.one,r.two,r.three,r.four,r.five,r.six);
			printf("\n");

			break;
		}
	}
	if(x==0)
	printf("\t\t\t\t\tRecord not found");
	fclose(fptr);
	getch();
}

void searchclassroutine1()
{
	printf("\033[0;31m");
	char de[35];int d;
	fptr=fopen("classtimetable.txt","rb+");
	printf("\t\t\t\t\tEnter name of the day to be searched: ");
	scanf("%s[^\n]",&de);
	int x=0;
	while(fread(&r,sizeof(r),1,fptr))
	{
		if(strcmp(r.day,de)==0)
		{
			x=1;
			printf("\n\t\t\t\t\tRecord found");
			system("cls");
			printf("\n\t\t\t\t\t   Day : %s\n\t\t\t\t\t1st period is : %s\n\t\t\t\t\t2nd period is : %s\n\t\t\t\t\t3rd period is : %s\n\t\t\t\t\t4th period is : %s\n\t\t\t\t\t5th period is : %s\n\t\t\t\t\t6th period is : %s",r.day,r.one,r.two,r.three,r.four,r.five,r.six);
			printf("\n");

			break;
		}
	}
	if(x==0)
	printf("\t\t\t\t\tRecord not found");
	fclose(fptr);
	fptr=fopen("assignmentdetails.txt","rb+");
	if(x==1)
		printf("\n\t\t\t\t\t   **********\n");
	while(fread(&assi,sizeof(assi),1,fptr))
	{
		d=day(assi.dateofsubmission);
		if(((strcmp(de,"saturday")==0) && d==0)||((strcmp(de,"sunday")==1) && d==1)||((strcmp(de,"monday")==0) && d==2)||((strcmp(de,"tuesday")==0) && d==3)||((strcmp(de,"wednesday")==0) && d==4)||((strcmp(de,"thursday")==0) && d==5)||((strcmp(de,"friday")==0) && d==6))
		printf("\n\t\t\tThere is an assignment in %s, due on %s, %s ",assi.subname,de,assi.dateofsubmission);
	}
	fclose(fptr);
	printf("\n");
	fptr=fopen("quizdetails.txt","rb+");
	while(fread(&q,sizeof(q),1,fptr))
	{
		d=day(q.dateofquiz);
		if(((strcmp(de,"saturday")==0) && d==0)||((strcmp(de,"sunday")==1) && d==1)||((strcmp(de,"monday")==0) && d==2)||((strcmp(de,"tuesday")==0) && d==3)||((strcmp(de,"wednesday")==0) && d==4)||((strcmp(de,"thursday")==0) && d==5)||((strcmp(de,"friday")==0) && d==6))
		printf("\n\t\t\tThere is a quiz scheduled in %s, on %s, %s",q.subname,de,q.dateofquiz);
	}
	fclose(fptr);
	getch();
	
}

void editclassroutine()
{
	printf("\033[0;31m");
	char d[10];
	int found=0;
	printf("\t\t\t\t\tEnter day to be modified: ");
	scanf("%s",d);
	fptr=fopen("classtimetable.txt","rb+");
	while(fread(&r,sizeof(r),1,fptr)==1)
	{
		if(strcmp(r.day,d)==0)
		{
			found=1;
			printf("\t\t\t\t\tRecord found");
			printf("\n\t\t\t\t\tEnter day: ");
			scanf("%s[^\n]",&r.day);
			fflush(stdin);
			printf("\n\t\t\t\t\tEnter 1st period: ");
			scanf("%s[^\n]",&r.one);
			printf("\n\t\t\t\t\tEnter 2nd period: ");
			scanf("%s[^\n]",&r.two);
			printf("\n\t\t\t\t\tEnter 3rd period: ");
			scanf("%s[^\n]",&r.three);
			printf("\n\t\t\t\t\tEnter 4th period: ");
			scanf("%s[^\n]",&r.four);
			printf("\n\t\t\t\t\tEnter 5th period: ");
			scanf("%s[^\n]",&r.five);
			printf("\n\t\t\t\t\tEnter 6th period: ");
			scanf("%s[^\n]",&r.six);
			fseek(fptr,-(sizeof(r)),SEEK_CUR);
			fwrite(&r,sizeof(r),1,fptr);
			break;
		}
	}
	if(found==0)
		printf("\t\t\t\t\tRecord not found");
	else
		printf("\t\t\t\t\tRecord modified successfully");
	fclose(fptr);
	getch();
}
void deleteclassroutine()
{
	printf("\033[0;31m");
	FILE *temp;
	char d[13];int x=0;
	fptr=fopen("classtimetable.txt","rb");
	temp=fopen("tempfile.txt","wb");
	printf("\n\t\t\t\t\tEnter the name of the day to be deleted: ");
	scanf("%s[^\n]",&d);
	while(fread(&r,sizeof(r),1,fptr)==1)
	{
		if(strcmp(r.day,d)==0)
		{ 
			x=1;
			printf("\t\t\t\t\tRecord found");
			continue;
		}
		else
		fwrite(&r,sizeof(r),1,temp);
	}
	fclose(fptr);
	fclose(temp);
	remove("classtimetable.txt");
	rename("tempfile.txt","classtimetable.txt");
	if(x==0)
		printf("\t\t\t\t\tRecord not found");
	else
		printf("\n\t\t\t\t\tRecord sucessfully deleted");
	getch();
}

void viewclassroutine()
{
	printf("\033[0;31m");
	FILE *f;
	f=fopen("classtimetable.txt","rb");
	int i;
	system("cls");
	while(fread(&r,sizeof(r),1,f)==1)
	{
		printf("\n\t\t\t\t\tDay is : %s\n\t\t\t\t\t1st period is : %s\n\t\t\t\t\t2nd period is : %s\n\t\t\t\t\t3rd period is : %s\n\t\t\t\t\t4th period is : %s\n\t\t\t\t\t5th period is : %s\n\t\t\t\t\t6th period is : %s",r.day,r.one,r.two,r.three,r.four,r.five,r.six);
		printf("\n");


	}
	fclose(f);
	getch();
	
}

void addbusinfo()
{
	printf("\033[1;33m");
	system("cls");
	fptr=fopen("busroutine.txt","ab+");
	while(1)
	{
		printf("\nEnter the bus number: ");
		scanf("%s",b.busno);
		printf("\nEnter the phone number: ");
		scanf("%s[^\n]",&b.phone);
		fflush(stdin);
		printf("\nEnter bus stops and timings: ");
		scanf("%[^\n]%*c",b.stop);
		fwrite(&b,sizeof(b),1,fptr);
		fflush(stdin);
		printf("\nRecord sucessfully added");
		printf("\nPress ESC key to exit or another key to continue");
		char t;
		t=getch();
		if(t==27)
		break;
	}
	fclose(fptr);
	getch();
}

void searchbusinfo()
{
	printf("\033[1;33m");
	char dk[35];
	int x=0;
	fptr=fopen("busroutine.txt","rb+");
	printf("Enter the bus number: ");
	scanf("%s",dk);

	while(fread(&b,sizeof(b),1,fptr))
	{
		if(strcmp(b.busno,dk)==0)
		{		
			x=1;
			system("cls");
			printf("\nBus number is : %s\nPhone number is : %s\nBus stops and timings are : %s\n",b.busno,b.phone,b.stop);
			break;
		}
	}
	if(x==0)
	printf("Record not found");
	fclose(fptr);
	getch();
}

void editbusinfo()
{
	printf("\033[1;33m");
	char d[20];
	int found=0;
	printf("Enter the bus number: ");
	scanf("%s",d);
	fptr=fopen("busroutine.txt","rb+");
	while(fread(&b,sizeof(b),1,fptr)==1)
	{
		if(strcmp(b.busno,d)==0)
		{
			found=1;
			printf("record found");
			printf("\nEnter bus no: ");
			scanf("%s",b.busno);
			printf("\nEnter phone no: ");
			scanf("%s[^\n]",&b.phone);
			fflush(stdin);
			printf("\nEnter bus stops and time");
			scanf("%[^\n]%*c",b.stop);
			fflush(stdin);
			fseek(fptr,-(sizeof(b)),SEEK_CUR);
			fwrite(&b,sizeof(b),1,fptr);
			break;
		}
	}
	if(found==0)
		printf("\nRecord not found");
	else
		printf("Record modified successfully");
	fclose(fptr);
	getch();
}

void deletebusinfo()
{
	printf("\033[1;33m");
	FILE *temp;
	char d[13];
        int x=0;
	fptr=fopen("busroutine.txt","rb");
	temp=fopen("tempfile.txt","wb");
	printf("\nenter the bus number to be deleted: ");
	scanf("%s[^\n]",&d);
	while(fread(&b,sizeof(b),1,fptr)==1)
	{
                x=1;
		if(strcmp(b.busno,d)==0)
		{
			printf("record found");
			continue;
		}
		else
		fwrite(&b,sizeof(b),1,temp);
	}
	fclose(fptr);
	fclose(temp);
	remove("busroutine.txt");
	rename("tempfile.txt","busroutine.txt");
        if(x==1)
	printf("\nrecord sucessfully deleted");
        else
        printf("\nRecord not found");
	getch();

}
void viewbusinfo()
{
	printf("\033[1;33m");
	FILE *f;
	f=fopen("busroutine.txt","rb");
	int i;
	system("cls");
	while(fread(&b,sizeof(b),1,f)==1)
	{
		printf("\nBus number is : %s\nPhone number is : %s\nBus stops and timings are : %s\n",b.busno,b.phone,b.stop);
		printf("\n");
	}
	fclose(f);
	getch();
}


void addteacherinfo()
{
	printf("\033[1;36m");
	fptr=fopen("teacher.txt","ab+");
	while(1)
	{
		fflush(stdin);
		printf("\nEnter teacher's full name: ");
		scanf("%[^\n]%*c",t.name);
		fflush(stdin);
		printf("\nEnter qualification: ");
		scanf("%[^\n]%*c",t.qualify);
		fflush(stdin);
		printf("\nEnter phone number: ");
		scanf("\n%s[^\n]",&t.phone);
		fflush(stdin);
		printf("\nEnter designation: ");
		scanf("%[^\n]%*c",t.design);
		fwrite(&t,sizeof(t),1,fptr);
		fflush(stdin);
		printf("\nRecord sucessfully added");
		printf("\nPress Esc key to exit or any other key to continue");
		char ex;
		ex=getch();
		if(ex==27)
		break;
	}
	fclose(fptr);
	getch();
}

void searchteacherinfo()
{
	printf("\033[1;36m");
	char dm[35];
	int x=0;
	fptr=fopen("teacher.txt","rb+");
	fflush(stdin);
	printf("Enter name of the teacher whose record is to be searched: ");
	scanf("%[^\n]%*c",dm);
	while(fread(&t,sizeof(t),1,fptr))
	{
		if(strcmp(t.name,dm)==0)
		{
			x=1;
			printf("\nRecord found\n");
			system("cls");
			printf("\nName is : %s\n\nPhone no is :  %s\n\nQualification is : %s\n\nDesination is : %s\n",t.name,t.phone,t.qualify,t.design);
			break;

		}
	}
	if(x==0)
	printf("\nRecord not found");
	fclose(fptr);
	getch();
}

void editeacherinfo()
{
	printf("\033[1;36m");
	char d[20];
	int found=0;
	fflush(stdin);
	printf("Enter teacher's name whose record is to be modified: ");
	scanf("%[^\n]%*c",d);
	fptr=fopen("teacher.txt","rb+");
	while(fread(&t,sizeof(t),1,fptr)==1)
	{
		if(strcmp(t.name,d)==0)
		{
			found=1;
			printf("Record found");
			fflush(stdin);
			printf("\nEnter teacher's full name: ");
			scanf("%[^\n]%*c",t.name);
			fflush(stdin);
			printf("\nenter qualification: ");
			scanf("%[^\n]%*c",t.qualify);
			fflush(stdin);
			printf("\nEnter phone number: ");
			scanf("%[^\n]%*c",t.phone);
			fflush(stdin);
			printf("\nEnter designation: ");
			scanf("%[^\n]%*c",t.design);
			fseek(fptr,-(sizeof(t)),SEEK_CUR);
			fwrite(&t,sizeof(t),1,fptr);
			break;
		}		
	}
	if(found==0)
	printf("\nRecord not found");
	else
	printf("Record modified successfully");
	fclose(fptr);
	getch();
}

void deleteteacherinfo()
{
	printf("\033[1;36m");
	system("cls");
	FILE *temp;
	char dt[13];
	int x=0;
	fptr=fopen("teacher.txt","rb");
	temp=fopen("tempfile.txt","wb");
	fflush(stdin);
	printf("\nEnter the name of teacher whose record is to be deleted: ");
	scanf("%[^\n]%*c",dt);
	while(fread(&t,sizeof(t),1,fptr)==1)
	{
		if(strcmp(t.name,dt)==0)
		{
			x=1;
			printf("Record found");
			continue;
		}
		else
		fwrite(&t,sizeof(t),1,temp);
	}
	fclose(fptr);
	fclose(temp);
	remove("teacher.txt");
	rename("tempfile.txt","teacher.txt");
	if(x==1)
	printf("\nRecord sucessfully deleted");
	else
	printf("\nRecord not found");
	getch();
}
void viewteacherinfo()
{
	printf("\033[1;36m");
	FILE *f;
	f=fopen("teacher.txt","rb");
	int i;
	system("cls");
	while(fread(&t,sizeof(t),1,f)==1)
	{
		printf("\nName is : %s\n\nPhone no is :  %s\n\nQualification is : %s\n\nDesination is : %s\n",t.name,t.phone,t.qualify,t.design);
		printf("\n");
	}
	fclose(f);
	getch();
}

void addassignment()
{
	printf("\033[1;36m");
	system("cls");
	fptr=fopen("assignmentdetails.txt","ab+");
        while(1)
	{
		printf("\nEnter the name of the subject: ");
		scanf("%s",assi.subname);
		fflush(stdin);
		printf("\nEnter the date of submission: ");
                scanf("%[^\n]%*c",assi.dateofsubmission);
		fflush(stdin);
		printf("\nEnter instructions: ");
		scanf("%[^\n]%*c",assi.instructions);
		fwrite(&assi,sizeof(assi),1,fptr);
		fflush(stdin);
		printf("\nRecord sucessfully added");
		printf("\nPress ESC key to exit or another key to continue");
		char t;
     		t=getch();
	       	if(t==27)
	    		break;

	}
	fclose(fptr);
	getch();

}

void searchassignment()
{
	printf("\033[1;36m");
	char dk[35];
  	int x=0;
	fptr=fopen("assignmentdetails.txt","rb+");
	printf("Enter the name of subject: ");
	scanf("%s",dk);
  	while(fread(&assi,sizeof(assi),1,fptr))
    	{
		if(strcmp(assi.subname,dk)==0)
		{                              
			x=1;
			system("cls");
			printf("\nSubject name  is : %s\nDate of submission of the assignment is : %s\nInstructions for the assignment are: %s\n",assi.subname,assi.dateofsubmission,assi.instructions);
			break;
		}
	}
	if(x==0)
  		printf("Record not found");
	fclose(fptr);
	getch();

}

 

void editassignment()
{
	printf("\033[1;36m");
	char d[20];
	int found=0;
	printf("Enter the name of subject: ");
	scanf("%s",d);
  	fptr=fopen("assignmentdetails.txt","rb+");
	while(fread(&assi,sizeof(assi),1,fptr)==1)
	{
		if(strcmp(assi.subname,d)==0)
		{
			found=1;
			printf("record found");
			printf("\nEnter the name of subject: ");
			scanf("%s",assi.subname);
			fflush(stdin);
			printf("\nEnter the date of submission: ");
			scanf("%[^\n]%*c",&assi.dateofsubmission);
			fflush(stdin);
		       	printf("\nEnter the instructions: ");
       			scanf("%[^\n]%*c",assi.instructions);
			fflush(stdin);
			fseek(fptr,-(sizeof(assi)),SEEK_CUR);
			fwrite(&assi,sizeof(assi),1,fptr);
			break;
		}
	}
	if(found==0)
		printf("\nRecord not found");
	else
		printf("Record modified successfully");
	fclose(fptr);
	getch();

}

void deleteassignment()
{
	printf("\033[1;36m");
	FILE *temp;
	char d[13];
	int x=0;
	fptr=fopen("assignmentdetails.txt","rb");
	temp=fopen("tempfile.txt","wb");
	printf("\nenter the subject name whose assignment is to be deleted: ");
	scanf("%s[^\n]",&d);
	while(fread(&assi,sizeof(assi),1,fptr)==1)
	{
	
		if(strcmp(assi.subname,d)==0)
		{
                        x=1;
			printf("record found");
			continue;
		}
		else
			fwrite(&assi,sizeof(assi),1,temp);
	}
	fclose(fptr);
	fclose(temp);
	remove("assignmentdetails.txt");
	rename("tempfile.txt","assignmentdetails.txt");
	if(x==1)
  		printf("\nRecord sucessfully deleted"); 
   	else
		printf("Record not found");
	getch();
}
void viewassignment()
{
	printf("\033[1;36m");
	FILE *f;
	f=fopen("assignmentdetails.txt","rb");
	int i;
	system("cls");
	while(fread(&assi,sizeof(assi),1,f)==1)
	{
		printf("\nSubject name  is : %s\nDate of submission of the assignment is : %s\nInstructions for the assignment are: %s\n",assi.subname,assi.dateofsubmission,assi.instructions);
		printf("\n");
	}
	fclose(f);
	getch();
}

void addquiz()
{
	printf("\033[1;33m");
	system("cls");
	fptr=fopen("quizdetails.txt","ab+");
	while(1)
	{
		printf("\nEnter the subject's name: ");
		scanf("%s",q.subname);
		fflush(stdin);
		printf("\nEnter the date of quiz: ");
                
		scanf("%[^\n]%*c",q.dateofquiz);
		
		fflush(stdin);
		printf("\nEnter syllabus for the quiz: ");
		scanf("%[^\n]%*c",q.portion);
		fwrite(&q,sizeof(q),1,fptr);
		fflush(stdin);
		printf("\nRecord added successfully\n");
		printf("\nPress ESC key to exit or any another key to add another record");
		char k;
		k=getch();
		if(k==27)
		break;
		
	}
	fclose(fptr);
	getch();
}

void searchquiz()
{
	printf("\033[1;33m");
	char sk[35];
	int h=0;
	fptr=fopen("quizdetails.txt","rb+");
	printf("Enter the subject's name: ");
	scanf("%s",sk);
	
	while(fread(&q,sizeof(q),1,fptr))
	{
		if(strcmp(q.subname,sk)==0)
		{
			h=1;
			system("cls");
			printf("\nSubject's name is : %s\nDate of the quiz is : %s\nSyllabus for the quiz is: %s\n",q.subname,q.dateofquiz,q.portion);
			break;
		}
	}
	if(h==0)
	printf("Record not found");
	fclose(fptr);
	getch();
}

void editquiz()
{
	printf("\033[1;33m");
	char e[20];
	int find=0;
	printf("Enter the subject's name: ");
	scanf("%s",e);
	fptr=fopen("quizdetails.txt","rb+");
	while(fread(&q,sizeof(q),1,fptr)==1)
	{
		if(strcmp(q.subname,e)==0)
		{
			find=1;
			printf("Record found");
			printf("\nEnter the subject's name: ");
			scanf("%s",q.subname);
                        fflush(stdin);
			printf("\nEnter the date of quiz: ");
			scanf("%[^\n]%*c",&q.dateofquiz);
			fflush(stdin);
			printf("\nEnter syllabus for the quiz: ");
			scanf("%[^\n]%*c",q.portion);
			fflush(stdin);
			fseek(fptr,-(sizeof(q)),SEEK_CUR);
			fwrite(&q,sizeof(q),1,fptr);
			break;	
		}	
	} 
	if(find==0)
		printf("\nRecord not found");
	else
		printf("Record modified successfully");
	fclose(fptr);
	getch();
}

void deletequiz()
{
	printf("\033[1;33m");
	FILE *tem;
	char d[20];
	int x=0;
	fptr=fopen("quizdetails.txt","rb");
	tem=fopen("tempfile.txt","wb");
	printf("\nEnter the subject's name whose record is to be deleted: ");
	scanf("%s[^\n]",&d);
	while(fread(&q,sizeof(q),1,fptr)==1)
	{
		
		if(strcmp(q.subname,d)==0)
		{
                        x=1;
			printf("Record found");
			continue;
		}
		else
			fwrite(&q,sizeof(q),1,tem);
	}
	fclose(fptr);
	fclose(tem);
	remove("quizdetails.txt");
	rename("tempfile.txt","quizdetails.txt");
	if(x==1)
		printf("\nRecord successfully deleted");
	else
	printf("\nRecord not found");
	getch();
}
void viewquiz()
{
	printf("\033[1;33m");
	FILE *f;
	f=fopen("quizdetails.txt","rb");
	int i;
	system("cls");
	while(fread(&q,sizeof(q),1,f)==1)
	{
		printf("\nSubject's name is : %s\nDate of the quiz is : %s\nSyllabus for the quiz is: %s\n",q.subname,q.dateofquiz,q.portion);
		printf("\n");
	}
	fclose(f);
	getch();
}

void addevent()
{
	printf("\033[0;34m");
	system("cls");
	fptr=fopen("eventdetails.txt","ab+");
	while(1)
	{
		fflush(stdin);
		printf("\nEnter the name of event: ");
		scanf("%[^\n]%*c",e.eventname);
		fflush(stdin);
		printf("\nEnter the date of event: ");
		scanf("%[^\n]%*c",&e.dateofevent);
		fflush(stdin);
		printf("\nEnter details of the event: ");
		scanf("%[^\n]%*c",e.instructions);
		fwrite(&e,sizeof(e),1,fptr);
		fflush(stdin);
		printf("\nRecord sucessfully added");
		printf("\nPress ESC key to exit or another key to continue");
		char t;
		t=getch();
		if(t==27)
			break;
	}
	fclose(fptr);
	getch();
}

void searchevent()
{
	printf("\033[0;34m");
	char dk[35];
	int x=0;
	fptr=fopen("eventdetails.txt","rb+");
	fflush(stdin);
	printf("Enter the name of event: ");
	scanf("%[^\n]%*c",dk);
	while(fread(&e,sizeof(e),1,fptr))
	{
		if(strcmp(e.eventname,dk)==0)
		{                         
			x=1;
			system("cls");
			printf("\nEvent name is : %s\nDate of the event is : %s\nDetails of the event are : %s\n",e.eventname,e.dateofevent,e.instructions);
			break;
		}
	}
	if(x==0)
  		printf("Record not found");
	fclose(fptr);
	getch();
}

void editevent()
{
	printf("\033[0;34m");
	char d[20];
	int found=0;
	fflush(stdin);
	printf("Enter the name of event: ");
	scanf("%[^\n]%*c",d);
	fptr=fopen("eventdetails.txt","rb+");
	while(fread(&e,sizeof(e),1,fptr)==1)
	{
		if(strcmp(e.eventname,d)==0)
		{
			found=1;
			printf("Record found");
			fflush(stdin);
			printf("\nEnter the name of event: ");
			scanf("%[^\n]%*c",e.eventname);
			fflush(stdin);
			printf("\nEnter the date of event: ");
			scanf("%[^\n]%*c",&e.dateofevent);
			fflush(stdin);
			printf("\nEnter details of the event: ");
			scanf("%[^\n]%*c",e.instructions);
			fflush(stdin);
			fseek(fptr,-(sizeof(e)),SEEK_CUR);
			fwrite(&e,sizeof(e),1,fptr);
			break;
		}
	}
	if(found==0)
		printf("Record not found");
	else
		printf("Record modified successfully");
	fclose(fptr);
	getch();
}

void deleteevent()
{
	printf("\033[0;34m");
	FILE *temp;
	char d[13];
	int x=0;
	fptr=fopen("eventdetails.txt","rb");
	temp=fopen("tempfile.txt","wb");
	fflush(stdin);
	printf("\nEnter the event's name to be deleted: ");
	scanf("%[^\n]%*c",&d);
	while(fread(&e,sizeof(e),1,fptr)==1)
	{
		
		if(strcmp(e.eventname,d)==0)
		{
                        x=1;
			printf("Record found");
			continue;
		}
		else
			fwrite(&e,sizeof(e),1,temp);
	}
	fclose(fptr);
	fclose(temp);
	remove("eventdetails.txt");
	rename("tempfile.txt","eventdetails.txt");
	if(x==1)
  		printf("\nRecord sucessfully deleted");
	else
		printf("\nRecord not found");
	getch();
}
void viewevent()
{
	printf("\033[0;34m");
	FILE *f;
	f=fopen("eventdetails.txt","rb");
	int i;
	system("cls");
	while(fread(&e,sizeof(e),1,f)==1)
	{
		printf("\nEvent name is : %s\nDate of the event is : %s\nDetails of the event are : %s\n",e.eventname,e.dateofevent,e.instructions);
		printf("\n");
	}
	fclose(f);
	getch();
}

void addsub()
{
	printf("\033[1;35m");
	fptr=fopen("subjects.txt","w");
	char c;
	printf("Enter the subjects list\n");
	while((c=getchar())!=EOF)
		putc(c,fptr);
	fclose(fptr);
	printf("\nAdded successfully");
	getch();
}

void searchsub()
{
	printf("\033[1;35m");
	fptr=fopen("subjects.txt","r");
	if(fptr==NULL)
	{
		printf("The file does not exist");
		return ;
	}
	char c;
	printf("The list of subjects are");
	while((c=getc(fptr))!=EOF)
		putchar(c);
	fclose(fptr);
	getch();
}

void editsub()
{
	printf("\033[1;35m");
	addsub();
	printf("\nFile modified successfully");
	getch();
}

void deletesub()
{
	printf("\033[1;35m");
	remove("subjects.txt");
	printf("\nFile deleted successfully");
	getch();
}

void viewsub()
{
	printf("\033[1;35m");
	searchsub();
	getch();
}

int day(char a[30])
{
	int dd,mm,yyyy;
	int d1=0,d2=0,m1=0,m2=0,y1=0,y2=0,y3=0,y4=0;
	d1=a[0]-'0';
	d2=a[1]-'0';
	m1=a[3]-'0';
	m2=a[4]-'0';
	y1=a[6]-'0';
	y2=a[7]-'0';
	y3=a[8]-'0';
	y4=a[9]-'0';
	dd=d1*10+d2;
	mm=m1*10+m2;
	yyyy=y1*1000+y2*100+y3*10+y4;
	if(mm==1)
		{
			mm=13;
			yyyy--;
		}
		if(mm==2)
		{
			mm=14;
			yyyy--;
		}
	int k=yyyy%100;
	int j=yyyy/100;
	int h;
	h=dd+13*(mm+1)/5+k+(k/4)+(j/4)+(5*j);
	h=h%7;
	return h;
}








