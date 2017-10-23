/**
button.h
Header file for the button class

CSCI 437
@author Stephen Tung
*/
#pragma once
#include <SFML/Graphics.hpp>

using namespace sf;

class Button : public sf::Drawable
{
private:
	Color normalText;
	Color normalBackground;
	Color hoverText;
	Color hoverBackground;
	Color clickText;
	Color clickBackground;
	Color border;
	float borderThickness;
	float borderRadius;
	Vector2f position;
	Vector2f size;
	Uint32 state;
	RectangleShape buttonShape;
	Font font;
	unsigned int fontSize;
	std::string buttonID;
	Text text;
	
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;

public:
	Button(std::string str, std::string id, Font& bFont, Vector2f location);
	void setTextColorNormal(Color nButtonText);
	void setTextColorHover(Color hButtonText);
	void setTextColorClick(Color cButtonText);
	void setColorNormal(Color nbg);
	void setColorHover(Color hbg);
	void setColorClick(Color cbg);
	void setColorBorder(Color borderColor);
	void setBorderThickness(float thickness);
	void setBorderRadius(float radius);
	void setPosition(Vector2f pos);
	void setID(std::string str);
	void setSize(unsigned int size);
	void setText(std::string str);
	void setFont(Font& bFont);

	Vector2f getPosition();
	Vector2f getDimensions();
	Uint32 getState();
	void update(Event& e, RenderWindow window);
};