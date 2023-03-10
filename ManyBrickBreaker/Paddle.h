#pragma once
#include "pch.h"
#include "Barrier.h"

class Paddle : public PhysicEngine
{
private:
	sf::RectangleShape shape;
	sf::CircleShape leftCir;
	sf::CircleShape rightCir;
	float velocity;
	float acceleration;
	float maxSpeed;

	//Private functions
	void initVariable();
	void initShape();
	void initPos(sf::RenderTarget *target);

public:
	//Constructors & Destructors
	Paddle(sf::RenderTarget *target);
	virtual ~Paddle();

	//Acceessors
	sf::CircleShape getLeft();
	sf::CircleShape getRight();
	sf::RectangleShape getShape();
	float getSpeed();

	//Functions
	void updateCollision(int flag);
	void updateMovement();
	
	void update(Barrier *barriers);
	void render(sf::RenderTarget *target);
};

