
/* ==== FUN_00454324 @ 00454324 ==== 
 * signature: undefined __register FUN_00454324(uint param_1, int * param_2)
 * body: 00454324-0045433d
 */

void FUN_00454324(uint param_1,int *param_2)

{
  int extraout_ECX;
  int iVar1;
  int *extraout_EDX;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 < 0) {
    param_1 = thunk_FUN_00402808(param_1);
    iVar1 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  FUN_004126f0(param_2,*(undefined4 *)(param_1 + 0x28),iVar1);
  return;
}


