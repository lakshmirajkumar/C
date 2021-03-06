#include <errno.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <mosquitto.h>

#define MQTT_HOSTNAME "anttgrid.com"
#define MQTT_PORT 1883
#define MQTT_USERNAME "Yant"
#define MQTT_PASSWORD "yolo1234"
//#define MQTT_TOPIC "antin/customers/yant/tickedID"
//#define MQTT_TOPIC "wifigrid/Routers/AP/mac"
#define MQTT_TOPIC "hello/1"
int main (int argc, char **argv)
  {
  struct mosquitto *mosq = NULL;

  // Initialize the Mosquitto library
  mosquitto_lib_init();

  // Create a new Mosquitto runtime instance with a random client ID,
  //  and no application-specific callback data.  
  mosq = mosquitto_new (NULL, true, NULL);
  if (!mosq)
    {
    fprintf (stderr, "Can't initialize Mosquitto library\n");
    exit (-1);
    }

  mosquitto_username_pw_set (mosq, MQTT_USERNAME, MQTT_PASSWORD);

  // Establish a connection to the MQTT server. Do not use a keep-alive ping
  int ret = mosquitto_connect (mosq, MQTT_HOSTNAME, MQTT_PORT, 0);
  if (ret)
    {
    fprintf (stderr, "Can't connect to Mosquitto server\n");
    exit (-1);
    }
  char text[50];
    strcpy (text, "{\"ID\":1,\"name\":\"raj\",\"number\":\"9491764629\"}");
    ret = mosquitto_publish (mosq, NULL, MQTT_TOPIC,
      strlen (text), text, 0, false);
    if (ret)
      {
      fprintf (stderr, "Can't publish to Mosquitto server\n");
      exit (-1);
      }

  // We need a short delay here, to prevent the Mosquitto library being
  //  torn down by the operating system before all the network operations
  //  are finished.
  sleep (1);

  // Tidy up
  mosquitto_disconnect (mosq);
  mosquitto_destroy (mosq);
  mosquitto_lib_cleanup();

  return 0;
  }
