#pragma once
#include "Graphics.h"
#include "Game.h"
#include "Keyboard.h"

class Dude
{
public:
	void ClampTOScreen();
	void DrawDude(Graphics& gfx);
	void Update(const Keyboard& kbd);
	int Getx() const;
	int GetY() const;
	int GetWidth() const;
	int GetHieght() const;
private:
	int x = 400;
	int y = 300;
	static constexpr int speed = 1;
	static constexpr int dudeWidth = 20;
	static constexpr int dudehieght = 20;
};
