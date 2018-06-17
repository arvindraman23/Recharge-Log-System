/* THIS IS A PROJECT ON
  ONLINE RECHARGE LOG SYSTEM
   BY,
      ARVIND.R
       XII-C              */
#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
class mobile
{
    protected:
		long phone_no;
		float price,bal;
		char crd_no[20],Email[80],name[25];
		int CW_no,Errcode;
		char  addr[50];

    public:
	mobile()
	{   strcpy(name," ");
	    phone_no=0;
	    price=0.0;
	    bal=0.0;
	    strcpy(crd_no," ");
	    CW_no=0,Errcode=0;
	}
		void contact();
		void recharge();
		void complaint();
		void balance();
		void showinfo();
		void getinfo()
		{ 	cout<<"\n\t ***** Please Fill Out Our Survey Form ***** \n\t";
			cout<<"\n\t Enter Your Name : ";
			cin.getline(name,25);
			cin.get();
			cout<<"\n\t Enter Your Phone Number :";
			cin>>phone_no;
			cout<<"\n\t Enter Your Permanent Address : ";
			cin.getline(addr,50);
			cin.get();
			cout<<"\n\t ***** Thank You For Your Co-operation ***** ";
		}
}mobj;


void mobile::contact()
{	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** CONTACT US ***** \n";
	cout<<"\n\t From your Airtel mobile: 12150 \n\t Toll free: 18001028080 \n\t Tolled: 02044448080 \n\t Website : www.airtel.in/mobile ";
}
void mobile::complaint()
{       randomize();
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** AIRTEL MOBILE COMPLAINT-LOG ***** \n";
	cout<<"\n\t Enter your 10-digit phone number : ";
	cin>>phone_no;
	cout<<"\n\t Select the proper ERROR code :\n\t 1.) No signal \n\t 2.) Service Failure \n\t 3.) Account error \n\t";
	cin>>Errcode;
	cout<<"\n Your complaint has been lodged. The technician will be at your residence within 24 hours. \n Conformation code : ";
	cout<<random(1000);
}
void mobile::balance()
{   	int option;
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** AIRTEL MOBILE BALANCE ENQUIRY ***** \n";
	cout<<"\n\t Enter your 10-digit phone number :";
	cin>>phone_no;
	cout<<"\n\t Enter the amount recharged : ";
	cin>>price;
	start:
	cout<<"\n\t Select your package : \n\t 1.) 1/2p per sec \n\t 2.) 30p per sec \n\t 3.) 50p per sec \n\t";
	cin>>option;
	if(option==1)
		bal=price-30;
	else if(option==2)
		bal=price-40;
	else if(option==3)
		bal=price-50;
	else
	{   	cout<<"\n\t Wrong Input....Try Again.....";
		goto start;
	}
	if(bal==(0+bal))
	{
		cout<<"\n\t You Have an Overdue Of Rs."<<(-1*bal)<<"  On your Account : ";
		cout<<"\n\t Rs."<<(-1*bal)<<" Will Be Deducted From Your Further Transactions. ";
	}
	else if(bal)
		cout<<"\n\t Your Current Account Balance is Rs."<<bal<<" . ";
	else
		cout<<"\n\t Your Current Account Balance is 0 ";
}
void mobile::recharge()
{       int capt,C_capt,c2,c3,ch2,n1,n2;
	long c5;
	randomize();
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** AIRTEL MOBILE RECHARGE ***** \n";
	cout<<"\n Enter your Name : ";
	cin.getline(name,25);
	cin.get();
	cout<<"\n Enter your 10-digit phone number : ";
	cin>>phone_no;

	cout<<"\n Enter the amount to be recharged : ";
	cin>>price;
	cout<<"\n Enter your email id : ";
	cin.getline(Email,80);
	cin.get();
	cout<<"\n Enter your 16-digit Credit/Debit card number (xxxx xxxx xxxx xxxx) : ";
	cin.getline(crd_no,20);
	cin.get();
	cout<<"\n Enter your 3-digit CVV number : ";
	cin>>CW_no;
	cout<<"\n Verify By Entering Your Captcha is ( ";
	sta_rt:
	capt=random(5000);
	cout<<capt<<" ) : ";
	cin>>n1;
	if(capt==n1)
	{	cout<<"\n Processing...........";
		cout<<"\n Your Transaction has been successfully completed..... :) ";
		c5=random(9999999);
		cout<<"\n Your Transaction-ID is : "<<c5;
	}
	else
	{ 	cout<<"\n Wrong Input...... Verify Again ( ";
		goto sta_rt;
	}
}
void mobile::showinfo()
{
	cout<<"\n\t Name : ";
	cout.write(name,25);
	cout<<"\n\t Mobile Number : "<<phone_no;
	cout<<"\n\t Amount recharged : "<<price;
}

class dish:public mobile
{      protected:
		long phone_no;
		float price,bal;
		char crd_no[20],Email[80],name[25];
		int CW_no,Errcode;
		char * addr;

