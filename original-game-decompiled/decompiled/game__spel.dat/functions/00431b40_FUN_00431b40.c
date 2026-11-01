
/* ==== FUN_00431b40 @ 00431b40 ==== 
 * signature: undefined __cdecl FUN_00431b40(float * param_1, float param_2, float param_3)
 * body: 00431b40-00431c10
 */

void __cdecl FUN_00431b40(float *param_1,float param_2,float param_3)

{
  int iVar1;
  
  FUN_00431ad0(0x20);
  FUN_00431b00();
  FUN_004c5930(0,0,0,&DAT_00598018);
  iVar1 = FUN_004c5e40(0x1b);
  while (iVar1 == 0) {
    FUN_004c5930(0,0,0x28,(byte *)s__s___f_0059801c);
    iVar1 = FUN_004c5e40(0x6b);
    if (iVar1 != 0) {
      *param_1 = param_2 + *param_1;
      FUN_00431ad0(0x6b);
    }
    iVar1 = FUN_004c5e40(0x6d);
    if (iVar1 != 0) {
      *param_1 = *param_1 - param_3;
      FUN_00431ad0(0x6d);
    }
    iVar1 = FUN_004c5e40(0x52);
    if (iVar1 != 0) {
      *param_1 = 0.0;
      FUN_00431ad0(0x52);
    }
    iVar1 = FUN_004c5e40(0x1b);
  }
  FUN_00431ad0(0x1b);
  return;
}


