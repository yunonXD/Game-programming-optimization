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

	std::string result = getName() + " ������ �뿩 ���\n";
	for (auto& each : rentals_)
	{

		//���� ���� �뿩�� ���
		result += "\t" + each.getGameTitle().getTitle() + "\t" +
			std::to_string(each.getCharge()) + "\n";

	}

	// putter �� �߰�
	result += ("���� �뿩��: " + std::to_string(getTotalCharge()) + "\n");
	result += ("���� ����Ʈ: " + std::to_string(getTotalfrequentRenterPoints()) + "\n");
	return result;
}


std::string Customer::htmlStatement()
{
	std::string result = "<H1><EM>" + getName() + " ������ �뿩 ���</EM></H1><P>\n";
	for (auto& rental : rentals_)
	{
		// ���� ���� �뿩�� ���
		result += rental.getGameTitle().getTitle() + ": " +
			std::to_string(rental.getCharge()) + "<BR>\n";
	}

	// putter �� �߰�
	result += ("<P>���� �뿩��: <EM>" + std::to_string(getTotalCharge()) + "</EM><P>\n");
	result += ("���� ����Ʈ: <EM>" + std::to_string(getTotalfrequentRenterPoints()) + "</EM><P>");
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
		//���� ����Ʈ�� 1 ����Ʈ ����
		frequentRenterPoints += each.getFrequentRenterPoints();
	}
	return frequentRenterPoints;

}
