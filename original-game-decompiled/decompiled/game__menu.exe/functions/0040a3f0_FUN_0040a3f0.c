
/* ==== FUN_0040a3f0 @ 0040a3f0 ==== 
 * signature: undefined __register FUN_0040a3f0(int * param_1, byte * param_2, undefined1 * param_3)
 * body: 0040a3f0-0040a444
 */

void FUN_0040a3f0(int *param_1,byte *param_2,undefined1 *param_3)

{
  undefined4 local_104 [64];
  
  if (param_2 == (byte *)0x0) {
    FUN_00409c7c(&DAT_0040a448,0,param_3,&stack0xfffffffc);
  }
  else {
    FUN_00409c7c(param_2,param_2,param_3,&stack0xfffffffc);
  }
  FUN_00403d44(param_1,local_104,0);
  return;
}


