
/* ==== FUN_0045ad2c @ 0045ad2c ==== 
 * signature: undefined __register FUN_0045ad2c(uint param_1)
 * body: 0045ad2c-0045ad37
 */

void FUN_0045ad2c(uint param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x14);
  iVar2 = *piVar1;
  *piVar1 = *piVar1 + 1;
  if (SCARRY4(iVar2,1)) {
    thunk_FUN_00402808(param_1);
  }
  return;
}