       public:
		dish()
		{   strcpy(name," ");
		    phone_no=0;
		    price=0.0;
		    bal=0.0;
		    strcpy(crd_no," ");
		    CW_no=0,Errcode=0;
		}
		void dish_contact();
		void dish_balance();
		void dish_recharge();
		void dish_complaint();
}dobj;
void dish::dish_contact()
{       cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** CONTACT US ***** \n";
	cout<<"\n\t From your Airtel mobile: 12150 \n\t Toll free: 18001028080 \n\t Tolled: 02044448080 \n\t Website : www.airtel.in/mobile ";
}
void dish::dish_complaint()
{       cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** AIRTEL SATELLITE TV-DTH COMPLAINT-LOG ***** \n";
	randomize();
	cout<<"\n\t Enter your 10-digit customer ID : ";
	cin>>phone_no;
	cout<<"\n\t Select the proper ERROR code :\n\t 1.) No signal \n\t 2.) Service Failure \n\t 3.) Components error \n\t";
	cin>>Errcode;
	cout<<"\n\t Your complaint has been lodged. The technician will be at your residence within 24 hours.(Additional charges may be applied for technical fault ) \n Conformation code : ";
	cout<<random(1000);
}
void dish::dish_balance()
{   int option1;
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** AIRTEL SATELLITE TV-DTH BALANCE ENQUIRY ***** \n";
	cout<<"\n\t Enter your 10-digit customer ID :";
	cin>>phone_no;
	cout<<"\n\t Enter the amount recharged : ";
	cin>>price;

	start:
	cout<<"\n Select your package : \n\t 1.) Value Pack( Rs.150/month )  \n\t 2.) Infotainment Pack( Rs.200/month ) \n\t 3.) Value Pack + Ultra HD Pack ( Rs.350/month )\n\t";
	cin>>option1;
	if(option1==1)
		bal=price-150;
	else if(option1==2)
		bal=price-200;
	else if(option1==3)
		bal=price-350;
	else
	{   cout<<"\n Wrong Input....Try Again.....";
	    goto start;
	}
		if(bal==(0+bal))
	{
		cout<<"\n\t You Have an Overdue Of Rs."<<(-1*bal)<<"  On your Account : ";
		cout<<"\n\t Rs."<<(-1*bal)<<" Will Be Deducted From Your Further Transactions. ";
	}
	else if(bal)
		cout<<"\n\t Your Current Account Balance is Rs."<<bal<<" . ";
	else
		cout<<"\n\t Your Current Account Balance is 0 ";
}
void dish::dish_recharge()
{int capt,C_capt,c2,c3,ch2,n1,n2;
	long c5;
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                                    AIRTEL                                      \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n\t ***** AIRTEL SATELLITE TV-DTH RECHARGE ***** \n";
	randomize();
	cout<<"\n Enter your Name : ";
	cin.getline(name,25);
	cin.get();
	cout<<"\n Enter your 10-digit Account Number : ";
	cin>>phone_no;
	cin.get();
	cout<<"\n Enter the amount to be recharged : ";
	cin>>price;
	cin.get();
	cout<<"\n Enter your email id : ";
	cin.getline(Email,80);
	cin.get();
	cout<<"\n Enter your 16-digit Credit/Debit card number (xxxx xxxx xxxx xxxx) : ";
	cin.getline(crd_no,20);
	cin.get();
	cout<<"\n Enter your 3-digit CVV number : ";
	cin>>CW_no;
	cout<<"\n Verify By Entering Your Captcha is ( ";
	sta_rt:
	capt=random(5000);
	cout<<capt<<" ) : ";
	cin>>n1;
	if(capt==n1)
	{	cout<<"\n Processing...........";
		cout<<"\n Your Transaction has been successfully completed..... :) ";
		c5=random(9999999);
		cout<<"\n Your Transaction-ID is : "<<c5;
	}
	else
	{ 	cout<<"\n Wrong Input...... Verify Again ( ";
		goto sta_rt;
	}
}
int main()
{
	clrscr();
	mobile m;
	dish d;
	int a1,b2,c3,d4,e5;
	char ch5;
	fstream f("Log.dat",ios::binary|ios::in|ios::out|ios::app);
	system("cls");
	top:
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                               WELCOME TO AIRTEL                                \n";
	cout<<"\n                               ONLINE MANGAGMENT                                \n";
	cout<<"\n ****************************************************************************** \n";
	cout<<"\n                          ENTER INTO A VIRTUAL WORLD                            \n";
	cout<<"\n               1.) Mobile                            2.) Dish-TV                \n";
	cin>>a1;
	clrscr();
	if(a1==1)
	{
		cout<<"\n   1.) Home      2.) Contact      3.) Recharge    \n";
		cout<<"\n   4.)Balance    3.)Complaint	   6.)Exit         \n";
		cin>>b2;
		clrscr();
		switch(b2)
		{
			case 1: goto top;
				break;
			case 2: m.contact();
				break;
			case 3: m.recharge();
				break;
			case 4: m.balance();
				break;
			case 5: m.complaint();
				break;
			case 6:	exit(0);
				break;
		}
	}
	else if(a1==2)
	{
		cout<<"\n   1.) Home      2.) Contact      3.) Recharge     \n";
		cout<<"\n   4.)Balance    3.)Complaint	   6.)Exit          \n";
		cin>>b2;
		switch(b2)
		{
			case 1: goto top;
				break;
			case 2: d.dish_contact();
				break;
			case 3: d.dish_recharge();
				break;
			case 4: d.dish_balance();
				break;
			case 5: d.dish_complaint();
				break;
			case 6: exit(0);
				break;
		}
	}
	else
		cout<<"\n Wrong Input....................\n";
	mobj.getinfo();
	f.write((char*)&mobj,sizeof(mobj));
	cout<<"\n\t Do you want to view your LOG details (Y/N)....? \n\t";
	cin>>ch5;
	if(ch5=='y'||ch5=='Y')
	{	f.read((char*)&mobj,sizeof(mobj));
		mobj.showinfo();
	}
	f.close();
	return 0;
	getch();
}




