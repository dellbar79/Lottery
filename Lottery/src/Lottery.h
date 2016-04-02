/*
 * Lottery.h
 *
 *  Created on: 02.04.2016
 *      Author: Andreas
 */

#ifndef LOTTERY_H_
#define LOTTERY_H_
#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>
using namespace std;
namespace lotto {

class Lottery {
protected:
	int ticketSize, maxNum;
	int* generateNumbers();
public:
	Lottery(int, int);
	virtual ~Lottery();
	virtual string printTicket();
};

} /* namespace lotto */

#endif /* LOTTERY_H_ */
