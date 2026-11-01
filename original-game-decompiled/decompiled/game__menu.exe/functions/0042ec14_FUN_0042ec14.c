
/* ==== FUN_0042ec14 @ 0042ec14 ==== 
 * signature: undefined __register FUN_0042ec14(int * param_1, undefined4 param_2, undefined4 param_3)
 * body: 0042ec14-0042ec42
 */

void FUN_0042ec14(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  piVar1 = (int *)param_1[9];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xac))(piVar1,param_1);
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if (((*(byte *)(param_1 + 8) & 0x10) == 0) || ((*(byte *)((int)param_1 + 0x41) & 4) != 0)) {
    TGroupBox_set_Visible(param_1,CONCAT31((int3)((uint)param_2 >> 8),1),param_3);
  }
  return;
}


