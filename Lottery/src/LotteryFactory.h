/*
 * LotteryFactory.h
 *
 *  Created on: 02.04.2016
 *      Author: Andreas
 */

#ifndef LOTTERYFACTORY_H_
#define LOTTERYFACTORY_H_

#include "Lottery.h"

namespace lotto {

class LotteryFactory {
public:
	enum State { California, Florida };
	static LotteryFactory* getInstance();
	Lottery* getLottery(State);
private:
	LotteryFactory();
};

} /* namespace lotto */

#endif /* LOTTERYFACTORY_H_ */
