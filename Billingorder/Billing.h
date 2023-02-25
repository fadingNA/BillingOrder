//
// Created by Nonthachai Plodthong on 24/2/2023 AD.
//

#ifndef UNTITLED4_BILLING_H
#define UNTITLED4_BILLING_H
#include<iostream>
using namespace std;

namespace BillingOrder{
	class Shopping{
	private:
		int pCode{};
		float price{};
		float dis{};
		string pName{};

	public:
		void menu();
		void systemManagement();
		void buyingSystem();
		void addSystem();
		void editSystem();
		void removeItem();
		void listItem();
		void receipt();
		static void displayHeader() ;
	};
}

#endif //UNTITLED4_BILLING_H
