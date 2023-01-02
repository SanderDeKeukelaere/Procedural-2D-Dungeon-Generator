#pragma once

//-----------------------------------------------------
// Include Files
//-----------------------------------------------------
#include "DataTypes.h"

//-----------------------------------------------------
// DungeonRoom Class									
//-----------------------------------------------------
class DungeonRoom final
{
public:
	DungeonRoom() = default;									// Constructors
	DungeonRoom(const Vector2 position, const Vector2 size, const Color color);
	~DungeonRoom()	= default;									// Destructor

	//-------------------------------------------------
	// Member functions						
	//-------------------------------------------------
	void Move(const Vector2& direction);

	void Draw(bool debugRender = false) const;
	bool IsOverlapping(const DungeonRoom& other) const;
	Vector2 GetPosition() const;
	Vector2 GetSize() const;

private:
	//-------------------------------------------------
	// Private member functions								
	//-------------------------------------------------


	//-------------------------------------------------
	// Datamembers								
	//-------------------------------------------------
	Vector2 m_Position{};
	Vector2 m_Size{};
	Color m_Color{};
};
