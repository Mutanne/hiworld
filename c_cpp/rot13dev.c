/***********************************************************************
* Project           : Study
*
* Program name      : rot13.c
*
* Author            : Mutanne SD
*
* Date created      : 20200424
*
* Purpose           : Decrypt/encrypt with the old and insecure rot13.
*
* Revision History  :
*
* Date        Author      Ref    Revision 20200425 
* 20200425  Mutanne SD     1     Added this header description.
************************************************************************
*
* More details:
* ROT13 ("rotate by 13 places", sometimes hyphenated ROT-13) 
* is a simple letter substitution cipher that replaces a letter 
* with the 13th letter after it, in the alphabet. 
* ROT13 is a special case of the Caesar cipher 
* which was developed in ancient Rome.
*
* Because there are 26 letters (2×13) in the basic Latin alphabet, 
* ROT13 is its own inverse; that is, to undo ROT13, 
* the same algorithm is applied, so the same action can be used 
* for encoding and decoding. The algorithm provides virtually 
* no cryptographic security, and is often cited as a 
* canonical example of weak encryption.
* Font: Wikipedia.
* 
* a b c d e f g h i j k l m
*   ↑↓    ↑↓    ↑↓     ↑↓
* n o p q r s t u v w x y z
*
* Example:
* HELLO
*  ↑ ↓
* URYYB
|**********************************************************************/


/* ========================== include files =========================== */
#include<stdio.h>
#include<ctype.h>


/* ============================ constants ============================= */
#define limit 1001


/* ======================= function prototypes ======================== */
void rot13(char text[limit]);


/* @prog __rot13 **************************************************************
**  
** __decrypt/encrypt with rot13
**
******************************************************************************/

int main() {
    char msg[limit];
    
    printf("digite a mensagem:\n");
    fgets(msg,limit,stdin);
    printf("\nDigitado: %s",msg);
    rot13(msg);
    printf("Saida:    %s\n", msg);
    
    return 0;
}

/* ============================ functions ============================= */
void rot13(char text[limit]){                                                           //---encrypt and decrypt function---
	int i=0;                      
    for(i;text[i]!='\0'; i++){                                                          //read the text char by char
        //             A                M                  a                m
        if((text[i]>=0x61 && text[i]<=0x6D) || (text[i]>=0x41 && text[i]<=0x4D)){    
            text[i]+=13;                                                                //rotate by 13
            text[i]=toupper(text[i]);                                                   //convert to upper case
        }
        //                  N                Z                  n                z
        else if((text[i]>=0x6E && text[i]<=0x7A) || (text[i]>=0x4E && text[i]<=0x5A)){
            text[i]-=13;                                                                //rotate by 13
            text[i]=toupper(text[i]);                                                   //convert to upper case
        }
        else{
            continue;                                                                   //continue to next iteraction case others chars
        }
    }
}
