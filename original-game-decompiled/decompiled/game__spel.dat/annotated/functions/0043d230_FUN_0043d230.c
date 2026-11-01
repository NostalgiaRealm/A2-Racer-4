
/* ==== FUN_0043d230 @ 0043d230 ==== 
 * signature: undefined __cdecl FUN_0043d230(int param_1, undefined4 param_2)
 * body: 0043d230-0043d3b4
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0043d230(int param_1,undefined4 param_2)

{
  int iVar1;
  
  DAT_006c40c0 = FUN_004b4c70(0,0,0,0,0,0,param_1,param_2,FUN_004b5620);
  *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 * 0xa9 + 0xa1) = 2;
  *(undefined1 *)(DAT_0073b0d0 + DAT_006c40c0 * 0xa9 + 0x90) = 1;
  DAT_006c40a0 = 0x41200000;
  DAT_006c40a4 = 0x40800000;
  DAT_006c40a8 = 0x41200000;
  iVar1 = DAT_0073b0d0 + DAT_006c40c0 + 0x80 + DAT_006c40c0 * 0xa8;
  *(undefined4 *)(DAT_0073b0d0 + DAT_006c40c0 + 0x80 + DAT_006c40c0 * 0xa8) = 0x41200000;
  *(undefined4 *)(iVar1 + 4) = 0x40800000;
  *(undefined4 *)(iVar1 + 8) = 0x41200000;
  FUN_004b5770(DAT_0073b0d0 + DAT_006c40c0 * 0xa9);
  iVar1 = DAT_0073b5c8 + 0x58 + param_1 * 0xac;
  _DAT_006c40b0 = *(undefined4 *)(DAT_0073b5c8 + 0x58 + param_1 * 0xac);
  _DAT_006c40b4 = *(undefined4 *)(iVar1 + 4);
  _DAT_006c40b8 = *(undefined4 *)(iVar1 + 8);
  return;
}


