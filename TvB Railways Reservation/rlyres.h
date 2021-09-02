#ifndef RLYRES_H_INCLUDED
#define RLYRES_H_INCLUDED
struct Train
{
 char train_no[10];
 char from [10]; //from station
 char to[10];   // to station
 int fac_fare;  //fare first ac
 int sac_fare;   // fare second ac
};
struct Passenger
{
 char p_name[20];
 char gender;
 char train_no[10];
 char p_class;
 char address[40];
 int age;
 int ticketno;
 char mob_no[11]
 };
 typedef struct Train Train;
 typedef struct Passenger Passenger;

 int enterchoice();
 void add_trains();
 void view_trains();
 int book_ticket(Passenger);
 int* get_ticket_no(char*);
 void view_ticket(int);
 void view_all_bookings();
 void view_bookings(char*);
 int cancel_ticket(int);
 int cancel_train(char*);





#endif // RLYRES_H_INCLUDED
