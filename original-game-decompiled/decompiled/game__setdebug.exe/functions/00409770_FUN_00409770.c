
/* ==== FUN_00409770 @ 00409770 ==== 
 * signature: undefined __register FUN_00409770(int * param_1, byte * param_2, undefined1 * param_3)
 * body: 00409770-004097c4
 */

void FUN_00409770(int *param_1,byte *param_2,undefined1 *param_3)

{
  undefined4 local_104 [64];
  
  if (param_2 == (byte *)0x0) {
    FUN_00408ffc(&DAT_004097c8,0,param_3,&stack0xfffffffc);
  }
  else {
    FUN_00408ffc(param_2,param_2,param_3,&stack0xfffffffc);
  }
  FUN_00403aa0(param_1,local_104,0);
  return;
}


