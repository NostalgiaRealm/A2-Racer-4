
/* ==== FUN_0045fc70 @ 0045fc70 ==== 
 * signature: undefined __register FUN_0045fc70(uint param_1)
 * body: 0045fc70-0045fca9
 */

void FUN_0045fc70(uint param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = param_1;
  if (param_1 == 0) {
    uVar3 = FUN_00403c40(" Self = nil: ExitProc");
  }
  if (*(char *)(param_1 + 0xc) != '\0') {
    piVar1 = (int *)(param_1 + 0x10);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402808(uVar3);
    }
    FUN_00403c5c((int *)(param_1 + 8));
  }
  return;
}


