#pragma once
#include "widget.h"
#include "config.h"
#include "button.h"
#include "browser.h"


class Backbutton : public Button
{

float pos_x = CANVAS_WIDTH / 2;
float pos_y = CANVAS_HEIGHT + 100;

public:
	Backbutton(const class Browser& mybrowser);
	void update()override;
	void draw()override;
	void init()override;
};
