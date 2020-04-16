#pragma once
#include "Dude.h"
#include "Graphics.h"

class Poo
{
public:
	Poo(int Lx, int Ly, int LvelX, int LVely);
	void Update();
	void ProcessConsumption(const Dude& dude);
	void Draw(Graphics& gfx) const;
	bool IsEaten();
private:
	int x;
	int y;
	int velx;
	int velY;
	static constexpr int width = 24;
	static constexpr int hieght = 24;
	bool pooiseaten = false;
};

