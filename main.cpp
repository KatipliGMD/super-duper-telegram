#include <Geode/Geode.hpp>
#include <Geode/modify/CCLabelBMFont.hpp>

using namespace geode::prelude;

class $modify(MyFontHook, CCLabelBMFont) {
    static CCLabelBMFont* create(const char* str, const char* fntFile) {
        auto label = CCLabelBMFont::create(str, fntFile);
        if (!label) return nullptr;

        auto fontPath = Mod::get()->getSettingValue<std::filesystem::path>("font-path");
        if (!fontPath.empty() && std::filesystem::exists(fontPath)) {
            // We create a temporary TTF label to steal its look
            // We use a font size of 24 as a baseline for GD
            auto newLabel = CCLabelTTF::create(str, fontPath.string().c_str(), 24.0f);
            
            if (newLabel) {
                label->setTexture(newLabel->getTexture());
                label->setTextureRect(newLabel->getTextureRect());
                // This ensures the custom font isn't blurry on your A9's screen
                label->getTexture()->setAliasTexParameters(); 
            }
        }
        return label;
    }
};