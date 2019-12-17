#include "GameObject_Enemy.h"

void GameObject_Enemy_Init(
	GameObject_Enemy* self,
	unsigned life,
	uint16_t pos_x, uint16_t pos_y, 
	uint16_t collider,
	uint16_t width, uint16_t height,
	Color* img
){
	GameObject_Initialize(
		&self->base,
		pos_x, pos_y,
		collider,
		width, height,
		img
	);
	self->life = life;
}

void inline GameObject_Enemy_OnCreate(GameObject_Enemy* self)
{
	GameObject_OnCreate(&self->base);
}

void inline GameObject_Enemy_OnUpdate(GameObject_Enemy* self)
{
	GameObject_OnUpdate(&self->base);
}

void inline GameObject_Enemy_OnRender(GameObject_Enemy* self, Color** screen)
{
	GameObject_OnRender(&self->base, screen);
}

bool inline __GameObject_Enemy_Created(GameObject_Enemy* self)
{
	return __GameObject_Created(&self->base);
}

bool inline __GameObject_Enemy_ToDestroy(GameObject_Enemy* self)
{
	return __GameObject_ToDestroy(&self->base);
}

