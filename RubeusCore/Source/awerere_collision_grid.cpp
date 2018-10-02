#include <awerere_collision_grid.h>

namespace Rubeus
{
	namespace Awerere
	{
		CollisionGrid::CollisionGrid(const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth)
			:
			m_GridHeight(gridHeight),
			m_GridWidth(gridWidth),
			m_CellHeight(cellHeight),
			m_CellWidth(cellWidth),
			m_XCount(gridWidth / m_CellWidth),
			m_YCount(gridHeight / m_CellHeight)
		{
		}

		CollisionGrid::~CollisionGrid()
		{
		}
	}
}
