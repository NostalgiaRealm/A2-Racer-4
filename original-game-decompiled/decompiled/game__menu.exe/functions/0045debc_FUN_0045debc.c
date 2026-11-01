
/* ==== FUN_0045debc @ 0045debc ==== 
 * signature: undefined __register FUN_0045debc(int param_1, undefined4 param_2)
 * body: 0045debc-0045defa
 */

void FUN_0045debc(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(*(uint *)(param_1 + 0x4c) + 8);
  iVar2 = iVar1 + -1;
  if (SBORROW4(iVar1,1)) {
    thunk_FUN_00402808(*(uint *)(param_1 + 0x4c));
  }
  if (-1 < iVar2) {
    do {
      uVar3 = 0;
      iVar1 = FUN_004102b0(*(undefined4 **)(param_1 + 0x4c),iVar2);
      FUN_0042f720(iVar1,param_2,0,uVar3);
      iVar2 = iVar2 + -1;
    } while (iVar2 != -1);
  }
  return;
}


