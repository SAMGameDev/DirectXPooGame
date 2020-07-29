#pragma once
#include "Dude.h"
#include "Graphics.h"

class Poo
{
public:
	Poo(float Lx, float Ly, float LvelX, float LVely);
	void Update(float dt);
	void ProcessConsumption(const Dude& dude);
	void Draw(Graphics& gfx) const;
	bool IsEaten();
private:
	float x;
	float y;
	float velx;
	float velY;
	static constexpr float width = 24.0f;
	static constexpr float hieght = 24.0f;
	bool pooiseaten = false;
};

