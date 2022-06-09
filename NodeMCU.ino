//Get these define from Blynk IoT site for a platform to control things.
#define BLYNK_TEMPLATE_ID "TMPLjRl8y-I-"
#define BLYNK_DEVICE_NAME "Home Automation"
#define BLYNK_AUTH_TOKEN "SXlrtlIGoI1t-FzBsFCglxg6IO7HzqK1"
//define the blynk serial
#define BLYNK_PRINT Serial

//add ESP8266 and Blynk Library
#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

//Add the authentication, SSID and password
char auth[] = BLYNK_AUTH_TOKEN; //use blynk tocken from line 3
char ssid[] = "Neej"; //add ssid of wifi of house
char password[] = "1234567890"; //add password of the above Wifi

//Setup the things in blynk site and add this logic for operation
BLYNK_WRITE(V0)
{
//  if we click V0 in blynk then this code run
  int value = param.asInt();
  Serial.println(value);
  if(value == 1){
    digitalWrite(13, HIGH);
    Serial.println("Assest on");  
  }
  else{
    digitalWrite(13, LOW);
    Serial.println("Assest off");  
  }
}
BLYNK_WRITE(V1)
{
  //  if we click V1 in blynk then this code run
  int value = param.asInt();
  Serial.println(value);
  if(value == 1){
    digitalWrite(14, HIGH);
    Serial.println("Assest on");  
  }
   else{
    digitalWrite(14, LOW);
    Serial.println("Assest off");  
  }
}
BLYNK_WRITE(V2)
{
  //  if we click V2 in blynk then this code run
  int value = param.asInt();
  Serial.println(value);
  if(value == 1){
    digitalWrite(15, HIGH);
    Serial.println("Assest on");  
  }
   else{
    digitalWrite(15, LOW);
    Serial.println("Assest off");  
  }
}
BLYNK_WRITE(V3)
{
  //  if we click V3 in blynk then this code run
  int value = param.asInt();
  Serial.println(value);
  if(value == 1){
    digitalWrite(16, HIGH);
    Serial.println("Assest on");  
  }
   else{
    digitalWrite(16, LOW);
    Serial.println("Assest off");  
  }
}

void setup()
{
  Serial.begin(115200);
//Activate blynk and nodeMCU
  Blynk.begin(auth, ssid, password);
//  Set the pin mode
  pinMode(13, INPUT);
  pinMode(14, INPUT);
  pinMode(15, INPUT);
  pinMode(13, INPUT);
}

void loop()
{
//  Run the blynk
  Blynk.run();
}
