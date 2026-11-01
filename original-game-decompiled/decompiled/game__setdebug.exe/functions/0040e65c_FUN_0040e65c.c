
/* ==== FUN_0040e65c @ 0040e65c ==== 
 * signature: int __register FUN_0040e65c(int param_1)
 * body: 0040e65c-0040e6f8;0040e700-0040e709
 */

int FUN_0040e65c(int param_1)

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
  
  puStack_1c = (undefined1 *)0x40e672;
  puVar2 = (undefined4 *)FUN_0040f38c(DAT_0044761c);
  pcStack_20 = thunk_FUN_00403434;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  iVar5 = puVar2[2];
  puStack_1c = &stack0xfffffffc;
  if (-1 < iVar5 + -1) {
    iVar4 = 0;
    puStack_1c = &stack0xfffffffc;
    do {
      iVar3 = FUN_0040f024(puVar2,iVar4);
      cVar1 = FUN_00402c74(iVar3,param_1);
      if (cVar1 != '\0') {
        FUN_0040350c();
        return iVar3;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  iVar5 = (**(code **)(*DAT_00447620 + 0x50))(DAT_00447620,param_1);
  if (-1 < iVar5) {
    iVar5 = (**(code **)(*DAT_00447620 + 0x18))(DAT_00447620,iVar5);
    FUN_0040350c();
    return iVar5;
  }
  *in_FS_OFFSET = uStack_24;
  puStack_1c = (undefined1 *)0x40e700;
  pcStack_20 = (code *)0x40e6f8;
  iVar5 = FUN_0040f3f0(DAT_0044761c);
  return iVar5;
}


