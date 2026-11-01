
/* ==== FUN_0047d544 @ 0047d544 ==== 
 * signature: undefined __register FUN_0047d544(int param_1)
 * body: 0047d544-0047d59c
 */

void FUN_0047d544(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = FUN_004317bc(param_1);
  iVar4 = uVar1 - 1;
  if (SBORROW4(uVar1,1)) {
    thunk_FUN_00402808(uVar1);
  }
  if (-1 < iVar4) {
    do {
      piVar2 = (int *)FUN_00431780(param_1,iVar4);
      uVar3 = FUN_00403114(piVar2,(int)&PTR_TControl_vmt_000_00476b74);
      if ((char)uVar3 != '\0') {
        piVar2 = (int *)FUN_00431780(param_1,iVar4);
        FUN_00402f9c(piVar2);
      }
      iVar4 = iVar4 + -1;
    } while (iVar4 != -1);
  }
  *(undefined4 *)(param_1 + 0x2e4) = 0x2a;
  return;
}


