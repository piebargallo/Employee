/* Now that you know about const and references, and what they are used for, modify yhe AirlineTicket
class from earlier in this chapter to use references wherever possible and to be so-called const correct. */

#include <iostream>
#include <format>
import airline_ticket;

using std::cout;
using std::format;
using std::endl;

int main()
{
	AirlineTicket myTicket;  // Stack-based AirlineTicket
	myTicket.setPassengerName("Sherman T. Socketwrench");
	myTicket.setNumberOfMiles(700);
	const double cost{ myTicket.calculatePriceInDollars() };
	cout << format("This ticket will cost ${}", cost) << endl;
}

