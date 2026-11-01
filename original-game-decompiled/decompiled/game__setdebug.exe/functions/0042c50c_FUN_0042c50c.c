
/* ==== FUN_0042c50c @ 0042c50c ==== 
 * signature: undefined __register FUN_0042c50c(int param_1)
 * body: 0042c50c-0042c599
 */

void FUN_0042c50c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x10) == '\x01') {
    iVar2 = FUN_0042c464(param_1,'\x01');
  }
  else {
    if (*(char *)(param_1 + 0x10) != '\x02') {
      return;
    }
    iVar2 = FUN_0042c464(param_1,'\x02');
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = FUN_0042c354(param_1);
  iVar3 = iVar2 / iVar3;
  iVar4 = FUN_0042c368(iVar1);
  *(int *)(iVar1 + 0x20) = iVar4 + iVar3;
  FUN_0042c68c(iVar1);
  for (iVar1 = *(int *)(iVar1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    *(int *)(iVar1 + 0x20) = *(int *)(*(int *)(iVar1 + 0x18) + 0x20) + iVar3;
    if (*(int *)(iVar1 + 0xc) == 0) {
      *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + iVar2 % iVar3;
    }
    FUN_0042c68c(iVar1);
  }
  return;
}


