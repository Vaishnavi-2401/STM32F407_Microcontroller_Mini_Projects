/*
 * led.c
 *
 *  Created on: May 27, 2025
 *      Author: Vaishnavi Chirmade
 */

#include "led.h"

void led_init(uint32_t pin)
{
  // Enable clock for GPIO port used for LED
  RCC -> AHB1ENR |= BV(GPIO_LED_AHBENR);

  // Configure GPIO pin as output mode
  GPIO_LED -> MODER &= ~(BV((pin << 1) + 1));	// Clear mode
  GPIO_LED -> MODER |= (BV(pin << 1));			// Set mode

  // Set output type as push-pull
  GPIO_LED -> OTYPER &= ~BV(13);

  // Configure the output speed for the pin as low speed
  GPIO_LED -> OSPEEDR &= ~(BV((pin << 1) + 1) | (BV(pin << 1)));

  // Configure no pull-up/pull-down resistor for the pin
  GPIO_LED -> PUPDR &= ~(BV((pin << 1) + 1) | (BV(pin << 1)));
}

void led_on(uint32_t pin)
{
	// Set the GPIO pin to high level (turn ON LED)
	GPIO_LED -> ODR |= BV(pin);
}

void led_off(uint32_t pin)
{
	// Set the GPIO pin to low level (turn OFF LED)
	GPIO_LED -> ODR &= ~BV(pin);
}

void ledblink(uint32_t pin, uint32_t delay)
{
	// Turn ON the LED
	led_on(pin);

	// Wait for given delay in milliseconds
	DelayMs(delay);

	// Turn OFF the LED
	led_off(pin);
}
