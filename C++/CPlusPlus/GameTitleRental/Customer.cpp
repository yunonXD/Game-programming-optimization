#include "Customer.h"
#include "GameTitle.h"

Customer::Customer(const std::string& name) : name_(name)
{


}

void Customer::addRental(const Rental& rental)
{
	rentals_.push_back(rental);
}

std::string Customer::statement()
{

	std::string result = getName() + " 고객님의 대여 기록\n";
	for (auto& each : rentals_)
	{

		//비디오 정보 대여료 출력
		result += "\t" + each.getGameTitle().getTitle() + "\t" +
			std::to_string(each.getCharge()) + "\n";

	}

	// putter 행 추가
	result += ("누적 대여료: " + std::to_string(getTotalCharge()) + "\n");
	result += ("적립 포인트: " + std::to_string(getTotalfrequentRenterPoints()) + "\n");
	return result;
}


std::string Customer::htmlStatement()
{
	std::string result = "<H1><EM>" + getName() + " 고객님의 대여 기록</EM></H1><P>\n";
	for (auto& rental : rentals_)
	{
		// 비디오 정보 대여료 출력
		result += rental.getGameTitle().getTitle() + ": " +
			std::to_string(rental.getCharge()) + "<BR>\n";
	}

	// putter 행 추가
	result += ("<P>누적 대여료: <EM>" + std::to_string(getTotalCharge()) + "</EM><P>\n");
	result += ("적립 포인트: <EM>" + std::to_string(getTotalfrequentRenterPoints()) + "</EM><P>");
	return result;
}

double Customer::getTotalCharge() const {
	double totalAmount = 0;
	for (auto& each : rentals_) {
		totalAmount += each.getCharge();
	}
	return totalAmount;
}

int Customer::getTotalfrequentRenterPoints() const {

	int frequentRenterPoints = 0;

	for (auto& each : rentals_) {
		//적립 포인트를 1 포인트 증가
		frequentRenterPoints += each.getFrequentRenterPoints();
	}
	return frequentRenterPoints;

}
