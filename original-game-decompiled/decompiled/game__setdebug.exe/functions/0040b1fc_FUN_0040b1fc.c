
/* ==== FUN_0040b1fc @ 0040b1fc ==== 
 * signature: undefined4 __register FUN_0040b1fc(undefined * param_1, int param_2)
 * body: 0040b1fc-0040b21e
 */

undefined4 FUN_0040b1fc(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  
  uVar1 = 0;
  if (DAT_004475b4 != '\0') {
    pbVar2 = FUN_00403dfc(param_1);
    uVar1 = FUN_0040b184(pbVar2,param_2 + -1);
  }
  return uVar1;
}


