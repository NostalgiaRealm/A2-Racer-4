
/* ==== FUN_00474390 @ 00474390 ==== 
 * signature: uint __register FUN_00474390(int * param_1)
 * body: 00474390-004743d7
 */

uint FUN_00474390(int *param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_EDX;
  
  uVar1 = FUN_004108fc(param_1[0x1e]);
  if (*(int *)(param_1[0x1e] + 4) <= (int)uVar1) {
    uVar1 = FUN_0043a6ec(param_1,(int *)0x0,(int *)0x0);
    iVar2 = uVar1 + 1;
    if (SCARRY4(uVar1,1)) {
      thunk_FUN_00402808(uVar1);
      iVar2 = extraout_EDX;
    }
    FUN_00410814(param_1[0x1e],iVar2);
  }
  FUN_004108b8(param_1[0x1e],uVar1,'\x01');
  return uVar1;
}


