#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:
	void ClampTOScreen();
	void DrawDude(Graphics& gfx);
	void Update(const Keyboard& kbd, float dt);
	float Getx() const;
	float GetY() const;
	float GetWidth() const;
	float GetHieght() const;
private:
	float x = 400.0f;
	float y = 300.0f;
	static constexpr float speed = 120.0f;
	static constexpr float dudeWidth = 20.0f;
	static constexpr float dudehieght = 20.0f;
};
