// Server Interaction
#include <WiFi.h>
#include <HTTPClient.h>
#include <ArduinoJSON.h>
#include <SocketIoClient.h>

// Sensors
#include <DHT.h>		// Humidity / Temperature
#include <EmonLib.h> 	// AC Sensor 

// ********************
//        PINS 
// ********************

#define MQ135_PIN 34	      // air quality sensor
#define DHT_PIN 25		      // humidity and temperature sensor
#define DHT_TYPE DHT11
#define HC_SR501_PIN 13	    // movement sensor
#define VOLTIMETER_PIN 34   // voltage meter
#define ENERGY_METER_PIN 12 // amperage meter

// ********************
//        CONFIG
// ********************

// wifi
const char* NETWORK_SSID = "Redmi 9";
const char* NETWORK_PASSWORD = "woodpecker";

// server
const char* HOST_ADDRESS = "192.168.213.85";
const int HOST_PORT = 3000;
const char* HOST_DATA_ENDPOINT = "/data";
const unsigned long CHECK_WIFI_INTERVAL = 30000;


// ********************
//        GLOBALS
// ********************

StaticJsonDocument<200> data;

