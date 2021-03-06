#ifndef __SYSTEM_STATE_H__
#define __SYSTEM_STATE_H__

// led library
#include <Arduino.h>
#include <Time.h>
#include <TimeLib.h>
#include "Context.h"
#include "Datalogger.h"
#include "Sensors.h"
#include "Actuators.h"
#include "TimeEventsHandler.h"
#include "ButtonEventsHandler.h"
#include "DS1302RTC.h"
#include "Communication.h"

// #define SIMULATION

class SystemController {
	public:
		SystemController();
		void setup();
		void loop();
		void stateLedUpdate();
		void setDateTimeFromSerial();

	private:
		void setupTime();
		Context* context;
		Datalogger* datalogger;
		Sensors* sensors;
		Actuators* actuators;
		TimeEventsHandler* timeEventsHandler;
		ButtonEventsHandler* buttonEventsHandler;
		DS1302RTC rtc;
		Communication *comm;
};

#endif

