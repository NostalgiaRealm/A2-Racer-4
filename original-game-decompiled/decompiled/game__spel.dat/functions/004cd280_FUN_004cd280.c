
/* ==== FUN_004cd280 @ 004cd280 ==== 
 * signature: undefined4 __stdcall FUN_004cd280(int param_1)
 * body: 004cd280-004cd2c9
 */

undefined4 FUN_004cd280(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x54);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  FUN_004c3fa0((byte *)s_mode__d__d__d_005b64bc);
  iVar3 = FUN_004ccde0(iVar2,iVar1,iVar3);
  if (iVar3 == -1) {
    return 1;
  }
  *(undefined4 *)(&DAT_005b37c0 + iVar3 * 0x14) = 1;
  return 1;
}


