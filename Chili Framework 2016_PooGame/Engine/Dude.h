#pragma once
#include "Graphics.h"
#include "Keyboard.h"

class Dude
{
public:
	void ClampTOScreen();
	void DrawDude(Graphics& gfx);
	void Update(const Keyboard& kbd);
	float Getx() const;
	float GetY() const;
	float GetWidth() const;
	float GetHieght() const;
private:
	float x = 400;
	float y = 300;
	static constexpr float speed = 4;
	static constexpr float dudeWidth = 20;
	static constexpr float dudehieght = 20;
};
