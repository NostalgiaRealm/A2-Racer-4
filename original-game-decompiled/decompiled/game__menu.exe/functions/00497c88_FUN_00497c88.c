
/* ==== FUN_00497c88 @ 00497c88 ==== 
 * signature: undefined FUN_00497c88(void)
 * body: 00497c88-00497d50
 */

void FUN_00497c88(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_ECX;
  uint extraout_ECX_00;
  int iVar3;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  int *piVar4;
  char **ppcVar5;
  undefined4 uStack_24;
  undefined *puStack_20;
  undefined1 *puStack_1c;
  int iStack_10;
  char *pcStack_c;
  int iStack_8;
  
  pcStack_c = (char *)0x0;
  iStack_10 = 0;
  puStack_1c = (undefined1 *)0x497ca0;
  iStack_8 = param_1;
  FUN_00404090(param_1);
  puStack_20 = &UNK_00497d51;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  FUN_00403cf4((int *)&pcStack_c,iStack_8);
  (**(code **)(*param_2 + 0x40))();
  iVar1 = FUN_004041c8(",",pcStack_c);
  while (iVar1 != 0) {
    piVar4 = &iStack_10;
    uVar2 = iVar1 - 1;
    if (SBORROW4(iVar1,1)) {
      thunk_FUN_00402808((uint)piVar4);
      uVar2 = extraout_ECX;
    }
    FUN_004040e4((int)pcStack_c,0,uVar2,piVar4);
    (**(code **)(*param_2 + 0x34))(param_2,iStack_10);
    ppcVar5 = &pcStack_c;
    uVar2 = FUN_00403edc((int)pcStack_c);
    iVar3 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402808(uVar2);
      uVar2 = extraout_ECX_00;
      iVar3 = extraout_EDX;
    }
    FUN_004040e4((int)pcStack_c,iVar3,uVar2,(int *)ppcVar5);
    iVar1 = FUN_004041c8(",",pcStack_c);
  }
  (**(code **)(*param_2 + 0x34))(param_2,pcStack_c);
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &UNK_00497d58;
  puStack_20 = (undefined *)0x497d50;
  FUN_00403c80(&iStack_10,3);
  return;
}


