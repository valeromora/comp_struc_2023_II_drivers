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
