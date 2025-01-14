#include <cheat-base/cheat/Feature.h>
#include <cheat-base/config/config.h>

namespace cheat::feature
{

	class OpenTeamImmediately : public Feature
	{
	public:
		config::Field<config::Toggle<Hotkey>> f_Enabled;

		static OpenTeamImmediately& GetInstance();

		const FeatureGUIInfo& GetGUIInfo() const override;
		void DrawMain() override;

		virtual bool NeedStatusDraw() const override;
		void DrawStatus() override;

	private:
		OpenTeamImmediately();
	};
}

