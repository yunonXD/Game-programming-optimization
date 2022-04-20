#include "Customer.h"
#include "GameTitle.h"

Customer::Customer(const std::wstring& name) : name_(name)
{

}

void Customer::addRental(const Rental& rental)
{
	rentals_.push_back(rental);
}

std::wstring Customer::statement()
{
	std::wstring result = getName() + L" ������ �뿩 ���\n";
	for (auto& each : rentals_)
	{
		// ���� ���� �뿩�� ���
		result += L"\t" + each.getGameTitle().getTitle() + L"\t" +
			std::to_wstring(each.getCharge()) + L"\n";
	}

	// putter �� �߰�
	result += (L"���� �뿩��: " + std::to_wstring(getTotalCharge()) + L"\n");
	result += (L"���� ����Ʈ: " + std::to_wstring(getTotalFrequentRenterPoints()) + L"\n");
	return result;
}

double Customer::getTotalCharge() const
{
	double totalAmount = 0;
	for (auto& each : rentals_)
	{
		totalAmount += each.getCharge();
	}
	return totalAmount;
}

int Customer::getTotalFrequentRenterPoints() const
{
	int frequentRenterPoints = 0; // frequent: �����

	for (auto& each : rentals_)
	{
		// ���� ����Ʈ�� 1 ����Ʈ ����
		frequentRenterPoints += each.getFrequentRenterPoints();
	}
	return frequentRenterPoints;
}