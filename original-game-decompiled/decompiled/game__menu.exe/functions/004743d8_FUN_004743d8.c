
/* ==== FUN_004743d8 @ 004743d8 ==== 
 * signature: uint __register FUN_004743d8(int * param_1, int * param_2, int param_3)
 * body: 004743d8-00474408
 */

uint FUN_004743d8(int *param_1,int *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = FUN_00474390(param_1);
  uVar4 = FUN_0043a940(param_1,uVar3,param_2,param_3);
  piVar1 = param_1 + 0x1f;
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402808(uVar4);
  }
  return uVar3;
}


