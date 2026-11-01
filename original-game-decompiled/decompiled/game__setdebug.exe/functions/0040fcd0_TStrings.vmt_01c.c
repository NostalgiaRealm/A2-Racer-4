
/* ==== TStrings.vmt_01c @ 0040fcd0 ==== 
 * signature: undefined TStrings.vmt_01c(void)
 * body: 0040fcd0-0040fda6
 * note: Name source: Delphi VMT slot
 */

/* Name source: Delphi VMT slot */

void TStrings_vmt_01c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  int iStack_1c;
  undefined4 *puStack_18;
  int iStack_14;
  int iStack_10;
  int *piStack_c;
  int *piStack_8;
  
  pcStack_2c = (code *)&stack0xfffffffc;
  iStack_1c = 0;
  puStack_18 = (undefined4 *)0x0;
  pcStack_30 = thunk_FUN_00403434;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  piStack_c = param_2;
  piStack_8 = param_1;
  iVar1 = (**(code **)(*param_1 + 0x14))();
  uVar3 = 0;
  iStack_14 = iVar1;
  if (-1 < iVar1 + -1) {
    iStack_10 = 0;
    do {
      (**(code **)(*piStack_8 + 0xc))(piStack_8,iStack_10,&iStack_1c);
      iVar2 = FUN_00403c38(iStack_1c);
      uVar3 = uVar3 + iVar2 + 2;
      iStack_10 = iStack_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  FUN_00403aa0(piStack_c,(undefined4 *)0x0,uVar3);
  puVar4 = (undefined4 *)*piStack_c;
  if (-1 < iStack_14 + -1) {
    iStack_10 = 0;
    iVar1 = iStack_14;
    do {
      (**(code **)(*piStack_8 + 0xc))(piStack_8,iStack_10,&puStack_18);
      uVar3 = FUN_00403c38((int)puStack_18);
      if (uVar3 != 0) {
        FUN_004027d0(puStack_18,puVar4,uVar3);
        puVar4 = (undefined4 *)((int)puVar4 + uVar3);
      }
      *(undefined1 *)puVar4 = 0xd;
      *(undefined1 *)((int)puVar4 + 1) = 10;
      puVar4 = (undefined4 *)((int)puVar4 + 2);
      iStack_10 = iStack_10 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *in_FS_OFFSET = uStack_34;
  pcStack_2c = FUN_0040fdae;
  pcStack_30 = (code *)0x40fda6;
  FUN_004039dc(&iStack_1c,2);
  return;
}


