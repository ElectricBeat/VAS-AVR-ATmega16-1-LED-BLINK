/*
 * LED BLINK.c
 *
 * Created: 24-04-2024 15:27:59
 * Author : SRIDHAR
 */ 
 
#define F_CPU 1000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB	=	0XFF;
	DDRC	=	0XFF;
	DDRD	=	0XFF;
	DDRA	=	0XFF;
	
	PORTB	=	0X00;
	PORTC	=	0X00;
	PORTD	=	0X00;
	PORTA	=	0X00;

	while (1)
	{
		/*****************************************/
		for (int i = 0;i < 8;i++)
		{
			PINC	=	PINC | (1<<i);
			_delay_ms(500);
			PINC	=	PINC & (1<<i);
		}
		for (int i = 0;i < 8;i++)
		{
			PIND	=	PIND | (1<<i);
			_delay_ms(500);
			PIND	=	PIND & (1<<i);
		}
		for (int i = 0;i < 8;i++)
		{
			PINB	=	PINB | (1<<i);
			_delay_ms(500);
			PINB	=	PINB & (1<<i);
		}
		for (int i = 0;i < 8;i++)
		{
			PINA	=	PINA | (1<<i);
			_delay_ms(500);
			PINA	=	PINA & (1<<i);
		}
		/*****************************************/
		for (int i = 7;i >= 0;i--)
		{
			PORTA	=	PORTA | (1<<i);
			_delay_ms(500);
			PORTA	=	PORTA & ~(1<<i);
		}
		for (int i = 7;i >= 0;i--)
		{
			PORTB	=	PORTB | (1<<i);
			_delay_ms(500);
			PORTB	=	PORTB & ~(1<<i);
		}
		for (int i = 7;i >= 0;i--)
		{
			PORTD	=	PORTD | (1<<i);
			_delay_ms(500);
			PORTD	=	PORTD & ~(1<<i);
		}
		for (int i = 7;i >= 0;i--)
		{
			PORTC	=	PORTC | (1<<i);
			_delay_ms(500);
			PORTC	=	PORTC & ~(1<<i);
		}
		/*****************************************/
	}
}

