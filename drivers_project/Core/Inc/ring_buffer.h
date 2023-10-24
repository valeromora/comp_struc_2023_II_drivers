/*
 * ring_buffer.h
 *
 *  Created on: Oct 23, 2023
 *      Author: valer
 */

#ifndef INC_RING_BUFFER_H_
#define INC_RING_BUFFER_H_

#include <stdint.h>

typedef struct {
	uint8_t *buffer;	//the * means is a pointer, to memory location
	uint16_t head;		//to write new data
	uint16_t tail;		//to read old data

	uint16_t capacity;
	uint8_t is_full;

} ring_buffer_t; 		// the "_t" refers to type

void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t *buffer, uint16_t capacity);

#endif /* INC_RING_BUFFER_H_ */
