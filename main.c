#include <stdio.h>
#include <stdlib.h>
#include <wiringPi.h>
#include <pthread.h>
#include <stdbool.h>
#include <time.h>

#define angle 120       // angle d'ouverture de la poubelle
#define distance 30     // distance de 30mm pour déclencher l'ouverture de la poubelle
#define pin_servo 11    // broche 11 utilisée sur la RPI pour contrôler le servomoteur
#define pin_servo 13    // broche 13 utilisée sur la RPI pour contrôler le servomoteur

pthread detection, opening;

// Fonction pour initialiser la bibliothèque WiringPi
void initializeWiringPi()
{
    wiringPiSetupGpio(); // Initialisation de la bibliothèque WiringPi
    pinMode(pin_servo, PWM_OUTPUT); // Configuration de la broche GPIO en sortie PWM
}

void ouverture() {

}