#ifndef OPENFILEDIALOG_H
#define OPENFILEDIALOG_H

#include <Windows.h>
#include <Commdlg.h>
#include <tchar.h>

class OpenFileDialog
{
public:
    OpenFileDialog();

    TCHAR*DefaultExtension;
    TCHAR*FileName;
    TCHAR*Filter;
    int FilterIndex;
    int Flags;
    TCHAR*InitialDir;
    HWND Owner;
    TCHAR*Title;

    bool ShowDialog();
};

#endif // OPENFILEDIALOG_H
