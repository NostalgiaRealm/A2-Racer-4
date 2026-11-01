
/* ==== FUN_00449fc8 @ 00449fc8 ==== 
 * signature: undefined __register FUN_00449fc8(int param_1)
 * body: 00449fc8-0044a035
 */

void FUN_00449fc8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x168) != '\0') {
    iVar1 = FUN_004317bc(param_1);
    if (-1 < iVar1 + -1) {
      iVar4 = 0;
      do {
        piVar2 = (int *)FUN_00431780(param_1,iVar4);
        if (((*(byte *)((int)piVar2 + 0x41) & 0x80) != 0) && (*(char *)((int)piVar2 + 0x47) != '\0')
           ) {
          (**(code **)(*piVar2 + 0x70))();
        }
        uVar3 = FUN_00403114(piVar2,(int)&PTR_TWinControl_vmt_000_0042ac0c);
        if ((char)uVar3 != '\0') {
          FUN_00449fc8((int)piVar2);
        }
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
  }
  return;
}


