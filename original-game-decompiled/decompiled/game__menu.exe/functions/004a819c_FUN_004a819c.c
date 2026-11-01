
/* ==== FUN_004a819c @ 004a819c ==== 
 * signature: undefined __register FUN_004a819c(int * param_1)
 * body: 004a819c-004a825c
 */

void FUN_004a819c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar4;
  int extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  code *pcStack_24;
  undefined1 *puStack_20;
  undefined *local_14;
  int local_10;
  undefined *local_c;
  char *local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_8 = (char *)0x0;
  local_c = (undefined *)0x0;
  local_10 = 0;
  local_14 = (undefined *)0x0;
  pcStack_24 = thunk_FUN_004036bc;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  FUN_004029f0(0,(int *)&local_c);
  FUN_00408a30(local_c,(int *)&local_8);
  iVar1 = FUN_004041c8(".",local_8);
  if (0 < iVar1) {
    uVar2 = FUN_00403edc((int)local_8);
    iVar3 = uVar2 - iVar1;
    if (SBORROW4(uVar2,iVar1)) {
      uVar2 = thunk_FUN_00402808(uVar2);
      iVar3 = extraout_ECX;
    }
    iVar4 = iVar1 + 1;
    if (SCARRY4(iVar1,1)) {
      thunk_FUN_00402808(uVar2);
      iVar3 = extraout_ECX_00;
      iVar4 = extraout_EDX;
    }
    FUN_00404124((int *)&local_8,iVar4,iVar3);
  }
  FUN_004029f0(0,(int *)&local_14);
  FUN_004089d4(local_14,&local_10);
  FUN_00403f9c((int *)&local_8,4);
  FUN_00403cb0(param_1,(undefined4 *)local_8);
  *in_FS_OFFSET = &DAT_004a828c;
  FUN_00403c80((int *)&local_14,4);
  return;
}


