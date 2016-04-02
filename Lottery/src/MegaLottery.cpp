/*
 * MegaLottery.cpp
 *
 *  Created on: 02.04.2016
 *      Author: Andreas
 */

#include "MegaLottery.h"

using namespace std;

namespace lotto {

MegaLottery::MegaLottery(int ticketSize, int maxNum, int maxMegaNum) :
		Lottery(ticketSize, maxNum) {
	this->maxMegaNum = maxMegaNum;
}

MegaLottery::~MegaLottery() {
}

string MegaLottery::printTicket() {
	ostringstream tick;
	tick << Lottery::printTicket() << " Mega: ";
	int mega = 1 + rand() % this->maxMegaNum;
	tick << mega;
	return tick.str();
}

} /* namespace lotto */
