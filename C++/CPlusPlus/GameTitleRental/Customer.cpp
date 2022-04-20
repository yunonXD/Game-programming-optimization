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
	std::wstring result = getName() + L" 고객님의 대여 기록\n";
	for (auto& each : rentals_)
	{
		// 비디오 정보 대여료 출력
		result += L"\t" + each.getGameTitle().getTitle() + L"\t" +
			std::to_wstring(each.getCharge()) + L"\n";
	}

	// putter 행 추가
	result += (L"누적 대여료: " + std::to_wstring(getTotalCharge()) + L"\n");
	result += (L"적립 포인트: " + std::to_wstring(getTotalFrequentRenterPoints()) + L"\n");
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
	int frequentRenterPoints = 0; // frequent: 빈번한

	for (auto& each : rentals_)
	{
		// 적립 포인트를 1 포인트 증가
		frequentRenterPoints += each.getFrequentRenterPoints();
	}
	return frequentRenterPoints;
}