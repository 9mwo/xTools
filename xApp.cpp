#include "xApp.h"
#include <memory>

wxIMPLEMENT_APP(cApp);

bool cApp::OnInit()
{
    m_frame1 = std::make_unique<cWeaponsToolkit>();
    m_frame1->Show();
    return true;
}