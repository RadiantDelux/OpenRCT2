/*****************************************************************************
 * Copyright (c) 2014-2026 OpenRCT2 developers
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#ifdef __SWITCH__

#include "UiContext.h"

#include <memory>
#include <SDL.h>
#include <openrct2/ui/UiContext.h>

namespace OpenRCT2::Ui
{
    class SwitchContext final : public IPlatformUiContext
    {
    public:
        void SetWindowIcon(SDL_Window*) override
        {
        }

        bool IsSteamOverlayAttached() override
        {
            return false;
        }

        void ShowMessageBox(SDL_Window*, const std::string&) override
        {
        }

        bool HasMenuSupport() override
        {
            return false;
        }

        int32_t ShowMenuDialog(const std::vector<std::string>&, const std::string&, const std::string&) override
        {
            return -1;
        }

        void OpenFolder(const std::string&) override
        {
        }

        void OpenURL(const std::string&) override
        {
        }

        std::string ShowFileDialog(SDL_Window*, const FileDialogDesc&) override
        {
            return {};
        }

        std::string ShowDirectoryDialog(SDL_Window*, const std::string&) override
        {
            return "/switch/openrct2/rct2/";
        }

        bool HasFilePicker() const override
        {
            return false;
        }
    };

    std::unique_ptr<IPlatformUiContext> CreatePlatformUiContext()
    {
        return std::make_unique<SwitchContext>();
    }
}

#endif // __SWITCH__
