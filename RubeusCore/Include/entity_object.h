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
		virtual ~REntity();
=======
		~REntity();
>>>>>>> Add entity class

	protected:
	};
}
