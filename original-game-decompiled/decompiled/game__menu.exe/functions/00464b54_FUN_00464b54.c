
/* ==== FUN_00464b54 @ 00464b54 ==== 
 * signature: undefined __register FUN_00464b54(int param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4)
 * body: 00464b54-00464bda
 */

void FUN_00464b54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  puStack_1c = &stack0xfffffffc;
  *(undefined1 *)(param_1 + 0x28) = 1;
  pcStack_20 = thunk_FUN_004036bc;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  bVar1 = false;
  iVar2 = FUN_00464f48(param_1);
  iVar2 = iVar2 + -1;
  if (-1 < iVar2) {
    do {
      if (bVar1) {
LAB_00464bb2:
        bVar1 = true;
      }
      else {
        uVar4 = param_4;
        iVar3 = FUN_00464f34(param_1,iVar2);
        uVar4 = FUN_004645d0(iVar3,param_2,param_3,uVar4);
        if ((char)uVar4 != '\0') goto LAB_00464bb2;
        bVar1 = false;
      }
    } while ((*(char *)(param_1 + 0x28) != '\0') && (iVar2 = iVar2 + -1, iVar2 != -1));
  }
  *in_FS_OFFSET = uStack_24;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return;
}


