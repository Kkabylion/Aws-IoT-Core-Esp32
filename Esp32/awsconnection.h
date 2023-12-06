#include <pgmspace.h>
#define THINGNAME "ESP32_Board"
const char WIFI_SSID[] = "Wifi";               // Your wifiname
const char WIFI_PASSWORD[] = "password";           // Password for wifi
const char AWS_IOT_ENDPOINT[] = "r18l9gf8e3nkdzbsdg6m-ats.iot.eu-south-1.amazonaws.com";       //Check in AWS for this endpoint
 
// google "Amazon Root CA 1" and Copy n Paste the pem text inside the certificate
static const char AWS_CERT_CA[] PROGMEM = R"EOF(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----
)EOF";
 
// Device Certificate                                               //// You will get this when you create a thing in AWS, download Certificate and then open in NotePad++ Copy n Paste
static const char AWS_CERT_CRT[] PROGMEM = R"KEY(
-----BEGIN CERTIFICATE-----

-----END CERTIFICATE-----

 
 
)KEY";
 
// Device Private Key                                               // You will get this when you create a thing in AWS, download Certificate and then open in NotePad++ Copy n Paste
static const char AWS_CERT_PRIVATE[] PROGMEM = R"KEY(
-----BEGIN RSA PRIVATE KEY-----

-----END RSA PRIVATE KEY-----
 
 
)KEY";

