/**
 * @file		Include/awerere_collision_grid.h.
 *
 * @brief	Declares the collision grid used for broadphase resolution
 */

#pragma once

namespace Rubeus
{
	namespace Awerere
	{
		/**
		 * @struct	CollisionGrid
		 *
		 * @brief	Grid of cells arranged in a 2D matrix fashion
		 */
		struct CollisionGrid
		{
			/** @brief	Height of grid */
			const float m_GridHeight;

			/** @brief	Height of grid */
			const float m_GridWidth;

			/** @brief	Height of cell */
			const float m_CellHeight;

			/** @brief	Width of cell */
			const float m_CellWidth;

			/** @brief	Count of columns */
			const float m_XCount;

			/** @brief	Count of rows */
			const float m_YCount;

			/**
			 * @fn		CollisionGrid(const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth)
			 *
			 * @brief	Constructor
			 *
			 * @param	gridHeight	Height of grid.
			 * @param	gridWidth	Width of grid.
			 * @param	cellHeight	Height of cell.
			 * @param	cellWidth	Width of cell.
			 */
			CollisionGrid(const float & gridHeight, const float & gridWidth, const float & cellHeight, const float & cellWidth);

			/**
			 * @fn		~CollisionGrid()
			 *
			 * @brief	Destructor
			 */
			~CollisionGrid();
		};
	}
}
