
/* ==== Peek @ 0054e3be ==== 
 * signature: undefined1 __fastcall Peek(undefined4 * param_1)
 * body: 0054e3be-0054e3e1
 * note: Library Function - Multiple Matches With Same Base Name  private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(void)  private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char> >::_Peek(void)const   Library: Visual Studio
 */

/* Library Function - Multiple Matches With Same Base Name
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)
    private: char __thiscall std::istreambuf_iterator<char,struct std::char_traits<char>
   >::_Peek(void)const 
   
   Library: Visual Studio */

undefined1 __fastcall Peek(undefined4 *param_1)

{
  uint uVar1;
  
  if ((int *)*param_1 != (int *)0x0) {
    uVar1 = FUN_004d4c30((int *)*param_1);
    if (uVar1 != 0xffffffff) {
      *(char *)((int)param_1 + 5) = (char)uVar1;
      goto LAB_0054e3d9;
    }
  }
  *param_1 = 0;
LAB_0054e3d9:
  *(undefined1 *)(param_1 + 1) = 1;
  return *(undefined1 *)((int)param_1 + 5);
}


