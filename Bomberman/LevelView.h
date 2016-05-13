#pragma once
#include <SFML\Graphics.hpp>
#include <vector>
#include "Level.h"


class LevelView : public sf::Drawable
{
public:
	LevelView();
	~LevelView();

	/// Setups tiles
	/// <param="level>ptr to previosuly loaded level with tile data</param>
	/// <param="textures">ptr to texture atlas</param>
	/// <param="tileSize">size of tile in px</param>
	void SetLevel(Level* level, sf::Texture* texture, const size_t& tileSize);
	
	virtual void draw(sf::RenderTarget & target, sf::RenderStates states) const override;

private:
	std::vector < std::vector<sf::Sprite> > m_data;
};
