
/* ==== FUN_0040f898 @ 0040f898 ==== 
 * signature: int __register FUN_0040f898(int param_1)
 * body: 0040f898-0040f934;0040f93c-0040f945
 */

int FUN_0040f898(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = (undefined1 *)0x40f8ae;
  puVar2 = (undefined4 *)FUN_00410750(DAT_004ac624);
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar5 = puVar2[2];
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = FUN_004102b0(puVar2,iVar4);
      cVar1 = FUN_00402ef8(iVar3,param_1);
      if (cVar1 != '\0') {
        FUN_00403794();
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = (**(code **)(*DAT_004ac628 + 0x50))(DAT_004ac628,param_1);
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*DAT_004ac628 + 0x18))(DAT_004ac628,iVar5);
    FUN_00403794();
    return iVar5;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40f93c;
  pcStack_20 = (code *)0x40f934;
  iVar5 = FUN_004107b4(DAT_004ac624);
  return iVar5;
}


