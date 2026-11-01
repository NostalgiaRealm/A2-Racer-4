
/* ==== FUN_00427eb8 @ 00427eb8 ==== 
 * signature: undefined __register FUN_00427eb8(int * param_1)
 * body: 00427eb8-00427f8d;00427fab-00427fb1
 */

void FUN_00427eb8(int *param_1)

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
      puStack_1c = (undefined1 *)0x427f0e;
      (**(code **)(*param_1 + 0x8c))();
    }
    if ((param_1[0x60] != 0) && (iVar3 = *(int *)(param_1[0x60] + 8), -1 < iVar3 + -1)) {
      iVar4 = 0;
      do {
        puStack_1c = (undefined1 *)0x427f36;
        piVar2 = (int *)FUN_0040f024((undefined4 *)param_1[0x60],iVar4);
        puStack_1c = (undefined1 *)0x427f3b;
        FUN_00427eb8(piVar2);
        iVar4 = iVar4 + 1;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  if ((param_1[0x53] != 0) && ((char)param_1[0x5a] != cVar1)) {
    *(char *)(param_1 + 0x5a) = cVar1;
    pcStack_20 = thunk_FUN_00403180;
    uStack_24 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_24;
    puStack_1c = &stack0xfffffffc;
    FUN_00425780((int)param_1,0xb019,0,0);
    *in_FS_OFFSET = uStack_24;
  }
  return;
}


