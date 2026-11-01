
/* ==== FUN_00431e58 @ 00431e58 ==== 
 * signature: undefined __register FUN_00431e58(int * param_1)
 * body: 00431e58-00431f2d;00431f4b-00431f51
 */

void FUN_00431e58(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  code *pcStack_20;
  undefined1 *puStack_1c;
  
  if (((*(char *)((int)param_1 + 0x47) == '\0') &&
      (((*(byte *)(param_1 + 8) & 0x10) == 0 || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)))) ||
     ((*(byte *)(param_1 + 0x11) & 8) != 0)) {
    cVar1 = '\0';
  }
  else {
    cVar1 = '\x01';
  }
  if (cVar1 != '\0') {
    if (param_1[0x53] == 0) {
      puStack_1c = (undefined1 *)0x431eae;
      (**(code **)(*param_1 + 0x8c))();
    }
    if ((param_1[0x60] != 0) && (iVar3 = *(int *)(param_1[0x60] + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        puStack_1c = (undefined1 *)0x431ed6;
        piVar2 = (int *)FUN_004102b0((undefined4 *)param_1[0x60],iVar4);
        puStack_1c = (undefined1 *)0x431edb;
        FUN_00431e58(piVar2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if ((param_1[0x53] != 0) && ((char)param_1[0x5a] != cVar1)) {
    *(char *)(param_1 + 0x5a) = cVar1;
    pcStack_20 = thunk_FUN_00403408;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_0042f720((int)param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_24;
  }
  return;
}


