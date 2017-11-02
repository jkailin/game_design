/**
button.cpp
Class file for the button class
CSCI 437
@author Stephen Tung
*/
#pragma once
#include "Panel.h"
#include <cstdlib>

using namespace sf;

Panel::Panel()
{

}

Panel::Panel(Vector2f pos)
{
  panelPosition = pos;
  panelShape.setOrigin(float(panelShape.getGlobalBounds().width / 2), float(panelShape.getGlobalBounds().height / 2));

}

void Panel::addButton(std::string str, std::string id, Color usColor, Color selColor, Color txtColor, Font& bFont, Vector2f pos)
{
	ui::Button(str, id, usColor, selColor, txtColor, bFont, pos);
	
}

void Panel::removeButton(std::string bID)
{

}

void Panel::draw(RenderTarget& target, RenderStates states) const
{
	target.draw(panelShape, states);

}
