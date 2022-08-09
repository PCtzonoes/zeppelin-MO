#include "Collision.hpp"

std::vector<ColliderComponent *> Collision::Colliders;

bool Collision::CheckRectangleCollision(const SDL_Rect &rectA, const SDL_Rect &rectB) {
	return (rectA.x + rectA.w >= rectB.x &&
	        rectB.x + rectB.w >= rectA.x &&
	        rectA.y + rectA.h >= rectB.y &&
	        rectB.y + rectB.h >= rectA.y);
}
