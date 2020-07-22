#pragma once
#include "Dude.h"
#include "Graphics.h"

class Poo
{
public:
	Poo(float Lx, float Ly, float LvelX, float LVely);
	void Update();
	void ProcessConsumption(const Dude& dude);
	void Draw(Graphics& gfx) const;
	bool IsEaten();
private:
	float x;
	float y;
	float velx;
	float velY;
	static constexpr int width = 24;
	static constexpr int hieght = 24;
	bool pooiseaten = false;
};

