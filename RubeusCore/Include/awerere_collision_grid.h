#pragma once

namespace Rubeus
{
	namespace Awerere
	{
		struct CollisionGrid
		{
			const float m_GridHeight;
			const float m_GridWidth;
			const float m_CellHeight;
			const float m_CellWidth;

			const float m_XCount;
			const float m_YCount;

			CollisionGrid(const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth);
			~CollisionGrid();
		};
	}
}
