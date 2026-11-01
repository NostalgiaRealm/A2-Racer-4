
/* ==== FUN_004f7ec0 @ 004f7ec0 ==== 
 * signature: undefined8 __fastcall FUN_004f7ec0(int param_1)
 * body: 004f7ec0-004f7efc
 */

undefined8 __fastcall FUN_004f7ec0(int param_1)

{
  uint in_EDX;
  longlong lVar1;
  
  *(short *)(param_1 + 0x140) = *(short *)(param_1 + 0x140) + -1;
  if (*(short *)(param_1 + 0x140) == 0) {
    FUN_0050d450();
    lVar1 = __ftol();
    *(short *)(param_1 + 0x140) = 0xf - (short)lVar1;
    return CONCAT44((int)((ulonglong)lVar1 >> 0x20),1);
  }
  return (ulonglong)in_EDX << 0x20;
}


