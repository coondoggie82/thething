/*
 * CommandCreator.h
 *
 *  Created on: Apr 27, 2015
 *      Author: williamcoon
 */

#ifndef COMMANDS_COMMANDCREATOR_H_
#define COMMANDS_COMMANDCREATOR_H_

#include "Arduino.h"
#include "Parameters.h"
#include "CommandCenter.h"
#include "StringHashTable.h"
#include "PrintCommand.h"
#include "MoveFinger.h"
#include "MoveHand.h"
#include "Drive.h"
#include "Victor.h"
#include "BackAndForth.h"
#include "FindHome.h"
#include "WiggleFingers.h"
#include "EjectBlock.h"
#include "Poof.h"

class CommandCreator {
public:
	CommandCreator();
	virtual ~CommandCreator();
	bool createCommand(String command);
private:
	static CommandCenter *commandCenter;
	StringHashTable commandHash;
	Parameters *parseParameters(String);
	static bool printSomething(Parameters *params);
	static bool moveFinger(Parameters *params);
	static bool moveFingerWithSpeed(Parameters *params);
	static bool moveHand(Parameters *params);
	static bool drive(Parameters *params);
	static bool pointerFinger(Parameters *params);
	static bool reverse(Parameters *params);
	static bool crawlForward(Parameters *params);
	static bool middleFinger(Parameters *params);
	static bool peaceSign(Parameters *params);
	static bool turnLeft(Parameters *params);
	static bool turnRight(Parameters *params);
	static bool metalSign(Parameters *params);
	static bool highFive(Parameters *params);
	static bool calibrateVictor(Parameters *params);
	static bool backAndForth(Parameters *params);
	static bool findHome(Parameters *params);
	static bool wiggleFingers(Parameters *params);
	static bool testParallel(Parameters *params);
	static bool smallPoof(Parameters *params);
	static bool stopAll(Parameters *params);
	static bool ejectBlock(Parameters *params);
	static bool pointAndMove(Parameters *params);
	static bool resetFingers(Parameters *params);
	static bool driveForward(Parameters *params);
	static bool driveForwardThirty(Parameters *params);


};

#endif /* COMMANDS_COMMANDCREATOR_H_ */
