
/* ==== FUN_0040b220 @ 0040b220 ==== 
 * signature: undefined4 __register FUN_0040b220(byte * param_1, int param_2)
 * body: 0040b220-0040b234
 */

undefined4 FUN_0040b220(byte *param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_004475b4 != '\0') {
    uVar1 = FUN_0040b184(param_1,param_2);
  }
  return uVar1;
}


