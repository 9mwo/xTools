#pragma once

#include <wx/wx.h>
#include <memory>
#include "xTools.h"

class cApp : public wxApp
{
public:
    bool OnInit() override;

private:
    std::unique_ptr<cWeaponsToolkit> m_frame1;
};