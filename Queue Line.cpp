// Queue Line.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "clsQueueLine.h"

int main()
{
    clsQueueLine line1("A0", 10);
    clsQueueLine line2("B0", 5);

    line1.IssueTicket();
    line1.IssueTicket();
    line1.IssueTicket();
    line1.IssueTicket();
    line1.IssueTicket();

    line2.IssueTicket();
    line2.IssueTicket();
    line2.IssueTicket();
    line2.IssueTicket();
    line2.IssueTicket();

    line1.PrintInfo();
    line1.PrintAllTickets();
    line1.PrintTicketsLineLTR();
    line1.PrintTicketsLineRTL();

    line2.PrintInfo();
    line2.PrintAllTickets();
    line2.PrintTicketsLineLTR();
    line2.PrintTicketsLineRTL();
    

    cout << "\n\n#########################################################################\n\n";

    line1.ServeNextClient();
    line1.ServeNextClient();

    line2.ServeNextClient();
    line2.ServeNextClient();


    line1.PrintInfo();
    line1.PrintAllTickets();
    line1.PrintTicketsLineLTR();
    line1.PrintTicketsLineRTL();

    line2.PrintInfo();
    line2.PrintAllTickets();
    line2.PrintTicketsLineLTR();
    line2.PrintTicketsLineRTL();


}


