
/* ==== ~ctype<> @ 00551167 ==== 
 * signature: undefined __fastcall ~ctype<>(undefined4 * param_1)
 * body: 00551167-00551186
 * note: Library Function - Multiple Matches With Same Base Name  protected: virtual __thiscall std::ctype<unsigned short>::~ctype<unsigned short>(void)  protected: virtual __thiscall std::ctype<wchar_t>::~ctype<wchar_t>(void)  Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    protected: virtual __thiscall std::ctype<unsigned short>::~ctype<unsigned short>(void)
    protected: virtual __thiscall std::ctype<wchar_t>::~ctype<wchar_t>(void)
   
   Libraries: Visual Studio 2003 Release, Visual Studio 2005 Release */

void __fastcall ~ctype<>(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_005792e4;
  if (param_1[5] != 0) {
    FUN_00559d4e((LPVOID)param_1[4]);
  }
  *param_1 = &PTR_FUN_00579044;
  return;
}


