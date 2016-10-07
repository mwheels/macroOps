/*
Copyright 2013 Miguel Rodas

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

/*
 * MacroOps.h
 *
 *  Useful Macros
 *  Author: Miguel Rodas
 */


#ifndef MACROOPS_H_
#define MACROOPS_H_


//Byte playing
#define HIGH_2BYTES(x)		( (uint16_t) ( (x) >> 16 ) )
#define LOW_2BYTES(x)		( (uint16_t) ( (x) & 0xFFFF ) )
#define MERGE_2BYTES(H,L)	( (uint32_t) ( ( (uint32_t)(H) << 16 ) | (L) ) )

#define HIGH_BYTE(x)		( (uint8_t) ( (x) >> 8 ) )
#define LOW_BYTE(x)			( (uint8_t) ( (x) & 0x00FF ) )
#define MERGE_BYTES(H,L)	( (uint16_t) ( ( (H) << 8) | (L) ) )

#define HIGH_NIBBLE(x)		( (uint8_t) ( (x) >> 4 ) )
#define LOW_NIBBLE(x)		( (uint8_t) ( (x) & 0x0F ) )
#define MERGE_NIBBLES(H,L)	( (uint8_t) ( ( (H) << 4 ) | ( 0x0F & (L) ) ) )


//Bit playing
#define SET_BIT(x, p)		( (x) | ( 1 << (p) ) )
#define CLEAR_BIT(x, p)		( (x) & ( ~( 1 << (p) ) ) )
#define GET_BIT(x, p)		( ( (x) >> (p) ) & 1)
#define TOGGLE_BIT(x,p)		( (x) ^ ( 1 << (p) ) )


//String playing
#define MERGE_STR(a,b)		(a)##(b)
#define STR_EXPAND(s)       #s
#define STR(s)              STR_EXPAND(s)


//Math
#define MAX(x, y)			( ( (x) > (y) ) ? (x) : (y) )
#define MIN(x, y)			( ( (x) < (y) ) ? (x) : (y) )
#define PI					3.14159265
#define RAD2DEG(x)			( (x) / PI * 180 )
#define DEG2RAD(x)			( (x) * PI / 180 )


#endif /* MACROOPS_H_ */
