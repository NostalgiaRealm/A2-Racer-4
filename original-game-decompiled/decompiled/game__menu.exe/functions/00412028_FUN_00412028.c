
/* ==== FUN_00412028 @ 00412028 ==== 
 * signature: undefined FUN_00412028(void)
 * body: 00412028-0041209d
 */

void FUN_00412028(int *param_1,int param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  uint extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  code *pcStack_20;
  undefined4 *puStack_10;
  int iStack_c;
  int *piStack_8;
  
  pcStack_20 = (code *)&stack0xfffffffc;
  puStack_10 = (undefined4 *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  iStack_c = param_2;
  piStack_8 = param_1;
  FUN_004154d0(param_2,param_2,0);
  iVar1 = (**(code **)(*piStack_8 + 0x14))();
  uVar2 = extraout_ECX;
  uVar3 = extraout_EDX;
  if (-1 < iVar1 + -1) {
    iVar4 = 0;
    do {
      (**(code **)(*piStack_8 + 0xc))(piStack_8,iVar4,&puStack_10);
      FUN_004154e0(iStack_c,puStack_10,extraout_ECX_00);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + -1;
      uVar2 = extraout_ECX_01;
      uVar3 = extraout_EDX_00;
    } while (iVar1 != 0);
  }
  FUN_004154d8(iStack_c,uVar3,uVar2);
  *in_FS_OFFSET = uStack_28;
  pcStack_20 = FUN_004120a5;
  pcStack_24 = (code *)0x41209d;
  FUN_00403c5c((int *)&puStack_10);
  return;
}


