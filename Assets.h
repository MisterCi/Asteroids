#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

class Assets
{
public:
	static Assets& Instance()
	{
		static Assets s;
		return s;
	}

	void load();
	sf::Image getShip();
	sf::Image getBullet();
	sf::Image getCatAsteroidSmall();
	sf::Image getCatAsteroidBig();
	sf::Font& getHyperspaceFont();
	sf::SoundBuffer& getSoundBufferFire();

private:
	Assets() {};
	~Assets() {};
	Assets(Assets const&) = delete;
	Assets& operator= (Assets const&) = delete;

private:
	sf::Image m_ship;
	sf::Image m_bullet;
	sf::Image m_catAsteroidSmall;
	sf::Image m_catAsteroidBig;
	sf::Font m_hyperSpaceFont;
	sf::SoundBuffer m_soundBufferFire;
};