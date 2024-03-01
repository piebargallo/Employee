/* Modify the AirlineTicket class from ... to include an optional frequent-flyer number. What is the best way
tp represent this optional data member? add a setter and a getter to set ans retrieve the frequent-flyer number.
Modify the main() function to test your implementation. */

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
	myTicket.setFrequentFlyerNumber(123'456);
	const double cost{ myTicket.calculatePriceInDollars() };
	cout << format("This ticket will cost ${}", cost) << endl;

	const auto frequentFlyerNumber{ myTicket.getFrequentFlyerNumber() };
	if (frequentFlyerNumber) {
		cout << format("Frequent flyer number: {}", frequentFlyerNumber.value()) << endl;
	}
	else {
		cout << "No frequent flyer number." << endl;
	}
}
