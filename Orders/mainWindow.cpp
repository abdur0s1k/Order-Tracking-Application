#include "mainWindow.h"
#include <Windows.h>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
int main(array<String^>^ argv) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    Orders::mainWindow^ f = gcnew Orders::mainWindow;
    Application::Run(f);
}
