/*
 * ring_buffer.c
 *
 *  Created on: Oct 23, 2023
 *      Author: valer
 */

#include "ring_buffer.h"

void ring_buffer_init(ring_buffer_t *ring_buffer, uint8_t *buffer, uint16_t capacity)
{
	ring_buffer->buffer = buffer;
	ring_buffer->capacity = capacity;

	ring_buffer->head = 0;
	ring_buffer->tail = 0;
	ring_buffer->is_full = 0;
}

uint8_t ring_buffer_put(ring_buffer_t *ring_buffer,uint8_t data)
{
	ring_buffer->buffer[ring_buffer->head] = data;
	ring_buffer->head = (ring_buffer->head +1 ) % ring_buffer->capacity;

	if (ring_buffer->is_full != 0){
		ring_buffer->tail = (ring_buffer->tail+1) % ring_buffer->capacity;
	}

	if (ring_buffer->head == ring_buffer->tail){
		ring_buffer->is_full = 1;
	}
}
