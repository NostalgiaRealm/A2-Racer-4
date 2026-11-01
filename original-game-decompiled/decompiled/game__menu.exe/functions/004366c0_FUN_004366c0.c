
/* ==== FUN_004366c0 @ 004366c0 ==== 
 * signature: undefined __register FUN_004366c0(int param_1)
 * body: 004366c0-0043674d
 */

void FUN_004366c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = FUN_00436618(param_1,'\x01');
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return;
    }
    iVar2 = FUN_00436618(param_1,'\x02');
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = FUN_00436508(param_1);
  iVar3 = iVar2 / iVar3;
  iVar4 = FUN_0043651c(iVar1);
  *(int *)(iVar1 + 0x20) = iVar4 + iVar3;
  FUN_00436840(iVar1);
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0x20) = *(int *)(*(int *)(iVar1 + 0x18) + 0x20) + iVar3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + iVar2 % iVar3;
    }
    FUN_00436840(iVar1);
  }
  return;
}


