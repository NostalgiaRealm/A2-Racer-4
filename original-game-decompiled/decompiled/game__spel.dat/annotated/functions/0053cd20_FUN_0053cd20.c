
/* ==== FUN_0053cd20 @ 0053cd20 ==== 
 * signature: undefined __fastcall FUN_0053cd20(int param_1)
 * body: 0053cd20-0053cd48
 */

void __fastcall FUN_0053cd20(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x30);
  while (sVar1 != 0) {
    (**(code **)(**(int **)((uint)*(ushort *)(param_1 + 0x2e) * 0x10 + 0xc +
                           *(int *)(param_1 + 0x24)) + 8))(param_1);
    sVar1 = *(short *)(param_1 + 0x30);
  }
  return;
}


