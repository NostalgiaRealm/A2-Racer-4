
/* ==== FUN_0041b320 @ 0041b320 ==== 
 * signature: undefined __register FUN_0041b320(int param_1, HBITMAP param_2, HPALETTE param_3, undefined4 * param_4)
 * body: 0041b320-0041b3ae;0041b3d5-0041b3dd
 */

void FUN_0041b320(int param_1,HBITMAP param_2,HPALETTE param_3,undefined4 *param_4)

{
  HPALETTE pHVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar4;
  undefined4 uStack_78;
  code *pcStack_74;
  undefined1 *puStack_70;
  undefined4 local_60 [21];
  HPALETTE local_c;
  HPALETTE local_8;
  
  puVar3 = local_60;
  for (iVar2 = 0x15; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  puStack_70 = (undefined1 *)0x41b345;
  FUN_0041b8a0(param_1);
  local_8 = (HPALETTE)0x0;
  local_c = (HPALETTE)0x0;
  pcStack_74 = thunk_FUN_00403180;
  uStack_78 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_78;
  puStack_70 = &stack0xfffffffc;
  pHVar1 = param_3;
  if (param_3 != DAT_00447648) {
    puStack_70 = &stack0xfffffffc;
    pHVar1 = FUN_0041af1c(param_3);
  }
  local_c = pHVar1;
  local_8 = FUN_0041a8c0(param_2,param_3,local_c,*(int *)(param_1 + 0x24),(int)local_60);
  uVar4 = 0;
  FUN_0041ba80(param_1,local_8,local_c,(int *)0x0,*(undefined1 *)(*(int *)(param_1 + 0x20) + 0x70),
               local_60);
  *in_FS_OFFSET = uVar4;
  return;
}


