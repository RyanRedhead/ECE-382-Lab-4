#include <msp430g2553.h>

extern void init();
extern void initNokia();
extern void clearDisplay();
extern void drawBlock(unsigned char row, unsigned char col);

#define		TRUE			1
#define		FALSE			0
//#define		UP_BUTTON		(P2IN & BIT5)
#include <msp430g2553.h>

extern void init();
extern void initNokia();
extern void clearDisplay();
extern void drawBlock(unsigned char row, unsigned char col);

#define		TRUE			1
#define		FALSE			0
//#define		UP_BUTTON		(P2IN & BIT5)
//#define		DOWN_BUTTON		(P2IN & BIT4)
//#define		AUX_BUTTON		(P2IN & BIT3)
//#define		LEFT_BUTTON		(P2IN & BIT2)
//#define		RIGHT_BUTTON	(P2IN & BIT1)

void main() {

	unsigned char	x, y, i, j;
	signed int	xvel, yvel;

	// === Initialize system ================================================
	IFG1=0; /* clear interrupt flag1 */
	WDTCTL=WDTPW+WDTHOLD; /* stop WD */
//	button_press = FALSE;


	init();
	initNokia();
	clearDisplay();
	x=4;		y=4;
	xvel=1;		yvel=1;
	drawBlock(y,x);

	while(1) {

		if(x<=0)
			xvel=-xvel;
		if (x>=10)
			xvel=-xvel;
		if(y<=0)
			yvel=-yvel;
		if (y>=10)
			yvel=-yvel;

		if (xvel>=0)
			x=x+1;
		else if (xvel<=0)
			x=x-1;
		if (yvel>=0)
			y=y+1;
		else if (yvel<=0)
			y=y-1;

		clearDisplay();
		drawBlock(y,x);

		for(i=0;i>=20000;i++)
		{
			for(j=0;j>=100;j++)
			{}
		}

		}
	}

