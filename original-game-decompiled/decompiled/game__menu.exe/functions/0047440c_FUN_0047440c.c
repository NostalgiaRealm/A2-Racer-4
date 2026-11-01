
/* ==== FUN_0047440c @ 0047440c ==== 
 * signature: undefined __register FUN_0047440c(int param_1, uint param_2)
 * body: 0047440c-00474439
 */

void FUN_0047440c(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = FUN_004108e4(*(int *)(param_1 + 0x78),param_2);
  if ((char)uVar3 != '\0') {
    piVar1 = (int *)(param_1 + 0x7c);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -1;
    if (SBORROW4(iVar2,1)) {
      thunk_FUN_00402808(uVar3);
    }
    FUN_004108b8(*(int *)(param_1 + 0x78),param_2,'\0');
  }
  return;
}


