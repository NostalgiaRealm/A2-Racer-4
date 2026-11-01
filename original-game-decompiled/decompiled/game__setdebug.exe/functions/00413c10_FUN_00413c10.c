
/* ==== FUN_00413c10 @ 00413c10 ==== 
 * signature: undefined __register FUN_00413c10(int * param_1)
 * body: 00413c10-00413c63
 */

void FUN_00413c10(int *param_1)

{
  int *piVar1;
  
  while ((undefined4 *)param_1[4] != (undefined4 *)0x0) {
    piVar1 = (int *)FUN_0040f10c((undefined4 *)param_1[4]);
    if (((*(byte *)((int)piVar1 + 0x21) & 1) == 0) && ((*(ushort *)(param_1 + 8) & 0x210) != 0x210))
    {
      FUN_00413b58((int)param_1,(int)piVar1);
    }
    else {
      FUN_00413bd8(param_1,(int)piVar1);
    }
    (**(code **)(*piVar1 + -4))(piVar1,1);
  }
  return;
}


