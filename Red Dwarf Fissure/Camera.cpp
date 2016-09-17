#include "stdafx.h"
#include "Camera.h"

void Camera::update(int x, int y) {
	camera.x = static_cast<int>((x + playerScale) - (SCREEN_WIDTH / 2));
	camera.y = static_cast<int>((y + playerScale) - (SCREEN_HEIGHT / 2));
	
	constrain();
}

void Camera::constrain() {
	if (camera.x > LEVEL_WIDTH - camera.w)
		camera.x = LEVEL_WIDTH - camera.w;
	if (camera.y > LEVEL_HEIGHT - camera.h)
		camera.y = LEVEL_HEIGHT - camera.h;
	if (camera.x < 0) camera.x = 0;
	if (camera.y < 0) camera.y = 0;
}

Camera::~Camera() {
}
