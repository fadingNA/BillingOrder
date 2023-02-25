//
// Created by Nonthachai Plodthong on 24/2/2023 AD.
//

#ifndef UNTITLED4_USER_H
#define UNTITLED4_USER_H
#include "Billing.h"

namespace BillingOrder{
	struct User{
		string userName{};
		int userID{};
		void validUserName(){
			if (userName.empty()){
				throw "errors";
			}
		}
	};
	class UserSystem{
		User *userManager{};
	};
}
#endif //UNTITLED4_USER_H
