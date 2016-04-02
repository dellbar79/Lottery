/*
 * MegaLottery.h
 *
 *  Created on: 02.04.2016
 *      Author: Andreas
 */

#ifndef MEGALOTTERY_H_
#define MEGALOTTERY_H_

#include "Lottery.h"

namespace lotto {

class MegaLottery: public lotto::Lottery {
protected:
	int maxMegaNum;
public:
	MegaLottery(int, int, int);
	virtual ~MegaLottery();
	string printTicket();
};

} /* namespace lotto */

#endif /* MEGALOTTERY_H_ */
