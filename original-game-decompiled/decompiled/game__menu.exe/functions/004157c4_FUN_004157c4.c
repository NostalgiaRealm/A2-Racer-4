
/* ==== FUN_004157c4 @ 004157c4 ==== 
 * signature: undefined __register FUN_004157c4(int * param_1)
 * body: 004157c4-00415817
 */

void FUN_004157c4(int *param_1)

{
  int *piVar1;
  
  while ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    piVar1 = (int *)FUN_00410398((undefined4 *)param_1[4]);
    if (((*(byte *)((int)piVar1 + 0x21) & 1) == 0) && ((*(ushort *)(param_1 + 8) & 0x210) != 0x210))
    {
      FUN_0041570c((int)param_1,(int)piVar1);
    }
    else {
      FUN_0041578c(param_1,(int)piVar1);
    }
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  return;
}


