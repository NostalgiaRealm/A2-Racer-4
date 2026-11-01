
/* ==== FUN_0042fdd4 @ 0042fdd4 ==== 
 * signature: undefined __register FUN_0042fdd4(int * param_1, int param_2, undefined1 param_3)
 * body: 0042fdd4-0042fe0d
 */

void FUN_0042fdd4(int *param_1,int param_2,undefined1 param_3)

{
  byte bVar1;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  
  if ((*(byte *)((int)param_1 + 0x41) & 0x10) == 0) {
    bVar1 = FUN_00444718(CONCAT22(*(short *)(param_2 + 10) >> 0xf,*(undefined2 *)(param_2 + 4)));
    FUN_00403178(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_3),
                 CONCAT31(extraout_var,bVar1));
  }
  return;
}


