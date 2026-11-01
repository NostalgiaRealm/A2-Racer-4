
/* ==== Peek @ 00553364 ==== 
 * signature: undefined2 __fastcall Peek(undefined4 * param_1)
 * body: 00553364-0055338a
 * note: Library Function - Multiple Matches With Same Base Name  private: unsigned short __thiscall std::istreambuf_iterator<unsigned short,struct std::char_traits<unsigned short> >::_Peek(void)  private: wchar_t __thiscall std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t> >::_Peek(void)  Library: Visual Studio 2003 Release
 */

/* Library Function - Multiple Matches With Same Base Name
    private: unsigned short __thiscall std::istreambuf_iterator<unsigned short,struct
   std::char_traits<unsigned short> >::_Peek(void)
    private: wchar_t __thiscall std::istreambuf_iterator<wchar_t,struct std::char_traits<wchar_t>
   >::_Peek(void)
   
   Library: Visual Studio 2003 Release */

undefined2 __fastcall Peek(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    uVar1 = FUN_0055338b((int *)*param_1);
    if ((short)uVar1 != -1) {
      *(short *)((int)param_1 + 6) = (short)uVar1;
      goto LAB_00553381;
    }
  }
  *param_1 = 0;
LAB_00553381:
  *(undefined1 *)(param_1 + 1) = 1;
  return *(undefined2 *)((int)param_1 + 6);
}


