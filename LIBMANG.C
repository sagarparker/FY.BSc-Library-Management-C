#include <stdio.h>
int main()

{

int num;
int rol;
char sup;
char user[20];
char day[20];



clrscr ();
printf("\t\t\tWelcome to the library management system.\n");

printf("\n\n\tEnter whether you are student or teacher:-");
scanf("%s",&user);
printf("\n\tUSER:-%s",user);

printf("\n\n\tEnter the day:-");
scanf("%s", &day);
printf("\n\tDAY:-%s",day);

printf("\n\n\tNOTE:-");
printf("\n\n\tStudents can issue book only on Monday,Tuesday,Friday");
printf("\n\tWhile teachers can issue book on all working days.");


printf("\n\n\tMenu:-\n");
printf("\t****\n");
printf("\n\t1.Issue books\n\t2.Exit program\n");

printf("\n\t*Select an option:-");
scanf("%d", &num);

if (num == 1)

{
int no;
int date;
int month;
int year;
int copy;

printf("\n\n\tNOTE:-");
printf("\n\n\tStudents can be issued only one book while the Staff members can be \n\tissued two books.\n");

printf("\n\t*Please enter your roll no or Staff ID no:-");
scanf("%d", &rol);
printf("\tRoll no or Staff ID no=%d\n",rol);

printf("\n\tBook code,Book names,Book authors:-\n");

printf("\n\t(01).Steve jobs(2 copies) :-Walter Isaacson\n\t(02).life in parts(1 copy) :-Bryan Cranston\n\t(03).I am Malala(2 copies) :-Malala Yousafzai\n\t(04).Into the wild(1 copy) :-Jon Krakauer\n\t");
printf("(05).Wings of fire(4 copies) :-A.P.J.Abdul Kalam\n\t(06).Angela's Ashes(1 copy) :-Frank McCourt\n\t(07).Wild swans(1 copy) :-Jung Chang\n\t(08).Playing it my way(3 copies) :-Sachin Tendulkar\n\t");
printf("(09).My Life(1 copy) :-Bill Clinton\n\t(10).War and peace(2 copies) :-Leo Tolstoy\n\t(11).Hamlet(2 copies) :-Shakespeare\n\t(12).The iliad(1 copy) :-Homer\n\t(13).The odyssey(1 copy) :-Homer\n\t(14).Moby dick(2 copies) :-Herman Melville\n\t(15).Great expectations(1 copy)  :-Charles Dickens\n");

printf("\n\tEnter the code of the book issued:- ");
scanf("%d", &no);

if (no <= 15 )
{
printf("\n\tEnter the date:-");
scanf("%d",&date);
printf("\tEnter the month:-");
scanf("%d",&month);
printf("\tEnter the year:-");
scanf("%d",&year);

printf("\n\tEnter the copy no:-");
scanf("%d",&copy);

printf("\n\t*************************************************");
printf("\n\tBook code %d is issued to roll no %d.",no,rol);
printf("\n\tCopy no :- %d",copy);
printf("\n\tBook issued on %d/%d/%d",date,month,year);
printf("\n\tReturn the book 14 days after %d/%d/%d(%s)\n",date,month,year,day);
printf("\n\t(Failure to return the book after the time limit\n\twill lead to fine of Rs.50.)");
printf("\n\t*************************************************");


}

else
{
printf("\n\tThe book code doesn't exist!");
}

}

if (num==2)
{
 printf("\n\t**********************************");
 printf("\n\tPress any key to exit the program");
 printf("\n\t**********************************");
}

getch();
return 0;
}
