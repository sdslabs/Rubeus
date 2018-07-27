#pragma once

namespace Rubeus
{
	class REntity
	{
	public:
		static int entityCount;
		int m_EntityID;

		virtual void tick();

		REntity();
<<<<<<< HEAD
<<<<<<< HEAD
		virtual ~REntity();
=======
		~REntity();
>>>>>>> Add entity class
=======
		virtual ~REntity();
>>>>>>> Shift texture and sprite ownership to game object

	protected:
	};
}
